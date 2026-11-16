/*
Question- Print a permutation for integer n so that for every index i (i is 1 to n)
i.pi is always composite.
*/

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

/*
#INPUT
15
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15

#OUTPUT
-1
-1
-1
4 3 2 1 
4 5 3 1 2 
6 5 4 3 2 1 
6 7 4 1 2 3 5 
8 7 6 5 4 3 2 1 
6 7 8 9 5 1 2 3 4 
10 9 8 7 6 5 4 3 2 1 
8 9 10 11 6 1 2 3 4 5 7 
12 11 10 9 8 7 6 5 4 3 2 1 
8 9 10 11 12 13 7 1 2 3 4 5 6 
14 13 12 11 10 9 8 7 6 5 4 3 2 1 
10 11 12 13 14 15 8 1 2 3 4 5 6 7 9 
*/








































