#include<iostream>
using namespace std;
 
int main(){
 
    int arr[] = {1,1,8,8,3,4,4,5,5};
    int n = 9;

    // Brute force-> In this we count the frequency of every element and then check if it occur one time

    // Better-> Create a array(does not work with large values so we have to create a map) of the size of maximum element and count the frequency of all elements


    int num = 0;

    for(int i = 0;i < n; i++){
        num = num ^ arr[i];
    }

    cout<<num;

    return 0;
}