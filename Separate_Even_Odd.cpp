#include <iostream>

using namespace std;

void separate_even_odd(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {

        if (arr[i] % 2 != 0)
        {
            int temp = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = arr[i + 1];
        }
        else
        {
            i++;
        }
    }
    cout << "\nEven and odd are separated successfully.";
}
int main()
{

    int size;
    cout << "\nEnter the size of the array: ";
    cin >> size;

    int *arr = new int[size];

    cout << "\nEnter the values of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    separate_even_odd(arr, size);

    cout << "\nThe new array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}