class Solution {
public:
    bool detectCapitalUse(string word) {
        int uppercase=0;
        for(int i=0;i<word.size();i++){
            if(std::isupper(word[i])){
                uppercase=uppercase+1;
            } 
            }
        if(uppercase==0) return true;
        if(uppercase==word.size()) return true;
        if(uppercase==1 && std::isupper(word[0])) return true;
        return false;
    }
};