#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double power(double x, long long n){

        if(n == 1){
            return x;
        }

        if(n % 2 == 0){
            return power(x*x, n/2);
        }
        else{
            return x*power(x, n-1);   // return x*power(x*x, n/2);
        }



    }

    double myPow(double x, int n) {
        
        if(n == 1){
            return x;
        }
        else if( x == 0){
            return 0;
        } 
        else if(n == 0 || x == 1){
            return 1.00;
        }

        long long int value = n;

        if(n < 0){
            value = abs((long long)n);
            x = 1/x;
        }

        return power(x, value);



    }
};
 
int main(){
 
    
    return 0;
}