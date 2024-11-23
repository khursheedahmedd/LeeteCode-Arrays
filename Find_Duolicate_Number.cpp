#include <iostream>

using namespace std;

int findDuplicate(int *nums, int numsSize)
{
    int slow = nums[0];
    int fast = nums[0];

    do
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    slow = nums[0];
    while (slow != fast)
    {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
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

    cout << "\nThe duplicated number is: " << findDuplicate(array, size) << endl;

    delete[] array;

    return 0;
}