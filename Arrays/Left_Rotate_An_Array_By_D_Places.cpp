#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotate(int arr[], int n, int k, vector<int> &ans){


    for(int i = k ; i < n; i++){
        ans.emplace_back(arr[i]);
    }
    for(int i = 0; i < k; i++){
        ans.emplace_back(arr[i]);
    }
}

void reverse(int arr[], int n, int k){

    reverse(arr, arr+n);  // O(d)
    reverse(arr, arr+k+1); // O(n-d)
    reverse(arr+k+1, arr+n); // O(n)

}

void print(vector<int> v){

    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void print(int arr[] , int n){

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
 
int main(){
 
    /*
    Approaches
    1.Extra space(array)
    a. Make an array that take d values and store the first d values in it

    2.Reverse Function

    
    

    */

    int arr[] = {1,2,3,4,5};
    int k = 2;
    int n = 5;

    vector<int> ans;

    k = k % n;

    rotate(arr, n, k, ans);

    reverse(arr,n ,k);

    print(ans);

    print(arr, n);








    return 0;
}