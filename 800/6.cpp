#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
        vector<int> v(n);
        
        for(int i = 0;i<n;i++){
            cin >> v[i];
        }    
        unordered_map<int, int>mp;
        for(int i = 0;i<n;i++){
            mp[v[i]]++;
        }
        string ans = "NO";
        if(mp.size() > 2){
            cout << "NO" << endl;
            continue;
        }
        for(auto it : mp){
            if(it.second == n){
                ans = "YES";
            }
           else if(it.second == n/2){
               ans = "YES";
           }
            
        }
        cout << ans << endl;
        
 
    }
}