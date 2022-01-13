#include <bits/stdc++.h>
using namespace std;

vector<int> waveFormArray(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i += 2)
    {

        if (i > 0 && arr[i] < arr[i - 1])
        {

            swap(arr[i], arr[i - 1]);
        }

        if (i < n - 1 && arr[i] < arr[i + 1])
        {

            swap(arr[i], arr[i + 1]);
        }
    }
    return arr;
}

int main()
{
    vector<int> arr{4, 3, 2, 5, 4, 1};
    int len = arr.size();
    waveFormArray(arr, len);
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
}