#include <iostream>
using namespace std;

string largestOddNumber(string num)
{

    string ans = "";
    int n = num.length();
    int index = -1;

    for (int i = n - 1; i >= 0; i--)
    {

        int val = num[i] - '0';

        if (val & 1)
        {
            index = i;
            break;
        }
    }

    if (index != -1)
    {

        for (int i = 0; i <= index; i++)
        {
            ans += num[i];
        }
    }
    return ans;
}

int main()
{

    return 0;
}