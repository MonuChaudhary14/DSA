#include<bits/stdc++.h>
using namespace std;


void sumk(vector<int> &arr, int i , int n, int sum , int k ,  vector<int> &v, vector<vector<int>> &ans){

    if(i == n){
        if(sum == k){
            ans.push_back(v);
            // v.clear();
        }
        return ;
    }

    if(sum == k){
        ans.push_back(v);
        // v.clear();
        return ;
    }

    if(arr[i] <= (k-sum)){
        v.push_back(arr[i]);
        sumk(arr, i+1 , n ,sum+arr[i] , k, v ,ans);
        v.pop_back();
    }

    sumk(arr, i+1, n, sum ,k,  v, ans);

}


// If it want to print only one subsequence , then use a boolean which will check (not recommended)

bool sumkone(vector<int> &arr, int i , int n, int sum , int k ,  vector<int> &v, vector<vector<int>> &ans){

    if(i == n){
        if(sum == k){
            ans.push_back(v);
            return true;
            
        }
        return false;
    }

    if(sum == k){
        ans.push_back(v);
        return true;
    }

    if(arr[i] <= (k-sum)){
        v.push_back(arr[i]);
        if(sumkone(arr, i+1 , n ,sum+arr[i] , k, v ,ans)){
            return true;
        }
        v.pop_back();
    }

    if(sumkone(arr, i+1, n, sum ,k,  v, ans)){
        return true;
    }

    return false;

}

// If we are asked to count

int sumkcount(vector<int> &arr, int i , int n, int sum , int k ,  vector<int> &v, vector<vector<int>> &ans){

    if(sum > k){  // When array contain only +ve value
        return 0;
    }

    if(i == n){
        if(sum == k){
            ans.push_back(v);
            return 1;
            
        }
        return 0;
    }

        v.push_back(arr[i]);
        int l = sumkcount(arr, i+1 , n ,sum+arr[i] , k, v ,ans);
        v.pop_back();
    

    int r = sumkcount(arr, i+1, n, sum ,k,  v, ans);
    

    return l+r;

}

 
int main(){
    
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout<<"Enter the value of target"<<endl;
    cin>>k;


    vector<int> arr;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        int element;
        cin>>element;
        arr.push_back(element);
    }

    vector<int> v;
    vector<vector<int>> ans;


    sumk(arr, 0, n,0,k, v, ans);

    for (int i = 0; i < ans.size(); i++)
    {

        for (int j = 0; j < ans[i].size(); j++)
        {

            cout << ans[i][j]<<" ";
        }
        cout << endl;
    }
    


    return 0;
}