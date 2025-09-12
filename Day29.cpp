#include<iostream>
using namespace std;
int fibonnaci(int n)
{
     if(n == 0) return 0;
     if(n==1) return 1;

     int fib1 = fibonnaci(n-1);
     int fib2  = fibonnaci(n-2);
    
     return fib1+fib2;
}

int main()
{
    int ans = fibonnaci(5);
    cout<<ans<<endl;
    return 0;
}