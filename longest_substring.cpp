#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    

    string checkplalindrome(string &s, int i, int j) {
        while (i >= 0 && j < s.length() && s[i] == s[j]) {
            i--;
            j++;
        }

        return s.substr(i + 1, j - i - 1);
    }

    string countSubstrings(string s) {
        string longest = "";

        for (int centre = 0; centre < s.length(); centre++) {   

            string odd = checkplalindrome(s, centre, centre);
            if (odd.length() > longest.length()) 
                longest = odd;

            string even = checkplalindrome(s, centre, centre + 1);
            if (even.length() > longest.length()) 
                longest = even;
        }
        return longest;
    }
};

int main() {
    Solution sol;
    string s = "babad";
    cout << "Longest Palindromic Substring: " << sol.countSubstrings(s) << endl;
}
