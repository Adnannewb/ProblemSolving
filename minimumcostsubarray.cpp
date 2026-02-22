#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {5, 2, 9, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    int mincost=0;
    for (int i = 0; i < 3; i++)
    {
        mincost+=arr[i];
        /* code */
    }

    printf("Minimum cost of the 3 sub array is: %d\n", mincost);
    
    return 0;
}