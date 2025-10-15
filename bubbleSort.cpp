#include<iostream>
using namespace std;
class bubbleSort {
    public:
    void sort(int arr[],int n) {
        for(int i=0;i<n-1;i++) {
            for(int j=0;j<n-i-1;j++) {
                if(arr[j]>arr[j+1]) {
                    swap(arr[j],arr[j+1]);
                }
            }
        }
    }
    void show(int arr[],int n) {
        for(int i=0;i<n;i++) {
            cout<<arr[i]<<" ";
        }
    }
};
int main() {
    bubbleSort b;
    int arr[]={12,54,68,43,44,53,21};
    int n=sizeof(arr)/sizeof(arr[0]);
    b.sort(arr,n);
    b.show(arr,n);
}