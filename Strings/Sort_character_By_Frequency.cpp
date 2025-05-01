#include<bits/stdc++.h>
#include <iostream>
#include<algorithm>
using namespace std;

string frequencySort(string s)
{
    vector<int> arr(128, 0);
    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        arr[s[i]]++;
    }

    sort(s.begin(), s.end(), [&](char a, char b)
         {
                if (arr[a] == arr[b]) return a < b; 
                return arr[a] > arr[b]; });

    return s;
}

string frequencySort_second(string s) {
    int n = s.length();
    unordered_map<char , int> mp;

    for(int i = 0; i < n; i++){

        mp[s[i]]++;

    }

    vector<pair<char , int>> v;

    for(auto it : mp){

        v.push_back({it.first , it.second});

    }

    auto cmp = [&](pair<char, int> &a , pair<char , int> &b){
        return a.second > b.second;
    };

    sort(v.begin(), v.end(), cmp);

    string ans = "";

    for(auto it : v){

        ans.append(it.second , it.first);

    }
    return ans;
}

int main()
{

    return 0;
}