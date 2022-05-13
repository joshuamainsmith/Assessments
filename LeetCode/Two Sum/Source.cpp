#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target && i != j)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }

        return ans;
    }
};

int main()
{
    Solution soln;

    vector<int> vec = { 3, 2, 4 };
    int target = 6;

    vector<int> test = soln.twoSum(vec, target);

    return 0;
}