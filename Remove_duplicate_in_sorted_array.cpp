#include <iostream>

using namespace std;

int removeDuplicates(int *nums, int numsSize)
{
    if (numsSize <= 1)
        return numsSize;

    int k = 1;

    for (int i = 1; i < numsSize; ++i)
    {
        if (nums[i] != nums[k - 1])
        {
            nums[k++] = nums[i];
        }
    }

    return k;
}

int main()
{
    int size;
    cout << "\nEnter the sieze of the array: ";
    cin >> size;

    int *array = new int[size];

    cout << "\nEner the values of the array: ";
    for (int i = 0; i < size; i++)
        cin >> array[i];

    int k = removeDuplicates(array, size);

    cout << "\nNumber of unique elements left: " << k << endl;

    cout << "\nThe remaining elements are: ";
    for (int i = 0; i < k; i++)
    {
        cout << array[i] << " ";
    }

    delete[] array;

    return 0;
}