#include <iostream>
#include <climits>

using namespace std;

int getMax(int num[], int n)
{
    int max = INT_MIN; // ye minimum number ko store krta hai

    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            int max = num[i];
        }
    }

    return max;
}

int getMin(int num[], int n)
{
    int min = INT_MAX; // Ye maximu number ko store krta hai

    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            int min = num[i];
        }
    }

    return min;
}

int main()
{
    int size;

    cin >> size;

    // int num[size] ; // yaad rahe kabhi ye practise nhi karna chaiye kyuki ye sabse bad practise hota hai

    int num[100]; // aise le sekte hai ye phir bhi thik hai but upper wala nhi le sekte hai

    for (int i = 0; i < size; i++)
    {

        // Aur array ke case mein hum aise input lete ha

        cin >> num[i];
    }

    cout << "Maximum Value is :- " << getMax(num, size) << endl;
    cout << "Minimum Value is :- " << getMin(num, size) << endl;

    return 0;
}