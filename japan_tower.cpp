#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int h;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        cin >> h;
        auto it = upper_bound(v.begin(), v.end(), h);
        int pos = it - v.begin();
        cout << pos << " ";
        v.insert(v.begin() + pos, h);
    }
}