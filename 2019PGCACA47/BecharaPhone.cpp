#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    string s1;
    int k,h[26]={0},c=0,s=0;
    cin>>n>>k;
    char x;
    cin>>s1;
    for(int i=0;i<k;i++)
    {
        cin>>x;
        h[x-'a']++;
    }
    for(int i=0;i<n;i++)
    {
        if(h[s1[i]-'a']>0)
         c++;
        else
        {
            s+=(c*(c+1))/2;
            c=0;
        }
    }
    s+=(c*(c+1))/2;
    cout<<s;
    return 0;
}
