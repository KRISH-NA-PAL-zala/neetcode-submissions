class TimeMap {
public:
    unordered_map<string, unordered_map<int, string>> m;
    TimeMap() {}
    
    void set(string key, string value, int timestamp) {
        m[key][timestamp] = value;
    }
    
    string get(string key, int timestamp) {
        if(m.find(key) == m.end()) return "";
        while(m[key].find(timestamp) == m[key].end()){
            timestamp -= 1;
            if(timestamp < 1) break;
        }
        return m[key][timestamp];
    }
};
