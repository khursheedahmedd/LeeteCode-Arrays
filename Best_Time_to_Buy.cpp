#include <iostream>
using namespace std;

int bestTimeToBuy(int arr[], int size)
{

    int profit = 0;
    int maxProfit = 0

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            profit = arr[j] - arr[i];
            if (profit > maxProfit)
            {
                maxProfit = profit;
            }
        }
    }

    return maxProfit;
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

    cout << "\nThe Best time to buy stock is: " << bestTimeToBuy(arr, size);

    return 0;
}
