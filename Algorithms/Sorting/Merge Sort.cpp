
//  Time Complexity = O(nlogn)
//  Space Complexity = O(n)


#include <iostream>
using namespace std;

void merge(int *nums, int start, int end)
{
    int mid = start + (end - start) / 2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int mainArrayIndex = start;
    for (int i = 0; i < len1; i++)
    {
        first[i] = nums[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = nums[mainArrayIndex++];
    }

    // merge 2 sorted array
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            nums[mainArrayIndex++] = first[index1++];
        }
        else
        {
            nums[mainArrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        nums[mainArrayIndex++] = first[index1++];
    }

    while (index2 < len2)
    {
        nums[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;
}
void mergeSort(int *nums, int start, int end)
{
    if (start >= end)
        return;

    int mid = start + (end - start) / 2;

    // left part sort karo
    mergeSort(nums, start, mid);

    // right part sort karo
    mergeSort(nums, mid + 1, end);

    // merge karo
    merge(nums, start, end);
}
int main()
{
    int nums[10] = {100, 60, 50, 40, 70, 80, 90, 30, 20, 10};
    int n = 10;

    mergeSort(nums, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
