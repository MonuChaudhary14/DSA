#include<iostream>
#include<vector>
#include<set>
using namespace std;
 
int main(){
    
    // Brute force -> Push all the elements into the set/map , set will automatically sort the elements

    // Time Complexity-> (n1logn)+(n2logn)+(n1+n2)    here the size of the set is continuosly changing so we cannot find the time complexity precisley
    // Space complexity -> O(n1+n2) 
    int arr[] = {1, 1,2,3,4,5,7};
    int arr1[] = {2,3,4, 4,5,6};
    int n1 = 7;
    int n2 = 6;

    int i = 0;
    int j = 0;

    set<int> ans;

    while(i < n1 && j < n2){

        if(arr[i] <= arr1[j]){
            ans.insert(arr[i]);
            i++;
        }
        else{
            ans.insert(arr1[j++]);
        }

    }

    if(i < n1){
        ans.insert(arr[i++]);
    }
    if(j < n2){
        ans.insert(arr1[j++]);
    }

    vector<int> u;

    for(auto it : ans){
        cout<<it<<" ";
        u.push_back(it);
    }


    /*Optimsed*/

    i = 0;
    j = 0;
    vector<int> sol;
    if(arr[i] <= arr1[j]){
        sol.push_back(arr[i++]);
    }
    else{
        sol.push_back(arr1[j++]);
    }

    while(i < n1 && j < n2){

        if((arr[i] <= arr1[j])){
            if(arr[i] != sol.back()){
                sol.push_back(arr[i]);
            }
            i++;
        }
        else{
            if(arr1[j] != sol.back()){
                sol.push_back(arr1[j]);
            }
            j++;
        }

    }

    
    if(i < n1){
        if(arr[i] != sol.back()){
        sol.push_back(arr[i++]);
        }
    }
    if(j < n2){
        if(arr1[j] != sol.back()){
        sol.push_back(arr1[j++]);
        }
    }

    cout<<endl;

    for(auto it : sol){
        cout<<it<<" ";
    }


    return 0;
}