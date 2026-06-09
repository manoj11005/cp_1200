#include<bits/stdc++.h>
using namespace std;
int main(){
     freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);


    long long n,k,x;
    cin>>n>>k>>x;
    vector<long long> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    vector<long long> need;
    for(int i=1; i<n; i++){
        long long gap=a[i]-a[i-1];
        if(gap>x){
            need.push_back((gap-1)/x);
        }

    }
   
    sort(need.begin(),need.end());
    long long groups=need.size()+1;
    for(int i=0; i<need.size(); i++){
        if(need[i]<=k){
            k=k-need[i];
            groups--;

        }else{
            break;
        }
    }
    cout<<groups<<endl;
    
}