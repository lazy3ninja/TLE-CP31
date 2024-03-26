#include <bits/stdc++.h>
using namespace std;
 
 
 
int main () {
    int t;
    cin>>t;
    while (t--) {
        int a,b,n;
        cin >> a >> b >> n;
        
        long long ans = b-1; 
        
        int c = 1;
        for(int i = 0;i<n;i++){
            int x;
            cin >> x;
            ans += min(c+x,a)-1;
             
        }
        cout << ans + 1 << endl;
    }
    return 0;
}