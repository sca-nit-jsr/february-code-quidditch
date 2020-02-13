#include<iostream>
using namespace std;
int main()
{
    int n,k;
    string s;
    cin>>n>>k;
    cin>>s;
    for(int i=0;k!=0&& i<n;i++)
    {
        if(i==0 && s[i]!='1')
        { s[i]='1'; k--; }
        if(s[i]!='0' && i!=0)
        { s[i]='0'; k--; }
    }
    cout<<s<<endl;
    return 0;
}
