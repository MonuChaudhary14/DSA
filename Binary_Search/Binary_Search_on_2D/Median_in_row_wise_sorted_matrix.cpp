#include<bits/stdc++.h>
using namespace std;

int median(vector<vector<int>> &matrix, int m, int n) {
    
    priority_queue<int> q;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){

            q.push(matrix[i][j]);

        }
    }

    int half = (m*n)/2 ;

    for(int i = 1; i <= half; i++){
        q.pop();
    }

    return q.top();

}
 
int main(){
 
    
    return 0;
}