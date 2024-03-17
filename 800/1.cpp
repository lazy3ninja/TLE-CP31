#include<bits/stdc++.h>

using namespace std;
 
bool isSorted(vector<int> v){
    for(int i = 1;i<v.size();i++){
        if(v[i] < v[i-1]){
            return false;
        }
    }
    return true;
}
 
int main() {
	
	int t;
	cin >> t;
	while(t--){
	    int n,k;
	    cin >> n >> k;
	    vector<int>v(n);
	    for(int i = 0;i<n;i++){
	        cin >> v[i];
	    }
	    if(k >=2)cout << "YES" << endl;
	    else if(isSorted(v)){
	        cout << "YES" << endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	}
 
}