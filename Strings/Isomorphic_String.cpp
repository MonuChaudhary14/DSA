#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool isIsomorphic(string s, string t)
{

    if (s.length() != t.length())
        return false;

    vector<int> arr1(256, -1);
    vector<int> arr2(256, -1);

    for (int i = 0; i < s.length(); i++)
    {

        if (arr1[s[i]] != arr2[t[i]])
        {
            return false;
        }
        arr1[s[i]] = i;
        arr2[t[i]] = i;
    }

    return true;
}

bool isIsomorphic2(string s, string t)
{

    if (s.length() != t.length())
    {
        return false;
    }

    int n = s.length();

    unordered_map<char, char> mp;
    bool arr[255] = {0};

    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        if (mp.find(ch) != mp.end())
        {

            if (mp[s[i]] != t[i])
            {
                return false;
            }
        }

        else
        {
            int element = t[i];
            if (arr[element] == 0)
            {
                mp[s[i]] = t[i];

                arr[element] = true;
            }
            else
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{

    return 0;
}