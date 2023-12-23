#include <iostream>

using namespace std;

int majorityElement(int *nums, int numsSize)
{
    int majority = nums[0];
    int count = 1;

    for (int i = 1; i < numsSize; ++i)
    {
        if (nums[i] == majority)
        {
            ++count;
        }
        else
        {
            --count;
            if (count == 0)
            {
                majority = nums[i];
                count = 1;
            }
        }
    }

    // return majority;
}

int main()
{
    int size;
    cout << "\nEnter the size of the array: ";
    cin >> size;

    int *array = new int[size];

    cout << "\nEnter the values of the array: ";
    for (int i = 0; i < size; i++)
        cin >> array[i];

    cout << "\nThe majority element in array is: " << majorityElement(array, size);

    delete[] array;

    return 0;
}