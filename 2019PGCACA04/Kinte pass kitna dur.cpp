#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int i,j,k;
    int all,is,ok;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>all>>is>>ok;
        if(all>is)
        all=(all+is)-(is=all);
        if(is>ok)
        is=(is+ok)-(ok=is);
        if(all>is)
        all=(all+is)-(is=all);
       // cout<<a<<" "<<is<<" "<<ok<<endl;
        if(all==is&&is==ok)
        cout<<"0"<<endl;
        else if(all==is && is != ok)
        {
            ok--;
            cout<<abs(all-is)+abs(is-ok)+abs(ok-all)<<endl;
        }
        else if(all!=is && is != ok)
        {
            all++;
            ok--;
            cout<<abs(all-is)+abs(is-ok)+abs(ok-all)<<endl;
        }
    }
    return 0;
}
