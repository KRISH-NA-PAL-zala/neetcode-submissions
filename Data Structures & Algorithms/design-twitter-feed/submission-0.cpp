class Twitter {
    unordered_map<int, set<int>> followers;
    vector<pair<int, int>> tweets;
public:
    Twitter() {}
    
    void postTweet(int userId, int tweetId) {
        tweets.push_back({userId, tweetId});
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<int> res;
        for(int i = tweets.size();i >= 0;i--){
            int user = tweets[i].first;
            int tweet = tweets[i].second;
            if(user == userId || followers[user].contains(userId)){
                res.push_back(tweet);
            }

            if(res.size() == 10) break;
        }
        return res;
    }
    
    void follow(int followerId, int followeeId) {
        followers[followeeId].insert(followerId);
    }
    
    void unfollow(int followerId, int followeeId) {
        followers[followeeId].erase(followerId);
    }
};
