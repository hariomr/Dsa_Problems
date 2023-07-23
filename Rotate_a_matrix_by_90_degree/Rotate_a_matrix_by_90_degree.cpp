#include <iostream>
using namespace std;

void reverse(int arr[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        int start = 0;
        int end = n - 1;

        while (start < end)
        {
            int temp = arr[i][start];
            arr[i][start] = arr[i][end];
            arr[i][end] = temp;

            start++;
            end--;
        }
    }
}

void rotate(int arr[][100], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    reverse(arr, n);
}

int main()
{
    int n;
    cin >> n;
    int arr[100][100];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    rotate(arr, n);

    // Printing the rotated and reversed array
    cout << "Rotated and Reversed Array:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
