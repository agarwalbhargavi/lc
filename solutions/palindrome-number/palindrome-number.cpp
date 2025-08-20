class Solution {
public:
    bool isPalindrome(int x) {
        bool istrue=true;
        long long rev=0;
        int temp=x;
        while(temp != 0)
	{
		int ld = temp % 10;
        rev = rev * 10 + ld;
        temp = temp / 10;
	}
        if(x<0) istrue=false;
        if(rev!=x) istrue=false;
        return istrue;
    }
};