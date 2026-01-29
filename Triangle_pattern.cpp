#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of the triangle pattern: ";
//     cin>>n;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
    
// }

// int main(){
//     int n;
//     cout<<"Enter the size of the triangle pattern: ";
//     cin>>n;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
    
// }

// int main(){
//     int n;
//     cout<<"Enter the size of the triangle pattern: ";
//     cin>>n;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
    
// }

// int main(){
//     int n;
//     cout<<"Enter the size of the triangle pattern: ";
//     cin>>n;
//     for (int i = 1; i <= n; i++) {
//         for (int j = i; j >= 1; j--) {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
    
// }

// int main(){
//     int n;
//     cout<<"Enter the size of the  Floyds triangle pattern: ";
//     cin>>n;
//     int num=1;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;
//     }
    
// }


int main(){
    int n;
    cout<<"Enter the size of the inverted triangle pattern: ";
    cin>>n;
    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= i; j--) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
}