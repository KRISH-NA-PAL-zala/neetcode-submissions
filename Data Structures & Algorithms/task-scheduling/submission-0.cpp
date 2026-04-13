class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26);
        priority_queue<int> heap;
        for(auto task: tasks){
            freq[task - 'A']++;
        }
        for(auto c: freq){
            if(c > 0) heap.push(c);
        }

        int time = 0;
        queue<pair<int, int>> q;
        while(!heap.empty() || !q.empty()){
            time++;

            if(heap.empty()){
                time = q.front().second;
            }else{
                int c = heap.top() - 1;
                heap.pop();
                if(c > 0){
                    q.push({c, time + n});
                }
            }

            if(!q.empty() && q.front().second == time){
                heap.push(q.front().first);
                q.pop();
            }
        }
        return time;
    }
};
