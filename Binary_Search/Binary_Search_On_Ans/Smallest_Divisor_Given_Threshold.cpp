#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    int maximum(vector<int> &nums){

        int maxi = INT_MIN;

        for(int i = 0; i < nums.size(); i++){

            maxi = max(maxi, nums[i]);

        }
        return maxi;
    }

    bool check(vector<int> &nums, int threshold , int mid){

        int sum = 0;

        for(int i = 0; i < nums.size(); i++){

            if(nums[i] % mid == 0){
                sum = sum + int(nums[i] / mid);
            }
            else{
                sum = sum + int(nums[i] / mid) +1;
            }
        }
        return sum <= threshold? true:false;

    }   



    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int start = 1;
        int end = maximum(nums);
        int ans = -1;

        while(start <= end){

            int mid = (start+end)/2;

            if( check(nums, threshold , mid) == 1){
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