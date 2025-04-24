#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
 
int main(){
 
    // A map contain key-value pair which is used in place of frequency array

    // A map sort the keys and then store them but unordered map does not store the value in order

    // Time complexity -
    // 1.Map- O(logn) --> Storing and Fetching in best, average, worst case
    // 2.unordered_map-O(1) --> Storing and Fetching in best, average
    // In worst case, the time complexity is O(N)

    // In unordered map we can only have individual values like map where we can create pair


    // Design of Internal Map

    // 1.Division Method 
    // 2.Folding Method 
    // 3.Mid Sqaure Method

    /* Division Method

        Let us assume that the maximum size of the array allowed is 10
        To store the value, the map does num % 10 and then store it
        
        To store the value at multiple values, it uses a linked list
        The linked list contain 9 node and it add value to that node which has same remainder
        It chain every element even if it appear multiple time it still make a new copy and arrange them in sorted order
    
    
        But in case of unordered map worst case when the elements have same value of remainder then it take O(n) time to find the frequency




    */

    map<int, int> mp;

    int arr[14] = {1,2,3,4,5,6,7,9,9,1,2,4,6,6};
    int n = 14;

    for(int i = 0; i < 14; i++){
        mp[arr[i]]++;
    }

    // Iteration in the map

    for(auto it : mp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    return 0;
}