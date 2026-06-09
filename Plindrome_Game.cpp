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
        string s;
        cin>>s;
        int cnt0=0;
        for(int i=0; i<n; i++){
            if(s[i]=='0'){
                cnt0++;
            }

        }
        if(cnt0%2==0 || cnt0==1){
            cout<<"BOB"<<endl;
        }else{
            cout<<"ALICE"<<endl;
        }
    }
}