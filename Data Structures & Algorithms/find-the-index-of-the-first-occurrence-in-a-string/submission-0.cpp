class Solution {
public:
    int strStr(string haystack, string needle) {
        int l = 0;
        int r = needle.size() - 1;

        while (r < haystack.size()) {
            if (haystack.substr(l, needle.size()) == needle) {
                return l;
            }
            l++;
            r++;
        }
        return -1;
    }
};