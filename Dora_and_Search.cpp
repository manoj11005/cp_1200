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
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        long long min=1;
        long long max=n;
        long long left=0;
        long long right=n-1;
        long long ok=false;
        while(left<right){
            if(arr[left]==min){
                left++;
                min++;
            }else if(arr[left]==max){
                left++;
                max--;
            }else if(arr[right]==max){
                right--;
                max--;
            }else if(arr[right]==min){
                right--;
                min++;
            }else{
                ok=true;
                break;
            }
        }
        if(ok){
            cout<<left+1<<" "<<right+1<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
}