#include <iostream>

using namespace std;

int maxProfit(int *prices, int pricesSize)
{
    if (pricesSize <= 1)
        return 0;

    int maxProfit = 0;
    for (int i = 1; i < pricesSize; ++i)
    {
        if (prices[i] > prices[i - 1])
        {
            maxProfit += prices[i] - prices[i - 1];
        }
    }
    return maxProfit;
}

int main()
{
    int size;
    cout << "\nEnetr the size of the array: ";
    cin >> size;

    int *array = new int[size];

    cout << "\nEnter the values of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout << "\nThe max profit is: " << maxProfit(array, size);

    delete[] array;

    // return 0;
}