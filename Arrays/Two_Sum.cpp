#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;
 
int main(){
 
    int arr[] = {2,6,5,8,11};
    int n = 6;
    int k = 14;
    bool flag = false;
    int j = 0;

    for(int i = 0; i < n; i++){

        for(j = i+1; j < n; j++){

            if(arr[i] + arr[j] == k){
                flag = true;
                break;
            }
            
        }
        if(flag == true){
            cout<<i<<" "<<j<<endl;
            break;
        }

    }


    unordered_map<int, int> mp;

    for(int i = 0; i < n; i++){


        if(mp.find(k-arr[i]) != mp.end()){
            cout<<mp[k-arr[i]]<<" "<<i<<endl;
            break;
        }

        mp[arr[i]] = i;

    }

    sort(arr, arr+n);

    j = n-1;
    int i = 0;

    while(i < j){

        if(arr[i] + arr[j] == k){

            cout<<i<<" "<<i<<endl;
            break;
        }

        if(arr[i] + arr[j] > k){
            j--;
        }
        else{
            i++;
        }

    }
    



    return 0;
}