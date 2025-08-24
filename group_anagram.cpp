#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& words) {
        map<string, vector<string>> groups;
        for (int i = 0; i < words.size(); i++) {
            string temp = words[i];
            sort(temp.begin(), temp.end());
            groups[temp].push_back(words[i]);
        }
        vector<vector<string>> ans;
        for (auto it = groups.begin(); it != groups.end(); it++) {
            ans.push_back(it->second);
        }
        return ans;
    }
};

int main() {
    vector<string> input = {"eat", "tea", "tan", "ate", "nat", "bat"};
    Solution obj;
    vector<vector<string>> output = obj.groupAnagrams(input);

    for (int i = 0; i < output.size(); i++) {
        cout << "{ ";
        for (int j = 0; j < output[i].size(); j++) {
            cout << output[i][j] << " ";
        }
        cout << "}\n";
    }
    return 0;
}
