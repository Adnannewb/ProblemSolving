#include<iostream>
using namespace std;
// int DecimaltoBinary(int n){
//     int result=0;
//     int count=1;
//     while(n>0){
//         int num=n%2;
//         result+=count*num;  
//         n=n/2;
//         count*=10;
       
//     }
//     return result;
// }
int BinarytoDecimal(int n){
    int result=0;
    int count=1;
    while(n>0){
        int num=n%10;
        result+=count*num;  
        n=n/10;
        count*=2;
       
    }
    return result;
}

int main()
{
    int n;
    cout<<"Enter a number to convert : ";
    cin>>n;
    // int result=DecimaltoBinary(n);
    int result=BinarytoDecimal(n);
    cout<<"Binary representation is: "<<result<<endl;

}