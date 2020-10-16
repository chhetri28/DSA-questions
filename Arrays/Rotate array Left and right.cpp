#include<bits/stdc++.h>
using namespace std;
void reverse(int a[],int st,int end){
    while(st<end){
        int temp=a[st];
        a[st]=a[end];
        a[end]=temp;
    }
}
void Lrotate(int a[],int n,int k){
    reverse(a,0,k-1);
    reverse(a,k,n-1);
    reverse(a,0,n-1);
}
void Rrotate(int a[],int n,int k){
    k=k%n;
    reverse(a,0,n-1);
    reverse(a,0,k-1);
    reverse(a,k,n-1);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int k;
    cin>>k;
    Lrotate(a,n,k);
    Rrotate(a,n,k);
}