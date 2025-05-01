#include<iostream>
#include<climits>
using namespace std;

int brute(int arr[], int n){

    int maxi = 0;

    for(int i = 0; i < n; i++){

        for(int j = i+1; j < n; j++){

            maxi = max(maxi , arr[j]- arr[i]);

        }

    }
    return maxi;
}
 
int better(int arr[], int n){

    int mini[n] ;
    int minimum = INT_MAX;

    for(int i = 0; i < n; i++){

        mini[i] = min(minimum , arr[i]);
        minimum = mini[i];
    }

    int maxi = 0;

    for(int i = 0; i < n; i++){

        maxi = max(maxi  , arr[i] - mini[i]);

    }

    return maxi;


}

int optimise(int arr[], int n){

    int mini = arr[0];
    int maxi = 0;

    for(int i = 0; i < n; i++){

        maxi = max(maxi, arr[i]- mini);
        mini = min(mini , arr[i]);
        

    }
    

    return maxi;
}

int main(){
 
    int arr[] = {7,1,5,3,6,4};
    int n = 6;


    cout<<"The maximum profit is "<<brute(arr, n);
    cout<<endl;
    cout<<"The maximum profit is "<<better(arr, n);
    cout<<endl;
    cout<<"The maximum profit is "<<optimise(arr, n);
    


    return 0;
}