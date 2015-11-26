#include <iostream>
#include <vector>
#include <map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> IndexOfNum;
        for (int i = 0;i < (int)nums.size();i++) {
            if (IndexOfNum.count(target - nums[i])>0) {
                vector<int> ret = { IndexOfNum[target - nums[i]] + 1,i + 1 };
                return ret;
            }
            if (IndexOfNum.count(nums[i]) == 0) {
                IndexOfNum[nums[i]] = i;
            }
        }
        return vector<int>();
    }
};

int main() {
    Solution s;
    vector<int> q = { 2, 7, 11, 15 };
    vector<int> res = s.twoSum(q, 9);
    cout << res[0] << ' ' << res[1] << endl;
    system("pause");
    return 0;
}
