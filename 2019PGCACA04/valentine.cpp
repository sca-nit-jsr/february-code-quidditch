
#include <iostream>
using namespace std;
string fun(string nn, int k)
{

    int len = nn.length();

    if (len == 0 || k == 0)
        return nn;

    if (len == 1)
        return "0";
    if (nn[0] != '1') {
        nn[0] = '1';
        k--;
    }

    int i = 1;
    while (k > 0 && i < len) {

        if (nn[i] != '0') {
            nn[i] = '0';
            k--;
        }

        i++;
    }

    return nn;
}

int main()
{
    int n,k;
    cin>>n>>k;;

    string nn;
    cin>>nn;

    cout << fun(nn, k);

    return 0;
}
