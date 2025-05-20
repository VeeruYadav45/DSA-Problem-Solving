#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) // n is passed as a parameter
{
  int i, j, min_idx;

  for (i = 0; i < n - 1; i++) // outer loop
  {
    min_idx = i;                // assume the current index as the minimum
    for (j = i + 1; j < n; j++) // inner loop
    {
      if (arr[j] < arr[min_idx]) // find the smallest element
        min_idx = j;             // update the index of the smallest element
    }
    swap(arr[min_idx], arr[i]); // swap the smallest element with the current element
  }

  cout << "Sorted array: \n";
  for (i = 0; i < n; i++) // print the sorted array
    cout << arr[i] << " ";
  cout << endl;
}

int main()
{
  int arr[] = {64, 25, 12, 22, 11};
  int n = sizeof(arr) / sizeof(arr[0]); // calculate the number of elements
  selectionSort(arr, n);                // call the selection sort function

  return 0;
}
