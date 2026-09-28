class Solution {
public:
    string frequencySort(string s) {
        vector<int> map(128,0);
        for (auto ch: s){
            map[ch]++;
        }
        auto cmp=[&](char a, char b){
            if(map[a]==map[b]) return a<b;
            return map[a]>map[b];
        };
        sort(s.begin(),s.end(),cmp);
        return s;
    }
};