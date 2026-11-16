#include<bits/stdc++.h>
using namespace std;
void permutation(int n){
    if(n<=3){
        cout<<-1<<"\n";
    }
    else{
        if(n%2==0){
            while(n>0){
                cout<<n<<" ";
                n--;
            }
            cout<<"\n";
        }
        else{
            if((n/2)%2==0){
                int mid=n/2;
                for(int i=mid+2; i<=n; i++){
                    cout<<i<<" ";
                }
                cout<<(mid+1)<<" ";
                for(int i=1; i<=mid; i++){
                    cout<<i<<" ";
                }
                cout<<"\n";
            }
            else{
                int midd=n/2;
                for(int i=midd+3; i<=n; i++){
                    cout<<i<<" ";
                }
                cout<<midd+1<<" ";
                for(int i=1; i<=midd; i++){
                    cout<<i<<" ";
                }
                cout<<(midd+2)<<" ";
                cout<<"\n";
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        permutation(n);
    }
}










































