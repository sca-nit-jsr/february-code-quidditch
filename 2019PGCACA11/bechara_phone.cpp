#include<iostream>
using namespace std;

int main()
{
    int i,j=0,sum=0,a[26]={0};
    char s[100000];
    int n,k;
    cin>>n>>k;
    cin>>s;
    char c;
    for(i=0;i<k;i++)
    {
         cin>>c;
         a[c-97]++;

    }

    for(i=0;i<n;i++)
    {

        c=s[i];
        if(a[c-97]==0 )
        {

            sum+=(j*(j+1))/2;

            j=0;
        }
        else
            j++;
       if(s[i+1] == '\0')
        {

            sum+=(j*(j+1))/2;

            j=0;
        }
    }
    cout<<sum;
    return 0;

}
