#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k; cin >> n >> k;
    string str; cin >> str;
    
    unordered_map<char, int> hash;
    for(int i = 0; i < k; i++) {
        char ch; cin >> ch;
        hash[ch]++;
    }
    ll count = 0;
    ll C = 0;
    for(auto i:str) if(hash[i]) C++;
    else {
        count += C*(C + 1)/2;
        C = 0;
    }
    count += C*(C + 1)/2;
    cout << count << endl;
}
