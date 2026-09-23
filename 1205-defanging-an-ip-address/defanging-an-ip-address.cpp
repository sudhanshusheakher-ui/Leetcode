class Solution {
public:
    string defangIPaddr(string address) {
        string newaddress;
        for(char c :address){
            if(c=='.'){
                
                newaddress+="[.]";

            }else{
            newaddress +=c;
            }
        }

        return newaddress;
    }
};