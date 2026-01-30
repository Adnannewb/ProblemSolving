#include<iostream>
using namespace std;
int sumofdigit(int n){
    int sum=0;
    while(n>=1){
        int digit=n%10;
        sum+=digit;
        n=n/10;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter a number to find the sum of its digits: ";
    cin>>n;
    cout<<"Sum of digits is "<<sumofdigit(n)<<endl;
    return 0;
}