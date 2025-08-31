#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> primeFactorization(int N) {
        vector<int> factors;

       
        while (N % 2 == 0) {
            factors.push_back(2);
            N /= 2;
        }


        for (int i = 3; i * 1LL * i <= N; i += 2) {
            while (N % i == 0) {
                factors.push_back(i);
                N /= i;
            }
        }

        
        if (N > 1) {
            factors.push_back(N);
        }

        return factors;
    }
};

int main() {
    Solution sol;
    int N;
    cin >> N;
    vector<int> result = sol.primeFactorization(N);

    for (int x : result) cout << x << " ";
    cout << endl;
    return 0;
}
