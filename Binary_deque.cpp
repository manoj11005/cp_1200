#include<bits/stdc++.h>
using namespace std;
int main(){
      freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int tsum=0;
        for(int i=0; i<n; i++){
            tsum=tsum+a[i];
             
        }
        if(tsum==s){
            cout<<0<<endl;
            continue;
        }
        if(tsum<s){
            cout<<-1<<endl;
            continue;
        }
        
        unordered_map<int,int> mpp;
        int sum=0;
        int maxlen=0;
        for(int i=0; i<n; i++){
            sum=sum+a[i];
            if(sum==s){
                maxlen=max(maxlen,i+1);

            }
            int rem=sum-s;
            if(mpp.find(rem) != mpp.end()){
                maxlen=max(maxlen,i-mpp[rem]);
            }

            if(mpp.find(sum)==mpp.end()){
                mpp[sum]=i;
            }
        }
        cout<<n-maxlen<<endl;




    }
}