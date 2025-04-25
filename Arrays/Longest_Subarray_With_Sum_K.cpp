#include<iostream>
#include<unordered_map>
using namespace std;
 
int main(){

    // Prefix Sum Map  for both positive and negative

    int arr[] = {1,0,0,2,3,4,5,6};
    int n = 8;
    int k = 11;
 
    unordered_map<int, int> mp;

    int sum = 0;
    int maxi = 0;

    for(int i = 0; i < n; i++){

        sum = sum + arr[i];

        if(sum == k){
            maxi = max(maxi, i+1);
        }

        if(sum > k && (mp.find(sum-k)) != mp.end()){  
            int num = mp[sum-k];
            maxi = max(maxi , i-num);
        }

        if(mp.find(sum) == mp.end()) {
            mp[sum] = i;
        }


    }

    cout<<"The ans is "<<maxi<<endl;


    // In this method , i have checked the sum of all subarray and then choosing the maximum one
    maxi = 0;
    for(int i = 0; i < n; i++){

        sum = 0;

        for(int j = i; j < n; j++){

            sum = sum + arr[j];

            if(sum == k){
                maxi = max(maxi, j-i);
                break;
            }
            else if(sum > k){
                break;
            }
        }

    }

  
    cout<<"The ans is "<<maxi+1<<endl;  


    sum = 0;
    maxi = 0;

    int j = 0;

    for(int i = 0; i < n; i++){

        sum = sum +arr[i];
        
        while(sum > k && j <= i){
            sum = sum - arr[j++];
        }
        
        if(sum == k){
            maxi = max(maxi ,i-j+1);
            continue;
        }
        


    }

    cout<<"The ans is "<<maxi<<endl;


    

    return 0;
}