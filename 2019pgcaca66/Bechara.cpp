#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j=0,sum=0,arr[26]={0};
    char srr[100000];
    int one,two;
    cin>>one>>two;
    cin>>srr;
    char c;
    for(i=0;i<two;i++)
    {
         cin>>c;
         arr[c-97]++;

    }

    for(i=0;i<one;i++)
    {

        c=srr[i];
        if(arr[c-97]==0 )
        {

            sum+=(j*(j+1))/2;

            j=0;
        }
        else
            j++;
       if(srr[i+1] == '\0')
        {

            sum+=(j*(j+1))/2;

            j=0;
        }
    }
    cout<<sum;
    return 0;

}
