#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int row = matrix.size();
        int col = matrix[0].size();
        int desired_row = -1;

        // Early return for single element
        if(row == 1 && col == 1) {
            return matrix[0][0] == target;
        }

        // Step 1: Binary search to find the row
        int start = 0;
        int end = row - 1;

        while(start <= end) {
            int mid = (start + end) / 2;

            if(matrix[mid][0] == target) {
                return true;
            }
            else if(matrix[mid][0] > target) {
                end = mid - 1;
            }
            else {
                desired_row = mid;
                start = mid + 1;
            }
        }

        if(desired_row == -1) return false;

        // Step 2: Binary search in the desired row
        start = 0;
        end = col - 1;

        while(start <= end) {
            int mid = (start + end) / 2;
            if(matrix[desired_row][mid] == target) {
                return true;
            }
            else if(matrix[desired_row][mid] > target) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        return false;
    }
};

 
int main(){
 
    
    return 0;
}