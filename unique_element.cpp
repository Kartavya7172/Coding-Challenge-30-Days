#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<int,int>arr;
    int brr[5] = {1,4,4,2,3};
    for(int i=0;i<5;i++)
    {
        arr[brr[i]]++;
    }
    for(auto it:arr)
    {
        if(it.second>1)
        {
            cout<<it.first<<endl;
        }
    }
}