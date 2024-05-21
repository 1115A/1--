#include<string>
#include<iostream>
int judge(char st)
{
    switch (st)
    {
        case 73:return 1;
        case 86:return 5;
        case 88:return 10;
        case 76:return 50;
        case 67:return 100;
        case 68:return 500;
        case 77:return 1000;
        default:return 0;
    }

}
using namespace std;
class Solution {
public:
    int romanToInt(string s)
    {
        if (s.length() == 1)
            return judge(s[0]);
        else
        {
            int j = 0;
            int ret = 0;
            while (j < s.length())
            {
                if (judge(s[j]) < judge(s[j + 1]))
                {
                    ret += judge(s[j + 1]) - judge(s[j]);
                    j += 2;
                }
                else
                {
                    ret += judge(s[j]);
                    j += 1;
                }
            }
            return ret;
        }
    }
};

//I             1   73
//V             5   86
//X             10  83
//L             50  76
//C             100 67
//D             500 68
//M             1000    77
int main()
{
    Solution a;
    string s = {"MCMXCIV"};
    cout<<a.romanToInt(s);

}