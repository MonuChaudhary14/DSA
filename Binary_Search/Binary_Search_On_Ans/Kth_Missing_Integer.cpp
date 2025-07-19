#include<bits/stdc++.h>
using namespace std;

    int findKthPositive(vector<int>& arr, int k) {

        int i = 1;
        int val = 0;
        
        while(k != 0 && val < arr.size()){

            if(i != arr[val]){
                k--;
            }
            else{
                val++;
            }
            i++;

        }

        if(k != 0){
            return i+k-1;
        }
        else{
            return i-1;
        }
    }


    int findKthPositive(vector<int>& arr, int k) {
        
        for(int i = 0; i < arr.size(); i++){

            if(k >= arr[i]){
                k++;
            }
            

        }
        return k;
    }


 
int main(){
 



    return 0;
}