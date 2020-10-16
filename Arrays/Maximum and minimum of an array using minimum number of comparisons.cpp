#include<bits/stdc++.h>
using namespace std;
void findminmax(int a[],int n){
    int mini=INT_MAX;
    int maxi=INT_MIN;
    if(a[0]<a[1]){
        mini=a[0];
        maxi=a[1];
    }else{
        maxi=a[0];
        mini=a[1];
    }
    for(int i=2;i<n;i++){
        if(a[i]<mini){
            mini=a[i];
        }
        else if(a[i]>maxi){
            maxi=a[i];
        }
    }
    cout<<maxi<<" "<<mini;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    findminmax(a,n);
}