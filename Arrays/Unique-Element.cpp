
// Find Uniqe Element in Array :-

#include <iostream>

using namespace std;

int uniqueElement(int arr[], int size)
{

    int unique = 0;

    for (int i = 0; i < size; i++)
    {
        unique = unique ^ arr[i]; // Jaab bhi hum XOR operator use krte hai to Same Value ko 0 kaar deta hai ,kyuki XOR operator ki property yehi hoti haiw
    }
    return unique;
}

int main()
{
    int arr[] = {4, 6, 6, 7, 4};
    int size = 5;

    int result = uniqueElement(arr, size);
    cout << "The uniqe Element is : " << result << endl;

    return 0;
}