#include <iostream>
using namespace std;
string valentine(string n, int k)
{

    int l = n.length();

    if (l == 0 || k == 0)
        return n;

    if (l == 1)
        return "0";
    if (n[0] != '1') {
        n[0] = '1';
        k--;
    }

    int i = 1;
    while (k > 0 && i < l) {

        if (n[i] != '0') {
            n[i] = '0';
            k--;
        }

        i++;
    }

    return n;
}

int main()
{
    int num,k;
    cin>>num>>k;;

    string n;
    cin>>n;

    cout << valentine(n, k);

    return 0;
}
