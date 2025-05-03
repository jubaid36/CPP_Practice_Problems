#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,sum=0;
    cout<<"Input the number: ";
    cin>>n;
    while(n != 0)
    {
        int digit = n % 10;
        sum = sum + digit;
        n = n/10;
    }
    cout<<"Digit sum is: "<<sum<<endl;
    return 0;
}