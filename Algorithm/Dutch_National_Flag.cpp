#include<iostream>
using namespace std;

void print(int arr[] , int n){

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

}

void one(int arr[] , int n){

    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid <= high){

        if(arr[mid] == 0){
            swap(arr[mid] , arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid] == 2){
            swap(arr[mid] , arr[high]);
            high--;
        }
        else{
            mid++;
        }
        

    }
}
 
int main(){
 
    int arr[] = {0,1,2,0,1,2,1,2,0,0,0,1};
    int n = 12;

    one(arr ,n);

    print(arr,n);


    return 0;
}