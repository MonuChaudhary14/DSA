#include<iostream>
#include<climits>
using namespace std;

int brute(int arr[], int n){

    int maxi = INT_MIN;
    int sum = 0;

    for(int i = 0;i < n; i++){
        sum = 0;
        for(int j = i; j < n; j++){

            sum = sum  + arr[j];

            if(sum > maxi){
                maxi = sum;
            }
        }
    }
    return maxi;
}

int optimised(int arr[], int n){

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
 
int main(){
 
    int arr[] = {-2, -3, 4,-1,-2,1,5,-3};
    int n = 8;

    cout<<"The maximun sum is "<<brute(arr, n)<<endl;
    
    cout<<"The maximun sum is "<<optimised(arr, n)<<endl;




    return 0;
}