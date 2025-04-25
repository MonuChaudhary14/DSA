#include<iostream>
using namespace std;

void one(int arr[] ,int n){

    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

    for(int i = 0;i < n; i++){
        if(arr[i] == 0){
            count0++;
        }
        else if(arr[i] == 1){
            count1++;
        }
        else{
            count2++;
        }

    }

    for(int i = 0; i < n; i++){

        if(count0 != 0){
            arr[i] = 0;
            count0--;
        }
        else if(count1 != 0){
            arr[i] = 1;
            count1--;
        }
        else{
            arr[i] = 2;
            count2--;
        }

    }

}

void print(int arr[] , int n){

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

}

void second(int arr[] , int n){

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

    // one(arr, n);

    second(arr ,n);

    print(arr,n);

    




    return 0;
}