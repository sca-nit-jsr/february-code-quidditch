#include<iostream>
using namespace std;
int main()
{
    int n,k,zero=0,m;
    cin>>n>>k;
    int m[n];
    cin>>m;
    if(k>=0&&k<=n)
    {
    for(i=0;i<n;i++)
    {
        if(zero==k)
            break;
    }
     if(m[0]!='1')
        {
            m[i]='1';
            j++;
        }
        if(m[i]!='0')
        {
            m[i]='0';
            j++;
        }
        
    }
    cout<<m;
}
    
