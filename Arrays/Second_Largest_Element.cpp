#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int second(int arr[], int n){

    sort(arr, arr+n);

    for(int i = n-2; i >= 0; i--){
        if(arr[i] != arr[i+1]){
            return arr[i];
        }
    }
    return -1;
}

int secondlargest(int arr[], int n){

    int largest = arr[0];
    int second = INT_MIN;

    for(int i = 1; i < n; i++){

        if(largest < arr[i]){
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest){
            second = arr[i];
        }

    }

    return second;
}
 
int main(){
 
    int arr[] = {4,6,7,9,63,41,9,9,63,41};

    int n = 10;

    // cout<<"The second largest element is "<<second(arr,10);

    cout<<endl<<endl;

    cout<<"The second largest element is "<<secondlargest(arr, 10);

    




    return 0;
}