#include<iostream>
using namespace std;
 
int main(){
    int arr[] = {1,2,3,5,6,7};
    int n = 6;

    bool flag = false;

    for(int i = 1; i <= n; i++){

        flag = false;

        for(int j = 0; j < n-1; j++){

            if(i == arr[j]){
                flag = true;
                break;
            }

        }
        if(flag == false){
            cout<<i<<" is not present in the array";
            break;
        }

    }
    cout<<endl;

    bool hash[n+1] = {false};

    for(int i = 1; i <= n; i++){
        hash[arr[i-1]] = true;
    }

    for(int i = 1; i <= n; i++){
        if(hash[i] == false){
            cout<<i<<" is not present in the array";
            break;
        }
    }


    int element = -1;
    for(int i = 1; i <= n; i++){

        if(arr[i-1] != i){
            element = i;
            break;
        }

    }
    cout<<endl;
    if(element != -1){
        cout<<element<<" is not present in the array"<<endl;
    }

    int sum = (n * (n+1))/2;  /*Take a long long to avoid overflow */

    int val = 0;

    for(int i = 0; i < n-1; i++){
        val = val + arr[i];
    }

    cout<<sum-val<<" is not present in the array"<<endl;

    int x = 0;
    int y = 0;

    for(int i = 0; i < n-1; i++){
        x = x ^ (i+1);
        y = y ^ arr[i];
    }
    x = x ^ n;

    cout<<(x^y)<<" is not present in the array"<<endl;

    return 0;
}