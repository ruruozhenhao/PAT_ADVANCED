#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        mp[v[i]]++;
    }
    int ans = -1;
    for (int i = 0; i < n; ++i) {
        if (mp[v[i]] == 1) {
            ans = v[i];
            break;
        }
    }
    if (ans > 0)
        cout << ans << endl;
    else
        cout << "None" << endl;
    return 0;
}