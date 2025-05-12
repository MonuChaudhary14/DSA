#include <iostream>
using namespace std;

bool check(string s)    // This will TLE in most of the cases
{

    int i = 0;
    int j = s.length() - 1;

    while (i < j)
    {

        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

string longestPalindrome(string s)
{

    string ans = "";
    string maxi = "";
    int n = s.length();

    for (int i = 0; i < n; i++)
    {

        ans = "";

        for (int j = i; j < n; j++)
        {

            ans = ans + s[j];

            if (check(ans))
            {
                if (maxi.length() < ans.length())
                    maxi = ans;
            }
        }
    }

    return maxi;
}

int main()
{

    return 0;
}