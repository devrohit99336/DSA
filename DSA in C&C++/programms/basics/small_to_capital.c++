/**
 * @file small_to_capital.c
 * @author your name (you@domain.com)
 * @brief Change small letter to capital latter own function
 * @version 0.1
 * @date 2022-03-24
 *
 * @copyright Copyright (c) 2022
 *
 */
using namespace std;
#include <bits/stdc++.h>

char upper(char c)
{
    return 'A' + (c - 'a');
}

int main()
{
    while (true)
    {
        string s;
        cin >> s;
        if (s.size() == 0)
        {
            break;
        }
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = upper(s[i]);
        }

        cout << s <<endl;
        //cout << s << endl;


    }
}