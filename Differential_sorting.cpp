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
         vector<int> arr=a;

        sort(arr.begin(),arr.end());
        
        if(a[n-1]<a[n-2]){
            cout<<-1<<endl;
            continue;
        

        }
        else if(a[n-1]>=0){
            cout<<n-2<<endl;
            for(int i=0; i<n-2; i++){
                cout<<i+1<<" "<<n-1<<" "<<n<<endl;

            }
        }else{
            if(arr==a){
                cout<<0<<endl;

            }else{
                cout<<-1<<endl;
            }

        }
    }
}