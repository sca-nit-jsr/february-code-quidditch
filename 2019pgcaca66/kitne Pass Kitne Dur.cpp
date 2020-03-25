#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int i,j,k;
    int one,two,three;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>one>>two>>three;
        if(one>two)
        one=(one+two)-(two=one);
        if(two>three)
        two=(two+three)-(three=two);
        if(one>two)
        one=(one+two)-(two=one);
        if(one==two&&two==three)
        cout<<"0"<<endl;
        else if(one==two && two != three)
        {
            three--;
            cout<<abs(one-two)+abs(two-three)+abs(three-one)<<endl;
        }
        else if(one!=two && two != three)
        {
            one++;
            three--;
            cout<<abs(one-two)+abs(two-three)+abs(three-one)<<endl;
        }
    }
    return 0;
}
