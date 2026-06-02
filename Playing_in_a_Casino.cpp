#include<bits/stdc++.h>
using namespace std;
int main(){
     freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<long long>> arr(n,vector<long long> (m));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>arr[i][j];
            }
        }
        long long ans=0;
        for(int col=0; col<m; col++){
            vector<long long> v;
            for(int row=0; row<n; row++){
                v.push_back(arr[row][col]);
            }
            sort(v.begin(),v.end());
            long long pref=0;
            for(int i=0; i<n; i++){
                ans=ans+(v[i]*1LL*i-pref);
                pref=pref+v[i];
            }

        }
        cout<<ans<<endl;

    }
}