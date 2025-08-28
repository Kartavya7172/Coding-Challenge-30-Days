#include<iostream>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int atMostKDistinct(string &s, int k) {
        int n = s.size();
        int left = 0, count = 0;
        unordered_map<char,int> freq;

        for (int right = 0; right < n; right++) {
            freq[s[right]]++;

            while ((int)freq.size() > k) {
                freq[s[left]]--;
                if (freq[s[left]] == 0) {
                    freq.erase(s[left]);
                }
                left++;
            }

            
            count += (right - left + 1);
        }
        return count;
    }

    int countExactlyKDistinct(string s, int k) {
        return atMostKDistinct(s, k) - atMostKDistinct(s, k-1);
    }
};

int main() {
    string s = "pqpqs";
    int k = 2;
    Solution obj;
    cout << obj.countExactlyKDistinct(s, k) << endl; 
    return 0;
}
