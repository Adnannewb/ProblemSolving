#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int arr[]={2,4,0,1,9,6,5,3,7,8};
    int size=sizeof(arr)/sizeof(int);
    bool found=false;
    for (int i=0;i<size;i++){
        if(arr[i]==n){
            cout<<"Found at index:"<<i<<endl;
            found=true;
            break;

        }
    }
    if(!found){
        cout<<"Not Found"<<endl;
    }

}