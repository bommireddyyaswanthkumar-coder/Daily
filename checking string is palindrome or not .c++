class Solution {
public:
    bool isPalindrome(string s) {
        string inew;
        for (char c : s){
            if(isalnum(c)){
                inew += tolower(c);
            }
        }
        int left=0;
        int right=inew.size()-1;

        while (left < right){
            if(inew[left]!=inew[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
        
    }
};
