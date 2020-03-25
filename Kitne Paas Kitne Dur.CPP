#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int i,j,k;
    int a,b,c;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a>b)
        a=(a+b)-(b=a);
        if(b>c)
        b=(b+c)-(c=b);
        if(a>b)
        a=(a+b)-(b=a);
      
        if(a==b&&b==c)
        cout<<"0"<<endl;
        else if(a==b && b != c)
        {
            c--;
            cout<<abs(a-b)+abs(b-c)+abs(c-a)<<endl;
        }
        else if(a!=b && b != c)
        {
            a++;
            c--;
            cout<<abs(a-b)+abs(b-c)+abs(c-a)<<endl;
        }
    }
    return 0;
}
