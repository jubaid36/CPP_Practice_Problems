#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n, count=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=2; j<i; j++)
        {
            if(i % j==0)
            {
                count++;
            }
        }
        if(count==0)
        {
            cout<<i<<" Prime"<<endl;
        }else{
            cout<<i<<" Not Prime"<<endl;

        }
    }
    
    
    
    
    return 0;
}