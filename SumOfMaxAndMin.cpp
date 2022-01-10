#include <bits/stdc++.h>
using namespace std;

//Naive approach
// int sumOfMaxMin(vector<int> &arr, int n){
// 	// Write your code here.
//     sort(arr.begin(), arr.end());
//     int first = arr[0];
//     int second = arr[n-1];
//     int sum = first + second;
//     return sum;
// }

//optimal approach
int sumOfMaxMin(vector<int> &arr, int n)
{
    int mini, maxi;
    mini = maxi = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] < mini)
        {
            mini = arr[i];
        }
        else if(arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi + mini;
}


int main()
{
    vector<int> arr{-1};
    int len = arr.size();
    int ans = sumOfMaxMin(arr, len);
    cout << ans << endl;

}