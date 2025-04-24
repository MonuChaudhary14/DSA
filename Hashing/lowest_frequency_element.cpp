#include<iostream>
#include<unordered_map>
#include<climits>
using namespace std;
 
int main(){
 
    
    int array[] = {10,5,10,15,10,5};

    unordered_map<int, int> mp;

    for(int i =  0; i < 6; i++){
        mp[array[i]]++;
    }

    int maxi = INT_MIN;
    int mini = INT_MAX;
    int maxindex = -1;
    int minindex = -1;


    for(auto it: mp){
        
        if(maxi < it.second){
            maxi = max(maxi, it.second);
            maxindex = it.first;
        }

        if(mini > it.second){
            mini = min(it.second, mini);
            minindex = it.first;
        }

    }

    cout<<"The maximum occuring element is "<<maxindex;
    cout<<endl;
    cout<<"The minimum occuring element is "<<minindex<<endl;



    return 0;
}