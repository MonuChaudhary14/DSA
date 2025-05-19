#include<iostream>
#include<vector>
using namespace std;

void sub(int arr[] , int i , int n , vector<int> &v, vector<vector<int>> &ans){

    if(i == n){
        ans.push_back(v);
        return ;
    }

    v.push_back(arr[i]);
    sub(arr, i+1, n, v, ans);

    v.pop_back();
    sub(arr, i+1, n, v, ans);

}
 
int main(){
 
        int n;
        cout << "Enter the size of the array: ";
        cin >> n;
    
        int arr[n];
        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<int> v;
        vector<vector<int>> ans;
        
        sub(arr, 0 , n , v, ans);

        for(int i = 0; i < ans.size(); i++){

            for(int j = 0; j < ans[i].size(); j++){

                cout<<ans[i][j];
            }
            cout<<endl;
        }
        


    return 0;
}