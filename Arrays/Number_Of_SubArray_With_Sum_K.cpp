#include<iostream>
#include<unordered_map>
using namespace std;

int brute(int arr[], int n, int k){

    int sum = 0;
    int count = 0;
    
    for(int i = 0; i < n; i++){
        sum = 0;
        for(int j = i; j < n; j++){

            sum += arr[j];

            if(sum == k){
                count++;
            }

        }

    }
    return count;
}
 
int optimise(int arr[], int n , int k){

    int sum = 0;
    int count = 0;

    unordered_map<int, int> mp;

    mp[0] = 1;

    for(int i = 0; i < n; i++){

        sum = sum + arr[i];

        
        if(mp.find(sum-k) != mp.end()){
            count = count + mp[sum-k];
        }
        mp[sum]++;  // This will be given at last
    }
    return count;
}

int main(){
 
        int n;
        cout << "Enter the size of the array: ";
        cin >> n;
        int k;
        cin>>k;
    
        int arr[n];
        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout<<"The number of subarrays with sum k is "<<brute(arr, n,k)<<endl;
        cout<<"The number of subarrays with sum k is "<<optimise(arr, n,k)<<endl;
        




    return 0;
}