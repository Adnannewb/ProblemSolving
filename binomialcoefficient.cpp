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
int binomialcoefficient(int n,int r){
    int nfact= factorial(n);
    int rfact=factorial(r);
    int nminusrfact=factorial(n-r);
    int bcoeff= nfact/(rfact*nminusrfact);
    return bcoeff;
}
int main(){
    int n,r;
    cout<<"Enter n and r to find the Binomial Coefficient C(n,r): ";
    cin>>n>>r;
    int result= binomialcoefficient(n,r);
    cout<<"Binomial Coefficient C("<<n<<","<<r<<") is "<<result<<endl;
    return 0;

}