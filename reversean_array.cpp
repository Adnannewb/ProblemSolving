#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,0,1,9,6,5,3,7,8};
    int n=sizeof(arr)/sizeof(int);
    int revArr[100];
    for(int i=0;i<n;i++){
        revArr[i]=arr[n-1-i];

    }
    for(int i=0;i<n;i++){
        cout<<revArr[i]<<" ";
    }
}