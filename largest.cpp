#include<iostream>

using namespace std;
int main(){
    int arr[] = {5, 3, 4, 9, 12};
    int n = sizeof(arr) / sizeof(int);

    int min = arr[0];
    int max = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
            // cout<<"assigning val "<<arr[i]<<" to max\n";
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"largest = "<<max<<endl;
    cout<<"smallest = "<<min<<endl;
    return 0;
}