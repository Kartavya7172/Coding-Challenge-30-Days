#include <iostream>
using namespace std;

void findLeaders(int arr[], int n) {
    int leaders[n];   
    int index = 0;    
    int max_from_right = -1;  

    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= max_from_right) {
            leaders[index++] = arr[i];
            max_from_right = arr[i];
        }
    }

    for (int i = index - 1; i >= 0; i--) {
        cout << leaders[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {16, 17, 4, 3, 5, 2};


    findLeaders(arr1, 6); 

 }
