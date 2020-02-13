#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n,c=0,sum=0,no=0;
    string s;
    char sk[26];
    cin>>n>>k>>s;
    for(i=0;i<k;i++)
    cin>>sk[i];
    for(i=0;i<n;i++)
    {
        no=0;
        for(int j=0;j<k;j++)
        {
            
            if(s[i]==sk[j])
            c++;
            else
            no++;
            if(no==k)
            { sum+=(c*(c+1))/2;// cout<<no<<sum<<endl;
            c=0;}
        }
    }
    sum+=(c*(c+1))/2;
    cout<<sum<<endl;

    
    
    return 0;
}
