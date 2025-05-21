
// ! Alternate and Swap Question :-

#include <iostream>

using namespace std;

void swapAlternate(int arr[], int size)
{
    // for (int i = 0; i < size - 1; i+=2) //! Simply Swap and Alternate
    for (int i = 0; i < size - 1; i += 3) // todo Wap for Swapping the every 3rd element
    {

        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {

        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;

    cout << "Printing the Arrya Before Swap and alternate ";

    printArray(arr, size);

    swapAlternate(arr, size);

    cout << "Printing The Array After Swap and Alternate ";
    printArray(arr, size);

    swapAlternate(arr, size);

    return 0;
}