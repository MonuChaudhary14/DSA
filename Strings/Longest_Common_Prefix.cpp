#include <iostream>
#include<vector>
using namespace std;

    string longestCommonPrefix(vector<string> &strs)
    {

        bool flag = true;
        string ans = "";

        for (int i = 0; i < strs[0].size(); i++)
        {

            char ch = strs[0][i];

            for (int j = 1; j < strs.size(); j++)
            {

                if (strs[j].size() < i || ch != strs[j][i])
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                ans += ch;
            }
            else
            {
                break;
            }
        }
        return ans;
    }

int main()
{

    return 0;
}