#include <iostream>
using namespace std;
int main()
{

    string s1;
    cout << "Enter the first string: " << endl;
    cin >> s1;
    string s2;
    cout << "Enter the second string: " << endl;
    cin >> s2;

    int l1 = s1.length();
    int l2 = s2.length();

    if (l1 != l2)
    {
        cout << "No, They are not the rotation of eachother";
    }
    else
    {

        string s3 = s1 + s1;

        if (s3.find(s2) != string::npos)
        {
            cout << "Yes";
        }
        else
        {
            cout << "NO";
        }
    }
}
