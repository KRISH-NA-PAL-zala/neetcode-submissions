class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> minHeap;
    int s = 0;
    KthLargest(int k, vector<int>& nums) {
        s = k;
        for(auto num: nums){
            minHeap.push(num);
            if(minHeap.size() > k){
                minHeap.pop();
            }
        }
    }
    
    int add(int val) {
        minHeap.push(val);
        if(minHeap.size() > s){
            minHeap.pop();
        }
        return minHeap.top();
    }
};
