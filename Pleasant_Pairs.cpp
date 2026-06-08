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
        vector<int> a(n);
    
        vector<pair<long long,long long>> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i].first;
            v[i].second=i+1;

        }
        int ans=0;
        sort(v.begin(),v.end());
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(v[i].first * v[j].first >=2*n){
                    break;
                }
                if(v[i].first * v[j].first == v[i].second+v[j].second){
                    ans++;

                }
            }
        }
        cout<<ans<<endl;

    }

}