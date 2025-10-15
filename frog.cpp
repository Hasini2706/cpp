#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    int m=(n/2)+1;
    int res[m];
    int a[m];
    for(i=0;i<n;i++) {
        cin>>arr[i];
    }
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            if(i!=n-2) {
          i=i+2;
          res[j]=arr[i];  
        } else {
            i=i+1;
            res[j]=arr[i];
        }
        
        }
        
    }
    for(i=0;i<m;i++) {
       diff= abs(res[i]-res[i+1]);
       a[i]=diff;
       sum=sum+a[i];
    }
    cout<< sum;
    return 0;
}