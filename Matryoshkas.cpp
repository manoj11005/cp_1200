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
        vector<long long> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        map<int,int> mpp;

        for(int i=0; i<n; i++){
            mpp[arr[i]]++;

        }
        long long ans=0;
        for(auto& it:mpp){
            int ele=it.first;
            int freq=it.second;
            ans=ans+max(0,(mpp[ele]-mpp[ele-1]));

        }
        cout<<ans<<endl;
    }
}