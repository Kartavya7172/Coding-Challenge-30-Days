#include<iostream>
#include<algorithm>
using namespace std;

void mergeAndSort(int *firstArr, int *secondArr, int size)
{
    for (int i = 0; i < size; i++) {
        if (firstArr[i] > secondArr[0]) {
            swap(firstArr[i], secondArr[0]);
            sort(secondArr, secondArr + size);
        }
    }
}

void printArray(int* arr, int n)
{
    for(int i = 0; i<n; i++)
        cout << arr[i] << "\t";
    cout << endl;
}

int main()
{
    int firstArr[] = {10, 12, 14};
    int secondArr[] = {1, 3, 5};
    int size = sizeof(firstArr) / sizeof(firstArr[0]);
    
    mergeAndSort(firstArr, secondArr, size);
    
    printArray(firstArr, size);
    printArray(secondArr, size);
    
    return 0;
}
