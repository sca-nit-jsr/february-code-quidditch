#include<iostream>
using namespace std;

int main()
{
    int i,j=0,suuuum=0,brr[26]={0};
    char trr[100000];
    int one,two;
    cin>>one>>two;
    cin>>trr;
    char c;
    for(i=0;i<two;i++)
    {
         cin>>c;
         brr[c-97]++;

    }

    for(i=0;i<one;i++)
    {

        c=trr[i];
        if(brr[c-97]==0 )
        {

            suuuum+=(j*(j+1))/2;

            j=0;
        }
        else
            j++;
       if(trr[i+1] == '\0')
        {

            suuuum+=(j*(j+1))/2;

            j=0;
        }
    }
    cout<<suuuum;
    return 0;

}
