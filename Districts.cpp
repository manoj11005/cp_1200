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
        vector<int> arr(n+1);
        for(int i=1; i<=n; i++){
            cin>>arr[i];
        }
        int other=-1;
        for(int i=2; i<=n; i++){
            if(arr[i] != arr[1]){
                other=i;
                break;
            }
        }
        if(other==-1){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        vector<pair<int,int>> edges;
        for(int i=2; i<=n; i++){
            if(arr[i] != arr[1]){
                edges.push_back({1,i});
            }
        }
        for(int i=2; i<=n; i++){
            if(arr[i]==arr[1]){
                edges.push_back({other,i});
            }
        }
        for(auto& it:edges){
            cout<<it.first<<" "<<it.second<<endl;
        }
    }


  

}