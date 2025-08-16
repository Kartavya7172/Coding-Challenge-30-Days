#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr = {1,3,4,5};
    int n= arr.size();
    bool flag = false;
    for(int i=0;i<n;i++)
    {
        if(arr[i] != i+1)
        {
            cout<<i+1<<endl;
            flag = true;
            break;
        }
       
    }
    if(!flag)
    {
        cout<<arr[n-1]+1;
    }
    return 0;
}