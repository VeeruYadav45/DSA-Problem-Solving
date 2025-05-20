#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
  int start = 0;
  int end = size - 1;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (arr[mid] == key)
    {
      return mid;
    }
    else if (arr[mid] > key)
    {
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
  }
  return -1;
}
int main()
{
  int even[7] = {0, 1, 5, 3, 4, 8, 6};
  int odd[8] = {0, 1, 2, 3, 4, 5, 6, 11};

  int evenIndex = binarySearch(even, 7, 5);
  int oddIndex = binarySearch(odd, 8, 11);
  cout << "The EvenIndex of 5 is : " << evenIndex << endl;
  cout << "The OddIndex of 11 is : " << oddIndex << endl;

  return 0;
}