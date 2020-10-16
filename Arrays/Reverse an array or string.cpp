//  reverse an array or string
#include<iostream>
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;
void reversearr(int a[],int st,int end){
    while(st<end){
        int temp=a[st];
        a[st]=a[end];
        a[end]=temp;
        st++;
        end--;
    }
}
int main(){
    OJ;
    FIO;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    reversearr(a,0,n-1);
}