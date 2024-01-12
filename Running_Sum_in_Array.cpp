#include <iostream>

using namespace std;

int *runningSum(int *nums, int length)
{
    int *result = new int[length];
    int sum = 0;
    for (int i = 0; i < length; ++i)
    {
        sum += nums[i];
        result[i] = sum;
    }
    return result;
}

int main()
{
    int size;
    cout << "\nEnter the size of the array: ";
    cin >> size;

    int *array = new int[size];

    cout << "\nEnter the values if the array: ";
    for (int i = 0; i < size; i++)
        cin >> array[i];

    int *result = runningSum(array, size);

    cout << "Running sum: ";
    for (int i = 0; i < size; ++i)
    {
        cout << result[i] << " ";
    }
    cout << "\n";

    // delete[] array;
    delete[] result;

    return 0;
}
