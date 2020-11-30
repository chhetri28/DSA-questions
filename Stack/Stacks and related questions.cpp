#include<bits/stdc++.h>
using namespace std;
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
    OJ;
    FIO;
    // int n;
    // cin>>n;
    // vector<int>a(n);
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    /*
    previous greater element
    for(int i=0;i<n;i++){ 
        int j;
        for(j=i-1;j>=0;j--){
            if(a[j]>a[i]){
                cout<<a[j]<<" ";
                break;
            }
        }
        if(j==-1){
            cout<<-1<<" ";
        }
    }
    stack<int>st;
    vector<int>v;
    for(int i=0;i<n;i++){
        if(st.size()==0)v.push_back(-1);
        else if(st.size()>0 and st.top()>a[i])v.push_back(st.top());
        else if(st.size()>0 and st.top()<=a[i]){
            while(st.size()>0 and st.top()<=a[i])st.pop();
            if(st.size()==0)v.push_back(-1);
            else v.push_back(st.top());
        }
        st.push(a[i]); 
    }
    */
    /*
    next greater element
     for(int i=0;i<n;i++){
        int j;
        for(j=i+1;j<n;j++){
            if(a[j]>a[i]){
                cout<<a[j]<<" ";
                break;
            }
        }
        if(j==n)cout<<-1<<" ";
    }
    stack<int>st;
    st.push(a[n-1]);
    vector<int>v;
    for(int i=n-1;i>=0;i--){
        if(st.size()==0)v.push_back(-1);
        else if(st.size()>0 and st.top()>a[i])v.push_back(st.top());
        else if(st.size()>0 and st.top()<=a[i]){
            while(st.size()>0 and st.top()<=a[i])st.pop();
            if(st.size()==0)v.push_back(-1);
            else v.push_back(st.top());
        }
        st.push(a[i]);
    }
    reverse(v.begin(),v.end());
    */
    /*
    stock span problem

    stack<pair<int,int>>st;
    vector<int>res;
    for(int i=0;i<n;i++){
        if(st.size()==0)res.push_back(-1);
        else if(st.size()>0 and st.top().first > a[i]){
            res.push_back(st.top().second);
        }
        else if(st.size()> 0 and st.top().first <= a[i]){
            while(st.size() >0 and st.top().first <=a[i])st.pop();
            if(st.size()==0)res.push_back(-1);
            else res.push_back(st.top().second);
        }
        st.push({a[i],i});
    }   
    for(int i=0;i<res.size();i++){
        res[i]=i-res[i];
    }
    for(auto x :res){
        cout<<x<<" ";
    }

    */
    /*
    Nearest smaller element left
    stack<int>st;
    vector<int>left;
    for(int i=0;i<n;i++){
        if(st.size()==0)left.push_back(-1);
        else if(st.size()>0 and st.top()<a[i]){
            left.push_back(st.top());
        }
        else if(st.size()>0 and st.top()>=a[i]){
            while(st.size()>0 and st.top()>=a[i]){
                st.pop();
            }
            if(st.size()==0)left.push_back(-1);
            else left.push_back(st.top());
        }
        st.push(a[i]);
    }
    for(auto x:left){
        cout<<x<<" ";
    }
    
    */

   /*
   Nearest smaller element right
    stack<int>st;
    vector<int>right;
    for(int i=n-1;i>=0;i--){
        if(st.size()==0)right.push_back(-1);
        else if(st.size()>0 and st.top()<a[i]){
            right.push_back(st.top());
        }
        else if(st.size()>0 and st.top()>=a[i]){
            while(st.size()>0 and st.top()>=a[i]){
                st.pop();
            }
            if(st.size()==0)right.push_back(-1);
            else right.push_back(st.top());
        }
        st.push(a[i]);
    }
    reverse(right.begin(),right.end());
    for(auto x:right){
        cout<<x<<" ";
    }
   */
    
} 
