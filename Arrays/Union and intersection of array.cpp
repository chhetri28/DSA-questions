// Union and intersection of an array

int binarysearch(int a[],int st,int end,int x){
    if(st<=end){
        int mid=(st+end)/2;
        if(a[mid]==x)return mid;
        else if(a[mid]>x)return binarysearch(a,st,mid-1,x);
        return binarysearch(a,mid+1,end,x);
    }
    return -1;
}
int NumberofElementsInIntersection (int arr1[], int arr2[], int m, int n )
{
    // Your code goes here
    if (m > n) {
        int* tempp = arr1;
        arr1 = arr2;
        arr2 = tempp;
 
        int temp = m;
        m = n;
        n = temp;
    }
    sort(arr1,arr1+m);
    set<int>res;
    for(int i=0;i<n;i++){
        if(binarysearch(arr1,0,m-1,arr2[i])!=0){
            res.insert(arr2[i]);
        }
    }
    return res.size();
}
void arrunion(int arr1[],int arr2[],int m,int n){
   if (m > n) {
        int* tempp = arr1;
        arr1 = arr2;
        arr2 = tempp;
 
        int temp = m;
        m = n;
        n = temp;
    }
    sort(arr1,arr1+m);
    vector<int>res;
    for(int i=0;i<m;i++){
        res.push_back(arr1[i]);
    }
    for(int i=0;i<n;i++){
        if(binarysearch(arr1,0,m-1,arr2[i])==-1){
            res.push_back(arr2[i]);
        }
    }
    set<int>res2;
    for(auto x:res){
     res2.insert(x);   
    }
    cout<<res2.size();
}