#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int maximum(vector<int> &bloomDay){

        int maxi = INT_MIN;

        for(int i = 0; i < bloomDay.size(); i++){
            maxi = max(maxi , bloomDay[i]);
        }
        return maxi;
    }
    int minimum(vector<int> &bloomDay){

        int mini = INT_MAX;

        for(int i = 0; i < bloomDay.size(); i++){
            mini = min(mini, bloomDay[i]);
        }
        return mini;
    }

    int check(vector<int> &days, int m , int k, int mid){

        int count = 0;
        int num = 0;

        for(int i = 0 ; i < days.size(); i++ ){

            if(days[i] <= mid){

                num++;

                if(num == k){
                count++;
                num = 0;
            }

            }
            else{
                num = 0;
            }
        }   

        if(count >= m){
            return 0;
        }
        else{
            return 1;
        }

    }

    int minDays(vector<int>& bloomDay, int m, int k) {

        // if(m*k > bloomDay.size()){
        //     return -1;
        // }
        
        int start = minimum(bloomDay);
        int end = maximum(bloomDay);
        int ans = -1;

        while(start <= end){

            int mid = (start+end)/2;

            if( check(bloomDay ,m , k, mid) == 0){
                ans = mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }

        }
        return ans;
    }
};
 
int main(){
 
    
    return 0;
}