#include<iostream>
#include<unordered_map>
using namespace std;

void brute(int arr[], int n){

    for(int i = 0; i < n; i++){

        int count = 0;

        for(int j = 0; j < n; j++){

            if(arr[j] == arr[i]){
                count++;
            }

        }
        if(count > (n/2)){
            cout<<"The majority element is "<<arr[i]<<endl;
            break;
        }

    }

}

void better(int arr[] , int n){

    unordered_map<int , int> mp;

    for(int i = 0; i< n; i++){

        mp[arr[i]]++;

    }
    int value = 0;

    for(auto it: mp){

        if(it.second > (n/2)){
            value = it.first;
        }

    }
    cout<<"The majority element is "<<value<<endl;

}
 

void optimised(int arr[], int n){

    int num = arr[0];
    int count = 1;

    for(int i = 1; i < n; i++){

        if(count == 0){
            num = arr[i];
            count++;
        }
        else if(arr[i] == num){
            count++;
        }
        else{
            count--;
        }


    }

    count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == num)
            count++;
    }

    if(count > n / 2)
        cout << "The majority element is " << num << endl;
    else
        cout << "No majority element found" << endl;

}

int main(){
 
    int arr[] = {2,2,3,3,1,2,2};
    int arr1[] = {1,2,3,4,5,6,7};
    int n = 7;

    brute(arr, n);

    better(arr, n);

    optimised(arr1, n);

    

    return 0;
}