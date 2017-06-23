#include <stdio.h>

// printArray goes here
void printArray(int a[], int size){
  int i;
  int* curloc = a;

  for (i = 0; i < size; i++) {
    /* code */
    printf("%d\n", *curloc);
    curloc++; // increment current location after print step
  }
}

int main() {
  int arraySize = 14;
  int myArray[arraySize];
  int i;
  myArray[0] = 0;
  myArray[1] = 1;
  for (i = 2; i < arraySize; i++) {
  	myArray[i] = myArray[i-2] + myArray[i-1];
  }
  printArray(myArray, arraySize);
  return 0;
}
