#include <bits/stdc++.h>
using namespace std;
 
int main() {

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int curr = 1;
        int ans = 1;
        for(int i = 0;i<n-1;i++){
            if(s[i] == s[i+1]){
                curr++;
            }
            else{
                curr = 1;
            }
            ans = max(curr,ans);
            
        }
        cout << ans+1 << endl;
        
    }
}