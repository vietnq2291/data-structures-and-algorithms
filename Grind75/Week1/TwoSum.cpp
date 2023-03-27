#include <bits/stdc++.h>

/*
 * DESCRIPTION:
 */

using namespace std;

// ----------------------------------------------------------------------------
int chkPoint=0;
template<typename... Args>
void debug(Args... args) {

	cout << "debug (" << ++chkPoint << "):" << endl; 
	cout << "\t";
    ((cout << args << " "), ...);
	cout << "\n" << endl;
}
void debugArr(vector<int> vt) {
	for (int i = 0; i < vt.size(); i++)
		cout << i << " ";
	cout << endl;
}
// ----------------------------------------------------------------------------

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
		int comp;
		map<int, int> mp;
		vector<int> res;

		for (int i = 0; i < nums.size(); i++) {
			comp = target - nums[i];

			if (mp.find(comp) != mp.end()) {
				res = {mp[comp], i};
				break;
			} else {
				mp[nums[i]] = i;
			}
		}

		return res;
    }
};

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> nums = {2, 7, 11, 15};
	int target = 9;

	vector<int> res = Solution().twoSum(nums, target);

	debugArr(res);

	return 0;
}