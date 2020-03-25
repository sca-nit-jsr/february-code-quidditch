#include<iostream>
using namespace std;
int main()
{
    int n,k,i,j=0;
    char s[100000];
    cin>>n>>k;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(j==k)
        break;
        
        if(s[0]!='1')
        {
            s[i]='1';
            j++;
            continue;
        }
        if(s[i]!='0')
        {
            s[i]='0';
            j++;
        }
        
    }
    cout<<s;
}
