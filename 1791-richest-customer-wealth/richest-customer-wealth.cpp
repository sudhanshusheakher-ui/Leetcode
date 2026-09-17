class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int  maxwealth=0;
        for(const auto& customer : accounts){
           int currentwealth = 0;
           for(int bank : customer){
            currentwealth += bank;
           }
           maxwealth =  max(maxwealth,currentwealth);
           }
        
        return maxwealth;
        
    }
};