#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int algo(int arr[], int n){

    int maxi = INT_MIN;
    int sum = 0;

    for(int i = 0; i < n; i++){

        if(sum < 0){
            sum = 0;
        }

        sum = sum + arr[i];
        maxi = max(maxi, sum);

    }

    return maxi;

}

void print(int arr[], int n){

    int maxi = INT_MIN;
    int sum = 0;
    vector<int> ans;
    int first = -1;
    int second = -1;

    for(int i = 0; i < n; i++){

        
        if(sum < 0){
            sum = 0;
        }
        
        if(sum == 0){
            first = i;
        }
        sum = sum + arr[i];

        if(maxi <= sum){
        maxi = sum;
        second = i;
        }

    }

    cout<<endl;
    for(int i = first; i <= second; i++){
        cout<<arr[i]<<" ";
    }

}
 
int main(){

    int arr[] = {-2, -3, 4,-1,-2,1,5,-3};
    int n = 8;
    
    cout<<"The maximun sum is "<<algo(arr, n)<<endl;

    print(arr, n);
 
    
    return 0;
}