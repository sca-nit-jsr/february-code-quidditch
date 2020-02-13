#include<iostream>
using namespace std;
int dist(int a,int b,int c);
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,max,min,smax,i=3,f=0,k;
        cin>>a>>b>>c;
        max=(a>b?(a>c?a:c):(b>c?b:c));
        min=(a<b?(a<c?a:c):(b<c?b:c));
        smax=(a+b+c)-(max+min);
        //cout<<"max= "<<max<<" Second Max= "<<smax<<" Min= " <<min<<endl;
        while(i--)
        {
        if(min==smax && smax==max)
        { f=1; break; }
        else if(min==smax && max>smax)
        { max-=1; f=1; break;}
        else if(max>smax && smax>min)
        { max-=1;i++; min+=1; break; }
        
        }
        cout<<abs((max-smax)+(smax-min)+(max-min))<<endl;
        ///cout<<endl<<max<<" "<<smax<<" "<<min<<endl;
        
    }
    return 0;
}
