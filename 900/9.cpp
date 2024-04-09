#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v1(n);
        for(int i = 0;i<n;i++){
            cin >> v1[i];
        }
        int ans = 0;
        for(int i =1;i<n;i++){
            ans = __gcd(abs(v1[i-1]-i), ans);
            
        }
        
        cout << ans << endl;
        
        
    }
}
