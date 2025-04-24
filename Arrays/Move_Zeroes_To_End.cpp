#include<iostream>
using namespace std;

void twopointer(int arr[] , int n){

    int i =0;
    int j = i;

    while(arr[i] != 0) i++;

    j = i+1;

    while(j < n){

        if(arr[j] != 0 && arr[i] == 0){
            swap(arr[i], arr[j]);
            i++;
        }
        j++;
    }

}

void print(int arr[] , int n){

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
 
int main(){

    /*
    Approach

    1. I will store all the non zero values in another array/queue 
    and then reinsert them in the same order and fill the rest places with zero

    2. Two pointer Approach
    We can make two pointers in which one pointer points only to zero 

    */
 
    int arr[] = {0,1,0,1,0,2,5,4,4,5,0,6,1};
    int n = 13;

    twopointer(arr, n);

    print(arr, n);




    return 0;
}