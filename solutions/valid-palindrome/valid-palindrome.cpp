class Solution {
public:
    string cleanString(string &s) {
    string ans = "";
    for (char c : s) {
        if (isalnum(c)) {
            ans += tolower(c);
        }
    }

    return ans;

}
    bool check(string &s,int left,int right){
        if(left>=right) return true;
        if(s[left]!= s[right]) return false;
        return check(s,left+1,right-1);
    }

    bool isPalindrome(string s) {
        string x = cleanString(s);
        return check(x,0,x.length()-1);
    }
};