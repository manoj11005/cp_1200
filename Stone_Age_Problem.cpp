#include<bits/stdc++.h>
using namespace std;
int main(){
     freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    vector<pair<int,int>> v(n,{0,0});
    for(int i=0; i<n; i++){
        cin>>v[i].first;
    }
    pair<int,int> globalVal={0,-1};
    long long sum=0;
    for(int i=0; i<n; i++){
        sum=sum+v[i].first;
    }
    // process query
    for(int it=1; it<=q; it++){
        int x;
        cin>>x;
        if(x==1){
            int idx,val;
            cin>>idx>>val;
            // convert to zero based index
            idx--;
            if(v[idx].second>globalVal.second){
                sum=sum+(val-v[idx].first);
            }else{
                sum=sum+(val-globalVal.first);
            }
            v[idx].first=val;
            v[idx].second=it;
        }else{
            int val;
            cin>>val;
            globalVal.first=val;
            globalVal.second=it;
            sum=(long long)(val)*n;
        }
        cout<<sum<<endl;
    }
    return 0;

}
