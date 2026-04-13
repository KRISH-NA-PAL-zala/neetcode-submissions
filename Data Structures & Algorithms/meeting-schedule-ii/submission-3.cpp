/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        if(!intervals.size()) return 0;
        priority_queue<int, vector<int>, greater<int>> pq;
        sort(intervals.begin(), intervals.end(), [](const auto &a, const auto &b){ return a.start < b.start; });
        int room = 0;

        for(int i = 0;i < intervals.size();i++){
            pq.push(intervals[i].end);
            if(intervals[i].start < pq.top()) room++;
            else{
                pq.pop();
            }
        }
        return room;
    }
};
