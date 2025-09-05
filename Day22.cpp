#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int find(vector<int>brr,int k1)
{
    int n= brr.size();
    unordered_map<int,int>m(n);
    for(int i=0;i<n;i++)
    {
        m[brr[i]]++;
    }
    for(auto it :m)
    {
        if(it.second == k1)
        {
            return it.first;
        }
    }
    return -1;
}

int main()
{
    vector<int>arr = {6,6,6,6,7,7,8,8,8};
    int k = 3;
    
    int number = find(arr,k);
    cout<<number<<endl;
}