#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{

    int start = 0;

    int end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

//* Aur pta hai hamesa yaad rakhe ki kaise bhi question ho reverse kerne ke liye 1st approach yehi hona chaiye ki wo question odd length ka hai ya evene length ka

int main()
{

    int arr[6] = {1, 2, 3, 4, 5, 6};

    int arr2[3] = {3, 2, 1};

    reverse(arr, 6);
    reverse(arr2, 3);

    printArray(arr, 6);
    printArray(arr2, 3);
    return 0;
}

// Swap and alternate ..?
// FInd Uniqe Element in array ..?
// intersection of array..?
// Sort 0's and 1's