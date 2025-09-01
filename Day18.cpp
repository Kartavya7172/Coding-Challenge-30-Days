#include<iostream>
#include<vector>
using namespace std;
int count_divisor(int m)
{
    int icnt =0;
    for(int i=1;i*i<=m;i++)
    {
        if(m%i == 0)
        {
            if(i*i == m)
            {
                icnt++;
            }
            else
            {
                icnt =icnt+2;
            }
        }
    }
    return icnt;
}
int main()
{
    int n;
    cin>>n;

    int count = count_divisor(n);
    cout<<count<<endl;
}