#include<iostream>

using namespace std;
int main(){
        int arr[20] = {2, 4, 6, 10};
    int *ptr1 = arr;
    int *ptr2 = ptr1 + 3;

    cout<<(ptr2>ptr1)<<endl;
    cout<<(ptr2<ptr1)<<endl;
    cout<<(ptr1==arr)<<endl;
    return 0;
}