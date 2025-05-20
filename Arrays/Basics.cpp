#include <iostream>
using namespace std;

void priintArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   {
      cout << "The value of i is " << arr[i] << endl;
   }
   cout << "Print ho gya bhaiya aab" << endl;
}

int main()
{
   int beta[5]; // Isko bolte declare krna thik ha

   cout << "The Value of beta at 5 is " << beta[4] << endl;

   cout << "Tha value of 2 is " << beta[2] << endl;

   int awash[4] = {1, 2, 3, 4}; // Aur isko bolte hai arrays ko initialise krna

   cout << "The value of awash at index of 4 is :- " << awash[4] << endl;

   int abhishek[20] = {12, 14};

   priintArray(abhishek, 20);

   int battery[20] = {15, 29};

   priintArray(battery, 20);

   int battery2[25] = {2, 4, 5, 6, 7};

   for (int i = 0; i < 20; i++)
   {
      int ashutosh = battery2[i] = 1;
      cout << "The value of i is in Case of Battery 😀 " << ashutosh << endl;
   }

   int sizeofBattery2 = sizeof(battery2)/sizeof(int); // ! iska hi use karke hum kisi bhi arrya ka size bahut easly find kaar sekte hai ,lekin pta hai isme ek error hai aur wo ye erroe hai ki hamne to battery2 ke andar 3 hi element ko initialise kiya hai n .........?🤔

   cout << "The Size of battery2 is :- " << sizeofBattery2 <<endl;

   // Character Arrays :-👉

   char ashu[12] = {'a','b'};

   cout << ashu[12] << endl;

   return 0;
}