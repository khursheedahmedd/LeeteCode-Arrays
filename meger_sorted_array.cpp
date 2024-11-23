#include <iostream>

using namespace std;

void merge(int *nums1, int m, int *nums2, int n)
{
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0)
    {
        if (nums1[i] > nums2[j])
        {
            nums1[k--] = nums1[i--];
        }
        else
        {
            nums1[k--] = nums2[j--];
        }
    }

    // while (j >= 0)
    // {
    //     nums1[k--] = nums2[j--];
    // }
}

int main()
{
    int size1, size2;
    cout << "\nEnter the size of the array1: ";
    cin >> size1;
    cout << "\nEntre the size of the array2: ";
    cin >> size2;

    int *array1 = new int[size1];
    int *array2 = new int[size2];

    cout << "\nEnter the values of the array1: ";
    for (int i = 0; i < size1; i++)
        cin >> array1[i];

    cout << "\nEnter the values of the array2: ";
    for (int i = 0; i < size2; i++)
        cin >> array2[i];

    merge(array1, size1, array2, size2);

    cout << "Merged array: ";
    for (int i = 0; i < size1 + size2; ++i)
    {
        cout << array1[i] << " ";
    }
    cout << "\n";

    return 0;
}
