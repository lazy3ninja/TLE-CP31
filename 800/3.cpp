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
	    int ans = 0;
	    int cnt = 0;
	    for(int i = 0;i<n;i++){
	        if(s[i] == '#'){
	            cnt = 0;
	        }
	        else{
	            cnt++;
	            if(cnt >= 3){
	                ans = 2;
	                break;
	            }
	            else{
	                ans++;
	            }
	        }
	    }
	    cout << ans << endl;
	    
	}
 
}