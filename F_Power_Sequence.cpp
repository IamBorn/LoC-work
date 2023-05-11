#include <bits/stdc++.h>

using namespace std;

void solve(){

}

int main(){
	long long n;
    cin >> n;
    if(n > 31){
        long long sum = 0;
        long long in;
        for(int i = 0; i < n; i++){
            cin >> in;
            sum += in;
        }

        cout << sum - n;
    }
    else{
        vector<long long> v;
        long long temp;
        long long ans = 0;

        long long sum = 0;
        long long in;
        for(int i = 0; i < n; i++){
            cin >> in;
            sum += in;
            v.push_back(in);
        }
        sort(v.begin(), v.end());
        for(int i = 0; i < n; i++){
            ans += abs(pow(2, i) - v[i]);
        }

        temp = sum - n;
        cout << min(temp, ans);
    }
	return 0;
}