#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int maximum(vector<int> &piles){

        int maxi = INT_MIN;

        for(int i = 0; i < piles.size(); i++){

            maxi = max(maxi, piles[i]);

        }
        return maxi;
    }

    bool check(vector<int> &piles , int h, int speed){

        long long totaltime = 0;

        for(int i = 0; i < piles.size(); i++){

            if(piles[i] % speed == 0){
                totaltime += int(piles[i] / speed);
            }
            else{
                totaltime += int(piles[i] / speed) + 1;
            }

        }

        if(totaltime <= h){
            return true;
        }
        else{
            return false;
        }


    }


    int minEatingSpeed(vector<int>& piles, int h) {
        

       int start = 1;
       int end = maximum(piles);
       int ans = -1;

       while(start <= end){

        int mid = (start+end)/2;

        if(check(piles , h, mid )){

            ans = mid;
            end = mid -1;

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