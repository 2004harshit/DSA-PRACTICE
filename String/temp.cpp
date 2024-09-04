#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "43520";
    int length = s.size();
    string str;
    int i = 0, j = i + 1;
    for (i; i <= length; i++)
    {
        if ((s[i] % 2 == 0 && s[j] % 2 == 0) || (s[i] % 2 != 0 && s[j] % 2 != 0))
        {
            //                 swap both i and j
            str.push_back(s[j]);
            str.push_back(s[i]);
        
            for (int k = j + 1; k <= length; k++)
            {
                str.push_back(s[k]);
            }
            break;
        }
        str.push_back(s[i]);
        str.push_back(s[j]);
        j++;
    }
    cout << str;
    return 0;
}