#include<iostream>
using namespace std;

void print(int i , int n){

    if(i == n){
        return ;
    }

    
    
    print(i+1, n);
    cout<<i<<" ";
}

int sum(int n, int sum1 , int i){

    if(i == n){
        return sum1+n;
    }

    return sum(n, sum1+i, i+1);

}

void reversearray(int i , int j , int arr[]){

    if(i >= j){
        return ;
    }

    swap(arr[i], arr[j]);

    reversearray(i+1, j-1, arr);

}
 
int main(){
 
    print(5, 10);

    cout<<endl;

    cout<<sum(5, 0 ,0)<<endl;

    int arr[] = {1,2,3,4,5};

    reversearray(0, 4, arr);

    for(int x : arr){
        cout<<x<<" ";
    }

    
    return 0;
}