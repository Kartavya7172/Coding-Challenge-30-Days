#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<pair<int, int>> findZeroSumSubarrays(vector<int>& arr) {
    int n = arr.size();
    long long prefixSum = 0;
    unordered_map<long long, vector<int>> hashmap;
    vector<pair<int, int>> result;

    for (int i = 0; i < n; i++) {
        prefixSum += arr[i];

 
        if (prefixSum == 0) {
            result.push_back({0, i});
        }

       
        if (hashmap.find(prefixSum) != hashmap.end()) {
            for (int prevIndex : hashmap[prefixSum]) {
                result.push_back({prevIndex + 1, i});
            }
        }

      
        hashmap[prefixSum].push_back(i);
    }

    return result;
}

int main() {
    vector<int> arr = {1, 2, -3, 3, -1, 2};

    vector<pair<int, int>> res = findZeroSumSubarrays(arr);

    cout << "Zero-sum subarrays: ";
    for (auto& p : res) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;

    return 0;
}
