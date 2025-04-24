#include<iostream>
#include<set>
#include<map>
using namespace std;

void removebyset(int arr[], int n){
    // Time complexity -> nlogn + n
    // Space complexity -> O(n)
    set<int> s;

    for(int i = 0; i < n; i++){
        s.insert(arr[i]);
    }

    int size = s.size();
    int i = 0;
    for(auto it : s){
        arr[i++] = it;
    }

}

void twopinter(int arr[], int n){
    // Time Complexity -> O(n)
    // Space Complexity -> O(1)
    int i = 0;
    int j = 1;

    while(j < n){

        if(arr[j] != arr[i]){
            swap(arr[++i], arr[j]); // O(1)
            j++;
        }
        else{
            j++;
        }

    }

}

void print(int arr[] , int n){

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
 
int main(){

    // Approaches->
    // 1.Using set
    // 2.Using map  -> same as set / we can also make a int, bool type map
    // 3.Two pointer 

 
    int arr[] = {1,1,2,2,2,3,3};
    int arr1[] = {1,1,2,2,2,3,3};

    int n =7;

    removebyset(arr, n);

    print(arr, n);

    twopinter(arr1, n);

    print(arr, n);


    return 0;
}