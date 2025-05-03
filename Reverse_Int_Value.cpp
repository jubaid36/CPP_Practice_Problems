#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num, reverse = 0;
    cout<<"Input the numbers: ";
    cin>>num;
    while (num != 0)
    {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    cout<<"the reverse numbers: "<<reverse<<endl;
    return 0;
    
}