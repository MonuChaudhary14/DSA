#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void brute(int arr[], int n){

    vector<int> ans;
    bool flag = true;

    for(int i = 0; i < n; i++){
        flag = true;
        for(int j = i+1; j < n; j++){

            if(arr[i] < arr[j]){
                flag = false;
                break;
            }

        }
        if(flag){
            ans.push_back(arr[i]);
        }

    }

    for(auto it = ans.rbegin(); it != ans.rend(); it++) {
        cout << *it << " ";
    }

}

void optimise(int arr[], int n){

    vector<int> ans;

    int maxi[n] = {0};

    maxi[n-1] = arr[n-1];
    

    for(int i= n-2; i >= 0; i--){

        maxi[i] = max(arr[i], maxi[i+1]);

    }

    for(int i = 0; i < n; i++){

        if(arr[i] == maxi[i]){
            ans.push_back(arr[i]);
        }

    }

    for(auto it = ans.rbegin(); it != ans.rend(); it++) {
        cout << *it << " ";
    }

}

void moreoptimsed(int arr[], int n){

    int maxi = arr[n-1];

    vector<int> ans;
    ans.push_back(maxi);

    for(int i = n-2; i >= 0; i--){

        if(maxi < arr[i]){
            ans.push_back(arr[i]);
            maxi = arr[i];
        }

    }

    for(auto it : ans){
        cout<<it<<" ";
    }

}
 
int main(){
 
        int n;
        cout << "Enter the size of the array: ";
        cin >> n;
    
        int arr[n];
        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        brute(arr, n);

        cout<<endl;

        optimise(arr, n);

        cout<<endl;

        moreoptimsed(arr, n);


        
        


    return 0;
}