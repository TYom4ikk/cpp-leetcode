class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        std::string strX = std::to_string(x);
        for(int i = 0; i<strX.size()/2;i++){
            if(strX[i] != strX[strX.size()-1-i]){
            return false;
            }
        }
        return true;
    }
};