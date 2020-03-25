#include<iostream>
using namespace std;

int main()
{
    int i,c=0,sum=0,a[26]={0},m,s1;
    char s[100000];
    int n,k;
    cin>>n>>k;
    cin>>s;
    char ch;
    for(i=0;i<k;i++)
    {
         cin>>ch;
         a[ch-97]++;

    }

    for(i=0;i<n;i++)
    {
	m=a[s[i]-97];
	if(m==0)
	{
	  sum=sum+(c*(c++))/2;
	  c=0;
        }
        else
            c++;
       if(s[i+1] == '\0')
        {
		s1=(c*(c+1))/2;
		sum+=s1;
	}
    }
	cout<<sum;
return 0;
}
            
