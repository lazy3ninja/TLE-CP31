#include <bits/stdc++.h>
using namespace std;
 
 
 
int main() {
	int t;
	cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        unordered_map<int,int> mp;
        for(int i = 0;i<n;i++){
            mp[s[i]]++;
        }
        int cnt = 0;
        for(auto it : mp){
            if(it.second%2 != 0){
                cnt++;
            }
        }
        if(cnt > k+1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
 
}