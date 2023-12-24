#include <iostream>

using namespace std;

void findTriplets(int *nums, int numsSize)
{
    for (int i = 0; i < numsSize - 2; ++i)
    {
        for (int j = i + 1; j < numsSize - 1; ++j)
        {
            for (int k = j + 1; k < numsSize; ++k)
            {
                if (nums[i] + nums[j] + nums[k] == 0)
                {
                    cout << "[" << nums[i] << "," << nums[j] << "," << nums[k] << "]" << endl;
                }
            }
        }
    }
}

int main()
{
    int size;
    // cout << "\nEnter the size of the array: ";
    // cin >> size;

    int *array = new int[size];

    cout << "\nEnter the values of the array: ";
    for (int i = 0; i < size; i++)
        cin >> array[i];

    findTriplets(array, size);

    delete[] array;

    return 0;
}