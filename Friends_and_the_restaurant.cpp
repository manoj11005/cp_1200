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
        vector<int> arr1(n),arr2(n);
        for(int i=0; i<n; i++){
            cin>>arr1[i];
        }
        for(int i=0; i<n; i++){
            cin>>arr2[i];
        }
        vector<int> diffarr(n);
        for(int i=0; i<n; i++){
            diffarr[i]=arr2[i]-arr1[i];
        }
        sort(diffarr.begin(),diffarr.end());
        int i=0;
        int j=n-1;
        int cnt=0;
        while(i<j){
            if(diffarr[i]+diffarr[j]>=0){
                cnt++;
                i++;
                j--;
            }else if(diffarr[i]+diffarr[j]<0){
                i++;
            }

        }
        cout<<cnt<<endl;
    }
}