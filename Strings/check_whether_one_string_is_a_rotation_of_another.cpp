#include <iostream>
using namespace std;

bool rotateString(string s, string goal)
{
    if (s.length() != goal.length())
    {
        return false;
    }

    return (s + s).find(goal) != string::npos;
}

bool rotateString_brute(string s, string goal)
{

    if (s.length() != goal.length())
    {
        return false;
    }

    int n = s.length();

    for (int j = 1; j <= n; j++)
    {
        int temp = s[0];
        for (int i = 0; i < n - 1; i++)
        {

            s[i] = s[i + 1];
        }
        s[n - 1] = temp;

        if (s == goal)
        {
            return true;
        }
    }
    return false;
}

int main()
{

    return 0;
}