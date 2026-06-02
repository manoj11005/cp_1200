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
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        // vector<int> unique;
        // unique.push_back(a[0]); 
        // for(int i=1; i<n; i++){
        //     if(a[i] != a[i-1]){
        //         unique.push_back(a[i]);
        //     }
            
        // }

        // stl
        n=unique(a.begin(),a.end())-a.begin();
        // removes consicutive duplicate keeping one and gives size of final array
        int ans=n;
        for(int i=0; i+2<n; i++){
            if(a[i]<a[i+1] && a[i+1]<a[i+2]){
                ans=ans-1;
            }
            if(a[i]>a[i+1]  &&  a[i+1]>a[i+2]){
                ans=ans-1;
            }
              
        }
        cout<<ans<<endl;


    }
}