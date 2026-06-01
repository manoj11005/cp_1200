#include<bits/stdc++.h>
using namespace std;
int main(){
     freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> pos(k+1);
        vector<int> a(n);
        for(int i=1;i<=n; i++){
            int x;
            cin>>x;
            pos[x].push_back(i);
        }
        int ans=INT_MAX;
        for(int color=1; color<=k; color++){
            vector<int> gaps;
            int prev=0;
            for(int p:pos[color]){
                gaps.push_back(p-prev-1);
                prev=p;
            }
            gaps.push_back(n-prev);
            sort(gaps.rbegin(),gaps.rend());
            int largest=gaps[0];
            int slargest=0;
            if(gaps.size()>1){
                slargest=gaps[1];
            }
            ans=min(ans,max(slargest,largest/2));
        }
        cout<<ans<<endl;

    }
}