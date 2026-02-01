#include<iostream>
using namespace std;
int main(){
    int arr[100]={0,-4,2,5,-1,3,90};
    int n=sizeof(arr)/sizeof(int);
    int smallest=INT8_MAX;
    int largest=INT8_MIN;
    for (int i=0;i<n;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"Smallest number is: "<<smallest<<endl;
    cout<<"Largest number is: "<<largest<<endl;
}