#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> result;
    vector<bool> used;

    void backtrack(string &s, string &current) {
        if (current.size() == s.size()) {
            result.push_back(current);
            return;
        }

        for (int i = 0; i < s.size(); i++) {

            if (used[i]) continue;

            if (i > 0 && s[i] == s[i-1] && !used[i-1]) continue;


            used[i] = true;
            current.push_back(s[i]);


            backtrack(s, current);

            current.pop_back();
            used[i] = false;
        }
    }

    vector<string> permuteUnique(string s) {
        sort(s.begin(), s.end());
        used.assign(s.size(), false);
        string current = "";
        backtrack(s, current);
        return result;
    }
};

int main() {
    Solution sol;
    string s;
    cin >> s;

    vector<string> ans = sol.permuteUnique(s);
    for (auto &p : ans) cout << p << " ";
    cout << endl;
}
