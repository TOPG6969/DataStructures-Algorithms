
//  ONLY IMPORTANT CODE
//  Time Complexity = O(n^2)
//  Space Complexity = O(1)

#include <iostream>
using namespace std;

int main()
{
    for(int i = 0 ; i < arr.size()-1 ; i++)
    {
        int minIndex = i;
        for(int j = i+1 ; j < arr.size() ; j++)
        {
            if(arr[midIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex] , arr[i]);
    }
}
