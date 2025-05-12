#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int myAtoi(string s)
    {

        long long int ans = 0;

        bool negative = false;
        bool countingstart = false;

        int i = 0;

        while (s[i] == ' ' && i < s.length())
        {
            i++;
        }

        for (; i < s.length(); i++)
        {

            if (s[i] == '-' && !countingstart)
            {
                negative = true;
                countingstart = true;
                continue;
            }
            else if (s[i] == '-' && countingstart)
            {
                break;
            }

            if (s[i] == '+' && !countingstart)
            {
                countingstart = true;
                continue;
            }
            else if (s[i] == '+' && countingstart)
            {
                break;
            }

            if (countingstart && !(s[i] >= '0' && s[i] <= '9'))
            {
                break;
            }

            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || s[i] == '.' || s[i] == ' ')
            {
                break;
            }

            int ch = s[i] - '0';
            countingstart = true;

            ans = ans * 10 + ch;

            if (ans > INT_MAX && !negative)
            {
                return INT_MAX;
            }
            else if (ans > INT_MAX && negative)
            {
                return INT_MIN;
            }
        }
        if (negative)
            return -ans;

        return (int)ans;
    }
};

int myAtoi(string s)
{
    int i = 0, sign = 1;
    long res = 0; // Using long to handle overflow cases

    // Trim leading spaces
    while (i < s.size() && s[i] == ' ')
        i++;
    if (i == s.size())
        return 0;

    // Check for sign
    if (s[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (s[i] == '+')
        i++;

    // Process numerical characters
    while (i < s.size() && isdigit(s[i]))
    {
        res = res * 10 + (s[i] - '0');

        // Handle overflow
        if (sign * res > INT_MAX)
            return INT_MAX;
        if (sign * res < INT_MIN)
            return INT_MIN;

        i++;
    }

    return (int)(sign * res);
}

int main()
{

    return 0;
}