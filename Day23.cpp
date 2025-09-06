#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int find_max1(vector<int>frame,int s,int e)
{
     int max1 = INT_MIN;
     for(int i=s;i<=e;i++)
     {
        if(frame[i]>max1)
        {
          max1 = frame[i];
        }
     }
     return max1;
}
vector<int>ans;
vector<int> find_max(vector<int>brr,int k2)
{
  int n = brr.size();
   int max= INT_MAX;
   k2 = k2-1;
   for(int i=0;i<=n-k2-1;i++)
   {
       max = find_max1(brr,i,k2+i); 
       ans.push_back(max);
   }
   return ans;
}

int main()
{
  vector<int>arr = {1, 5, 3, 2, 4, 6};
  int k1 =3;
  vector<int>ans1;
  ans1 = find_max(arr,k1);
  for(int i=0;i<ans1.size();i++)
  {
    cout<<ans1[i]<<" ";
  }
 
  return 0;
}