#include<bits/stdc++.h>
using namespace std;
int  main(){
      freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int m=(n*(n-1))/2;
        vector<int> a(m);
        for(int i=0; i<m; i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int i=0;
        int x=n-1;
        while(x>0){
            cout<<a[i]<<" ";
            i=i+x;
            x--;
        }
        cout<<"1000000000"<<endl;
    }
    
}