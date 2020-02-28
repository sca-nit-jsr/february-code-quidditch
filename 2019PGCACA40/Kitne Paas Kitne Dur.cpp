#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[3];
    while(n--)
    {
	    cin>>a[0] >>a[1]>> a[2];
	    sort(a,a+3);
	   if(a[0]==a[1]&&a[1]==a[2])
	   {
	     cout<<0<<endl;
	     continue;
	   }
	    if(a[0]==a[1]&&a[2]>a[1])
	    a[2]--;
	    else
	    {
	        a[2]--;
            a[0]++;
	    }
	    cout<<abs(a[0]-a[1])+abs(a[1]-a[2])+abs(a[2]-a[0])<<endl;
    }
	return 0;
}
