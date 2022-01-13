#include <bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    int first = 0;
    int second = 0;
    vector<int> result;
    while (first < n && second < m)
    {
        if (arr1[first] == arr2[second])
        {
            result.push_back(arr1[first]);
            first++;
            second++;
        }
        else if (arr1[first] > arr2[second])
        {
            second++;
        }
        else
        {
            first++;
        }
    }
    return result;
}

int main()
{
    vector<int> arr1{1, 2, 2, 2, 3, 4};
    int len1 = arr1.size();
    vector<int> arr2{2, 2, 3, 3};
    int len2 = arr2.size();
    vector<int> arr3 = findArrayIntersection(arr1, len1, arr2, len2);
    int len3 = arr3.size();
    for (int i = 0; i < len3; i++)
    {
        cout << arr3[i] << " ";
    }
}