#include<iostream>
#include<algorithm>
#include<unordered_set>
#include<climits>
using namespace std;

int better(int arr[], int n){

    sort(arr , arr+n);

    int count = 1;
    int maxcount = 1;
    int mini = INT_MIN;

    for(int i = 0; i < n; i++){

        if(arr[i]-1 == mini){
            count++;
            mini = arr[i];
        }
        else if(arr[i] != mini){
            count = 1;
            mini = arr[i];
        }   
        
        maxcount = max(maxcount, count);

    }


    return maxcount;
}

bool check(int arr[], int n , int k){

    for(int i = 0; i < n; i++){
        if(arr[i] == k){
            return true;
        }
    }
    return false;
}

int brute(int arr[], int n){

    int element;
    int count = 1;
    int maxcount = 1;

    for(int i = 0 ; i < n; i++){

        element = arr[i];
        count = 1;
        
        while(check(arr, n , element+1)){
            element++;
            count++;
            maxcount = max(maxcount, count);
        }
    }
    return maxcount;

}

int optimised(int arr[], int n){

    unordered_set<int> set;

    for(int i = 0; i< n; i++){
        set.insert(arr[i]);
    }

    int count = 1;
    int maxcount = 1;

    for(auto it : set){

        if(set.find(it-1) == set.end()){

            int element = it;
            count = 1;

            while(set.find(element+1) != set.end()){
                count++;
                element++;
            }
            maxcount = max(count, maxcount);

        }

    }
    return maxcount;
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

        cout<<"The longest subsequence is "<<brute(arr, n)<<endl;   
        cout<<"The longest subsequence is "<<better(arr, n)<<endl;
        cout<<"The longest subsequence is "<<optimised(arr, n)<<endl;
        
        



    return 0;
}