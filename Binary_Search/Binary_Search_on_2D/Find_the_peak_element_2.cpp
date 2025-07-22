#include<bits/stdc++.h>
using namespace std;

// Brute force method -> Find the largest element

class Solution {
public:
    int check (vector<vector<int>> &nums , int mid){

        int max = INT_MIN;
        int max_index = -1;

        for(int i = 0; i < nums.size(); i++){

            if(max < nums[i][mid]){
                max = nums[i][mid];
                max_index = i;
            }
        }

        if(mid != 0 && nums[max_index][mid] < nums[max_index][mid-1]){
            return -1;
        }
        else if( mid != nums[0].size()-1 && nums[max_index][mid] < nums[max_index][mid+1]){
            return -2;
        }
        else{
            return max_index;
        }

    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        
        int start = 0;
        int end = mat[0].size()-1;

        while(start <= end){

            int mid = (start+end)/2;

            int index = check(mat, mid);

            if( index >= 0 ){

                return {index , mid};

            }
            else if(index == -1){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return {-1, -1};
    }
};
 
int main(){
 
    


    return 0;
}