#include <iostream>
using namespace std;

bool BinarySearch(int *nums, int target, int size)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] == target)
            return 1;

        else if (nums[mid] < target)
            start = mid + 1;

        else
            end = mid - 1;
    }
    return 0;
}
int main()
{
    int nums[5] = {91, 92, 93, 94, 95};
    int target;
    cout << "enter target to check the presence" << endl;
    cin >> target;

    int found = BinarySearch(nums, target, 5);
    if (found)
        cout << "PRESENT" << endl;
    else
        cout << "ABSENT" << endl;

    return 0;
}
