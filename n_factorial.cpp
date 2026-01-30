#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    if(n<=1){
        return 1;
    }
    else{
        for(int i=1;i<=n;i++){
            fact=fact*i;
        }
        return fact;
    }
}

int main(){
    int n;
    cout<<"Enter a number to find its factorial: ";
    cin>>n;
    int result=factorial(n);
    cout<<"Factorial of "<<n<<" is "<<result<<endl;
    return 0;

}