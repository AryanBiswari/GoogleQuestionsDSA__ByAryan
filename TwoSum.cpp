#include <bits/stdc++.h>
using namespace std;

// Naive approach
//  vector<int> twoSum(vector<int> &nums, int target)
//  {
//      for (int i = 0; i < nums.size(); i++)
//      {
//          for (int j = i + 1; j < nums.size(); j++)
//          {
//              int sum = nums[i] + nums[j];
//              if (sum == target)
//              {
//                  return {i, j};
//              }
//          }
//      }
//      return {0, 0};
//  }

//Optimise approach
vector<int> twoSum(vector<int> &nums, int target)
{
    map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        if (mp.find(nums[i]) == mp.end())
        {
            mp[target - nums[i]] = i;
        }
        else
            return {mp[nums[i]], i};
    }
    return {0, 0};
}

// Another Optimal solution
//  vector<int> twoSum(vector<int> &nums, int target)
//  {
//      vector<pair<int, int>> vecp;
//      for (int i = 0; i < nums.size(); i++)
//          vecp.push_back({nums[i], i});
//      sort(vecp.begin(), vecp.end());
//      int i = 0;
//      int j = nums.size()-1;
//      int idx1 = 0;
//      int idx2 = 0;
//      while (i<j)
//      {
//          if(vecp[i].first + vecp[j].first==target){
//              idx1 = vecp[i].second;
//              idx2 = vecp[j].second;
//              break;
//          }
//          else if(vecp[i].first+vecp[j].first<target){
//              i++;
//          }
//          else
//          {
//              j--;
//          }
//      }
//      return {idx1, idx2};
//  }

int main()
{
    vector<int> nums{11, 10, 1, 9};
    int target = 21;
    vector<int> ans = twoSum(nums, target);
    cout << ans[0] << " " << ans[1];
}