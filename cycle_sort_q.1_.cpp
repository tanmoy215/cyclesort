#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,1};
    int n=sizeof(arr)/sizeof(int);
    int i=0;
    while(i<n){
        int ele = arr[i]-1;
        if(arr[i]==i+1 || arr[i]<i+1) i++;
        else swap(arr[i],arr[ele]);
    }
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            ans.push_back(arr[i]);
             ans.push_back(i+1);
            break;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}