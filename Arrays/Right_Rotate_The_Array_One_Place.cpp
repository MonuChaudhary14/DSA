#include<iostream>
#include<algorithm>
using namespace std;

void rotate(int arr[], int n){
    int last = arr[n-1];

    for(int i = n-1; i >= 0; i--){
        arr[i] = arr[i-1];
    }

    arr[0] = last;
}

void reverse(int arr[], int n){

    reverse(arr, arr+(n-1));

    reverse(arr , arr+n);

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
    1. Make another array and then store the last value of first array at index 0
    then iterate from  1 to n-1 and then add in it

    2. Store the last value and then move all the element to right side and then 
    place the last element to the first index

    3. Use the reverse function to reverse n-1 elements and then reverse the whole array


    Trick-> If we have to rotate left then we start from last to copy the value 
    If we have to rotate right then we have to start from the start to copy
    
    */
 
    int arr[] = {1,2,3,4,5};
    int arr1[] = {1,2,3,4,5};
    int n = 5;

    rotate(arr, n);

    print(arr, n);
    
    reverse(arr1, n);
    print(arr, n);


    return 0;
}