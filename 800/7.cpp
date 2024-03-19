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
        int n,m,cnt=6,f=0,res=0;
        string x,s;
        cin>>n>>m;
        cin>>x>>s;
        while(cnt--) {
            if(x.find(s) != string::npos) {
                f=1;
                break;
            }
            res++;
            x+=x;
        }
        if(f==1)
            cout<<res;
        else
            cout<<-1;
        cout<<endl;
    }
 
}