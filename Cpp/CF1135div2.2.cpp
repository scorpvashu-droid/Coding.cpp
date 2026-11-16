#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        string x;
        cin>>x;

        long long ones=0;
        long long zeros=0;
        for(auto i: x){
            if((i-'0')==0) zeros++;
            else ones++;
        }
        long long maxx=max(ones,zeros);
        long long iterator=maxx+k;
        if(iterator>n) iterator=n;
        long long ans=1;
        for(long long i=1; i<=iterator; i++) ans+=i;
        
        if(iterator<n){
            long long anss=0;
            for(long long i=1; i<=(n-iterator); i++) anss+=i;
            cout<<(anss+ans)<<"\n";
        }
        else cout<<(ans)<<"\n";
    }
}