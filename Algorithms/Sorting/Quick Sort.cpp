
//  Time Complexity = O(n^2)
//  Space Complexity = O(1)


#include <iostream>
using namespace std;

int partition(int *nums , int start , int end)
{
    int pivot = nums[start];

    int count = 0;
    for(int i = start+1 ; i <= end ; i++)
    {
        if(nums[i] <= pivot)
            count++;
    }

    // place pivot element at correct index
    int pivotIndex = count + start;
    swap(nums[pivotIndex] , nums[start]);

    int i = start , j = end;
    while(i < pivotIndex && j > pivotIndex)
    {
        while(nums[i] < pivot)
        {
            i++;
        }
        while(nums[j] > pivot)
        {
            j++;
        }
        if(i < pivotIndex && j > pivotIndex)
        swap(nums[i] , nums[j]);
    }

    return pivotIndex;
}
void quickSort(int *nums , int start , int end)
{
    if(start >= end)
        return;

    int p = partition(nums , start , end);

    // sort left part
    quickSort(nums , start , p-1);

    // sort right part
    quickSort(nums , p+1 , end);
}
int main()
{
    int nums[10] = {3,1,2,5,4,7,8,9,10,6};
    int n = 10;

    quickSort(nums, 0, n-1);

    for(int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
