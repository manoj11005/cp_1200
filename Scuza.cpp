#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<long long> & premax,int n, int val){
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(premax[mid]<=val){
            ans=mid;
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return ans;

}
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<long long> steps(n);
        vector<long long> query(q);
        for(int i=0; i<n; i++){
            cin>>steps[i];
        }
        for(int i=0; i<q; i++){
            cin>>query[i];
        }
        vector<long long> premax(n),presum(n);
        premax[0]=steps[0];
        presum[0]=steps[0];
        for(int i=1; i<n; i++){
            premax[i]=max(premax[i-1],steps[i]);
            presum[i]=presum[i-1]+steps[i];
        }
        for(int i=0; i<q; i++){
            int val=query[i];
            int idx=binarySearch(premax,n,val);
            if(idx==-1){
                cout<<"0 ";
            }else{
                cout<<presum[idx]<<" ";
            }
        }
        cout<<endl;

        

    }
    
}