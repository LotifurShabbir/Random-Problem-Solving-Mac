class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        long long int org = x, temp = 0;
        while(x > 0){
            int last_dig = x % 10;
            temp = temp * 10 + last_dig;
            x /= 10;
        }
        return org == temp;
        
    }
};

//-----------string conversion solution added-------------
class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        reverse(s.begin(), s.end());
        return s == to_string(x);
    }
};