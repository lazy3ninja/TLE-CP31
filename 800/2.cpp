#include<bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,x;
	    cin >> n >> x;
	    vector<int> v(n);
	    for(int i = 0;i<n;i++){
	        cin >> v[i];
	    }
	   
	    int ans = 0;
	    for(int i = 0;i<n-1;i++){
	        ans = max(ans,v[i+1]-v[i]);
	    }
	    ans = max({ans, v[0], 2*(x-v[n-1])});
	    cout << ans << endl;
	}
 
}