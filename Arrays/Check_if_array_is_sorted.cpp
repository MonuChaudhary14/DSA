#include<iostream>
using namespace std;

bool check(int arr[] , int n){

    for(int i = 1; i < n; i++){
        if(arr[i] < arr[i-1]){
            return false;
        }
    }
    return true;
}
 
int main(){
 
    int arr[] = {1,2,4,6,7,9,6,7,8,9,2,1};
    int arr1[] = {1,2,3,4,6,6,7,8,9,9,10,11,15};

    int n = 12;

    if(check(arr, n)){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
    if(check(arr1, 13)){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }



    return 0;
}