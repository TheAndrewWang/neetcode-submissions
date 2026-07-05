class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for (char c : s) {
            if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) {
                str += tolower(c);
            }
        }

        int l = 0;
        int r = str.length() - 1;
        while (l < r) {
            if (str[l] != str[r]) {
                cout << s[l] << " " << s[r];
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
