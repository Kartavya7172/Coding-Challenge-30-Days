#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

int lengthOfLongestSubstring(const string& s) {
    vector<int> last_seen(256, -1); 
    int left = 0, max_len = 0;

    for (int right = 0; right < (int)s.size(); right++) {
        char c = s[right];

    
        if (last_seen[c] >= left) {
            left = last_seen[c] + 1;
        }

        last_seen[c] = right; 
        max_len = max(max_len, right - left + 1);
    }

    return max_len;
}

int main() {

    cout << lengthOfLongestSubstring("abcabcbb") << endl; 

    return 0;
}
