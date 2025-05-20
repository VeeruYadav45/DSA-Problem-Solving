#include <iostream>
using namespace std;

void update(int arr[], int n)
{
    cout << "Inside The Funtion" << endl;

    arr[2] = 13; //* Lekin yaar ye nhi samajh mein aa raha hai ki maine to maine function mein change kiya hai n ,lekin dono places per kaise changes ho rehe hai 👉,lekin apko bta ye ek sabse bad practise hoti hai kyuki array ke case mein jaab hum function ke andar koi bhi vaue ko update krte hai to ye dono place per update ho jata hai ,aur ye aisa isiliye hota hai ki jaab hum main function mein se kisi dusre function mein arrays ko pass krte hai to uskak base address pass hota hai naaki poora address mtlb uska copy

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Going back To The main Function ";
}

int main()
{

    int arr[3] = {1, 2, 3};

    update(arr, 3);

    for (int i = 0; i < 3; i++)
    {

        cout << arr[i] << ' ';
    }

    return 0;
}

// ! Wap to Print Sum of All array by the helping of an array...?
// * Aur ek question ke power of 2 find karna hai jaise ki koi number diya hua hai humko usko compare karana hai ki wo power of 2 ho sakta hai ya nhi .......?