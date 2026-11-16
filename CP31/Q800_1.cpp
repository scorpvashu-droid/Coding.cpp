#include<bits/stdc++.h>
using namespace std;
bool sorted(vector<int>v){
    return is_sorted(v.begin(), v.end());
}
void fxion(int n, int k, vector<int>v){
    if(sorted(v)) cout<<"YES"<<"\n";
    else{
        if(k>1) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        fxion(n,k,v);
    }
}