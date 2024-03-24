#include <bits/stdc++.h>
using namespace std;

bool isSubstring(string a, string s){
    int n = a.size();
    int m = s.size();
    if (a.find(s) != string::npos)
        return true;
    return false;
}

int main() {
	int t;
	cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for(int i = 0;i<n;i++){
            cin >> v[i];
        }
        string ans = "NO";
        for(auto x : v){
            if(x == k){
                ans = "YES";
            }
        }
        cout << ans << endl;
    }

}