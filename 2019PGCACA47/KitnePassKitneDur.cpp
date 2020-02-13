#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long ai,bi,ci,mx,mn,d,p;
    cin>>t;
    while(t--)
    {
       cin>>ai>>bi>>ci;
       mx=max(ai,bi);
       mx=max(mx,ci);
       mn=min(ai,bi);
       mn=min(mn,ci);
       if(ai==bi)
       {
           if(ci>ai)
           ci-=1;
           else if(ci<ai)
           ci+=1;
           d= (abs(ai-bi) + abs(bi-ci) +abs(ci-ai));
       }
       else if(ai==ci)
       {
           if(bi>ai)
           bi-=1;
           else if(bi<ai)
           bi+=1;
           d= (abs(ai-bi) + abs(bi-ci) +abs(ci-ai));
       }
       else if(bi==ci)
       {
           if(ai>ci)
           ai-=1;
           else if(ai<ci)
           ai+=1;
           d= (abs(ai-bi) + abs(bi-ci) +abs(ci-ai));
       }
       else
       {

           if((ai==mx && ci==mn) || (ai==mn && ci==mx))
           p=bi;
           else if((bi==mx && ci==mn) || (bi==mn && ci==mx))
           p=ai;
           else if((ai==mx && bi==mn) || (ai==mn && bi==mx))
           p=ci;
           mx-=1;
           mn+=1;
           if(p!=mx && p!=mn)
           p+=1;
           d= (abs(mx-p) + abs(mn-p) +abs(mx-mn));
           
       }
       
       cout<<d<<'\n';
    }
    return 0;
}
