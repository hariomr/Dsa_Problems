#include <iostream>
using namespace std;

int main()
{

    string s1 = "xy";
    string s2 = "12";

    string res = "1xy2";

    int i = 0, j = 0, k = 0;
    if (s1.length() + s2.length() != res.length())
        cout << "No";
    else
    {
        while (k < res.length())
        {
            if (i < s1.length() && s1[i] == res[k])
            {
                i++;
            }
            else if (j < s2.length() && s2[j] == res[k])
            {
                j++;
            }
            k++;
        }

        if (i == s1.length() && j == s2.length())
        {
            cout << "Yes";
        }
        else
        {
            cout << "Nope";
        }
    }
    return 0;
}
