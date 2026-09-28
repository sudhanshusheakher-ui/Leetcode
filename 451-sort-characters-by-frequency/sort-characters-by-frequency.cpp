class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> map;
        for(int i=0;i<s.size();i++){
            map[s[i]]++;
        }
        vector<pair<char,int>> freqvec(map.begin(),map.end());
        sort(freqvec.begin(),freqvec.end(),[](const pair<char,int>& a, const pair<char,int>& b){return a.second > b.second;});
        string result="";
        for(const auto& [ch,count] :freqvec){
            result.append(count,ch);
        }
        return result;
    }
};