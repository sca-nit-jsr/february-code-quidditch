
#include <iostream>
using namespace std;
string valentine(string num, int k)
{

    int len = num.length();

    if (len == 0 || k == 0)
        return num;

    if (len == 1)
        return "0";
    if (num[0] != '1') {
        num[0] = '1';
        k--;
    }

    int i = 1;
    while (k > 0 && i < len) {

        if (num[i] != '0') {
            num[i] = '0';
            k--;
        }

        i++;
    }

    return num;
}

int main()
{
    int n,k;
    cin>>n>>k;;

    string num;
    cin>>num;

    cout << valentine(num, k);

    return 0;
}
