// Using 1st Approach :-

#include <iostream>
using namespace std;

void merge(int *ashu,int s,int e){
  int mid = (s+e)/2;
  int leng1 = mid-s+1;
  int leng2 = e-mid;


  // Creating temp arrays to hold the elements of ashu[] array

int *firstArray = new int[leng1];
int *secondArray = new int[leng2];

  // Copy data to temp arrays firstArray[] and secondArray[]
  int k = s;
  for(int i = 0; i<leng1; i++){
    firstArray[i] = ashu[k];
    k++;
  }

int k = mid+1;
  for(int i = 0; i<leng2; i++){
    secondArray[i] = ashu[k];
    k++;
  }

  // Now we will merge the two arrays (merge 2 sorted array)
  int i = 0, j = 0, k = s;
  while(i<leng1 && j<leng2){
    if(firstArray[i]<=secondArray[j]){
      ashu[k] = firstArray[i];
      i++;
    }
    else{
      ashu[k] = secondArray[j];
      j++;
    }
    k++;
  
}

void mergeSort(int *ashu,int s,int e){

  if(s>=e){
    return;
  }

  int mid = (s+e)/2;

  // pehle hum left wala part ko solve kerenge
  mergeSort(ashu,s,mid);

  // right wala part ko solve kerenge
  mergeSort(ashu,mid+1,e);

  // ab dono ko merge karenge
  merge(ashu,s,e);

}
int main() {
  int ashu[5] = {2,5,1,6,9};
  int n = 5;

  mergeSort(ashu,0,n-1); // ! 0 = Starting index, n-1 = Ending index

  for(int i = 0; i<n; i++){
    cout<<ashu[i]<<" ";
  }
    return 0;
}