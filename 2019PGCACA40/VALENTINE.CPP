#include <iostream>
#include<cmath>

using namespace std;

int main() {
	int a,b;
	char n[100];
	cin >> a >> b;
	cin >> n;
	int i=0;
	while(i<b&&i<a)
	{
	  if(i==0&&n[i]=='1')
	   b++;
	  else if(i==0&&n[i]!='1')
	   n[i]='1';
	  else if(n[i]=='0')
	   b++;
	  else
	   n[i]='0';
	   i++;
	}
	cout<<n;

	return 0;

}
