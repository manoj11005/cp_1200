#include<bits/stdc++.h>
using namespace std;
int main(){
       freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        // as k given till 1e18 so we can go till 2^60
        long long ans=0;
        for(int i=1; i<=60; i++){
            set<long long> distinctVals;
            long long k=1LL<<i;
            for(int idx=0; idx<n; idx++){
                distinctVals.insert(a[idx]%k);


            }
            if(distinctVals.size()==2){
                ans=k;
                break;
            }

        }
        cout<<ans<<endl;
    }
}