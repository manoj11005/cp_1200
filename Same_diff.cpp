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
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
            arr[i]=arr[i]-i;
        }
        map<long long,long long> freq;
        for(int i=0; i<n; i++){
            freq[arr[i]]++;
        }
        long long ans=0;
        for(auto& [val,cnt]:freq){
        
            ans=ans+((cnt)*(cnt-1))/2;

        }
        cout<<ans<<endl;
        
    }

}