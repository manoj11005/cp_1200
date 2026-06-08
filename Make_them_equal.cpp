#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        int n;
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        bool ok=true;
        for(int i=0; i<n; i++){
            if(s[i]!=c){
                ok=false;
            }
            
        }
        if(ok){
            cout<<0<<endl;
            continue;
        }
    
        int x=0;
        int y=0;
        int pos=-1;
        for(int i=n; i>n/2; i--){
            if(s[i-1]==c){
                pos=i;
                break;
            }
        }
        if(pos != -1){
            cout<<1<<endl;
            cout<<pos<<endl;
        }else{
            cout<<2<<endl;
            cout<<n<<" "<<n-1<<endl;

        }
    }
    
}