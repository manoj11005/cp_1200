#include<bits/stdc++.h>
using namespace std;
int solve(string& s, char ch){
    int l=0;
    int r=s.size()-1;
    int cnt=0;
    while(l<r){
        if(s[l]==s[r]){
            l++;
            r--;
        }else if(s[l]==ch){
            
            l++;
             cnt++;
        }else if(s[r]==ch){
            r--;
            cnt++;
        }else{
            return 1e9;
        }
    }
    return cnt;

}
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
        int i=0;
        int j=n-1;
       
        while(i<j && s[i] == s[j]){
            i++;
            j--;
        }
        if(i>=j){
            cout<<0<<endl;
        }else{
            int ans=min(solve(s,s[i]),solve(s,s[j]));
            if(ans==1e9){
                cout<<-1<<endl;
            }else{
                cout<<ans<<endl;
            }

        }
        
    




    }
}