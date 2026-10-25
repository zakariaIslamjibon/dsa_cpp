
#include <iostream>
#include <vector>
using namespace std;

vector<int> pairsum(vector<int> nums, int target)
{
    int n = nums.size();
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);

                return ans;
            }
        }
    }

    return ans;
}

int main()
{
    vector<int> nums = {
        30, 40, 141, 16, 16, 45, 6, 16, 69,
        15, 69, 5, 69, 416, 484, 4, 64
    };

    int target = 34;

    vector<int> ans = pairsum(nums, target);

        cout << ans[0] << " " << ans[1] << endl;

    return 0;
}
