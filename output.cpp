#include<iostream>

using namespace std;
int main(){
    int arr[5] = {4, 6, 10, 14, 53};
    int n = sizeof(arr)/sizeof(int);

 
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}