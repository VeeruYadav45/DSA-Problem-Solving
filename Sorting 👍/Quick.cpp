#include <iostream>
using namespace std;

int partition(int arr[], int s, int e){

    int pivot = arr[s]; // ? aur jaruri nhi hai ki pivot ko hum 1at element hi le isko hum last element bhi le sekte hai ,(aur yeha per hamne pivot element ko as a 1st element liya hai )


    int count = 0; // todo=> iske through hi hum dekhenge ki kitne element pivot se chote hai.

    for (int i = s+1; i <= e; i++)
    {
        if(arr[i] <= pivot){
            count++;
        }
    }
     

     int pivotIndex = s + count; //* baiscally yeha per pivot element ka right index find kiya hai 

     swap(arr[pivotIndex],arr[s]); // ! aur pta hai jaab hum pivot ki right position mill jayegi to hum usko pivot wale element se swap kar denge jisese wo apne right place per chala jayega
     
     // ? Pta hai hum yeha left half aur right half ko solve kr rehe hai shirf ek hi baar larenge baaki to recursion kar lega

     int i = s,j = e;

     while (i< pivotIndex && j> pivotIndex){
     {
        while (arr[i] <= pivot)
        {
           i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

         if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++], arr[j--]);
         }
        
     }
}
     return pivotIndex;
}
void quickSort(int arr[],int s,int e){

    if(s>=e) return;

    //! Partitioning karenge aab :-

    int p = partition( arr, s, e);

    quickSort(arr, s, p-1); // ! Basically yeha per left wala part ko sort kr rehe hai 
    quickSort(arr, p+1, e); //todo=> Basically yeha per right wala part ko sort kr 
}
int main() {

    int arr[6] = {3,5,1,8,2,4};
    int n = 6;

    quickSort(arr, 0,n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

  
    return 0;
}