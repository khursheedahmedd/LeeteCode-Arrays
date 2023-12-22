#include <iostream>

using namespace std;

void twoSum(int arr[], int size, int num)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = 1 + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == num)
            {
                cout << arr[i] << " " << arr[j];
                return;
            }
        }
    }
}

int main()
{

    int size;

    cout << "\nEnter the size of the array: ";
    cin >> size;

    int *array = new int[size];

    cout << "\nEnter the value of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    int num;
    cout << "\nEnter the number to find: ";
    cin >> num;

    twoSum(array, size, num);

    return 0;
}