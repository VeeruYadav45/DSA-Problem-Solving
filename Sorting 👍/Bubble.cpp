#include <iostream>
using namespace std;
int bubbleSort(int arr[], int n)
{
  int i, j;
  for (i = 0; i < n - 1; i++)  // For Round 1 to n-1
  {
    for (j = 0; j < n; j++) // Aur pta hai humne ye loop shirf element ko process krne ke liye chalya hai i^th index taak 
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}
int main()
{
  int arr[] = {64, 34, 25, 12, 22, 11, 90};
  int n = sizeof(arr) / sizeof(arr[0]);
  bubbleSort(arr, n);

  return 0;
}