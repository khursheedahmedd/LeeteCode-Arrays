#include <iostream>

using namespace std;

int *productExceptSelf(int *nums, int numsSize)
{
    int *result = new int[numsSize];

    result[0] = 1;
    for (int i = 1; i < numsSize; ++i)
    {
        result[i] = result[i - 1] * nums[i - 1];
    }

    int rightProduct = 1;

    for (int i = numsSize - 1; i >= 0; --i)
    {
        result[i] *= rightProduct;
        rightProduct *= nums[i];
    }

    return result;
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

    int *newArray = productExceptSelf(array, size);

    cout << "\nThe new array is: ";
    for (int i = 0; i < size; i++)
        cout << newArray[i] << " ";

    delete[] array;

    return 0;
}