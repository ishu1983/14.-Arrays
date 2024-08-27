#include<iostream>

using namespace std;
int main(){
    int n;
    cout<<"enter the length of array"<<endl;
    cin>>n;
    int arr[n];
    // int n = sizeof(arr)/sizeof(int);

        cout<<"enter:"<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ,";
    }
    cout<<endl;
    return 0;
}