#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--) {
        vector<int> v(3); cin >> v[0] >> v[1] >> v[2];
        sort(v.begin(), v.end());
        if(v[0] == v[1] && v[1] == v[2]) {
            cout <<"0" << endl;
            continue;
        }
        else if(v[0] == v[1] && v[1] < v[2]) {
            v[2]--;
        }
        else {
            v[0]++;
            v[2]--;
        }
        cout << abs(v[0]-v[1]) + abs(v[1]-v[2]) + abs(v[0]-v[2]) << endl;
    }
}
