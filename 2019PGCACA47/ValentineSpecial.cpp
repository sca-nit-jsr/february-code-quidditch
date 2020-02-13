#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,j;
    string m;
    cin>>n>>k;
    cin>>m;
    j=0;
    while(k--)
    {
        if(m[j]!='1' && j==0)
        {
            m[j]='1';
            j++;
        }
        else
        {
            while((m[j]=='0') || (m[j]=='1' && j==0))
            {
                j++;
            }
            m[j++]='0';
        }
    }
    cout<<m;
    return 0;
}
