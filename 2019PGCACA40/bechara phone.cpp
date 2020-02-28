#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,c=0,add=0;;
    cin>>n>>m;
    char a[n],b;
    int s[26]={0};
    cin>>a;
    while(m--)
    {
        cin>>b;
        s[b-97]++;
    }

    for(int i=0;i<n+1;i++)
    {
        if(s[a[i]-97]&&i<n)
        {
            c++;
        }
        else{
            add=add+c*(c+1)/2;
            c=0;

        }
    }
    cout<<add;
    return 0;
}
