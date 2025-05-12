#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

string intToRoman(int num)
{

    vector<pair<int, string>> s = {

        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}

    };

    string ans = "";

    for (auto it : s)
    {

        while (num >= it.first)
        {
            ans = ans + it.second;
            num = num - it.first;
        }
    }

    return ans;
}

string convert(int digit)
{

    if (digit == 4)
    {
        return "IV";
    }
    else if (digit == 9)
    {
        return "IX";
    }
    else if (digit == 40)
    {
        return "XL";
    }
    else if (digit == 90)
    {
        return "XC";
    }
    else if (digit == 400)
    {
        return "CD";
    }
    else if (digit == 900)
    {
        return "CM";
    }

    string ans = "";

    while (digit >= 1000)
    {
        ans = ans + "M";
        digit = digit - 1000;
    }
    while (digit >= 500)
    {
        ans = ans + "D";
        digit = digit - 500;
    }
    while (digit >= 100)
    {
        ans = ans + "C";
        digit = digit - 100;
    }
    while (digit >= 50)
    {
        ans = ans + "L";
        digit = digit - 50;
    }
    while (digit >= 10)
    {
        ans = ans + "X";
        digit = digit - 10;
    }
    while (digit >= 5)
    {
        ans = ans + "V";
        digit = digit - 5;
    }
    while (digit >= 1)
    {
        ans = ans + "I";
        digit = digit - 1;
    }

    return ans;
}

string intToRoman(int num)
{

    string ans1 = "";
    int t = 0;

    while (num != 0)
    {

        int digit = num % 10;

        ans1 = convert(digit * pow(10, t)) + ans1;

        t++;
        num = num / 10;
    }

    return ans1;
}

int main()
{

    return 0;
}