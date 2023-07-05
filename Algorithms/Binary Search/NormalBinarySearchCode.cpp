// Time Complexity = O(nlogn)
// Space Complexity = O(1)

#include <iostream>
using namespace std;

int BinarySearch(vector<int>& nums, int target)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] == target)
            return mid;

        else if (nums[mid] < target)
            start = mid + 1;

        else
            end = mid - 1;
    }
    return -1;
}
