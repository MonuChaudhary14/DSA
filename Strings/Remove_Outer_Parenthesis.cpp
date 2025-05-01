#include <iostream>
using namespace std;

string removeOuterParentheses(string s)
{

    string ans = "";
    string sub = "";
    int n = s.length();
    int low = 0;
    int high = 0;
    int count = 0;

    while (s[low] == ')')
    {
        low++;
    }

    high = low;

    while (high < n)
    {

        if (s[high] == '(')
        {
            count++;
        }
        else
        {
            count--;
        }

        if (count < 0)
        {
            count = 0;
            continue;
        }

        if (count == 0)
        {

            for (int i = low + 1; i < high && high <= n; i++)
            {
                sub = sub + s[i];
            }
            ans += sub;
            sub = "";
            low = high + 1;
        }

        high++;
    }

    return ans;
}

int main()
{

    return 0;
}