#include <stdio.h>

void swap(int *aPtr, int *bPtr) {
	//STATEMENTS HERE
  int temp;
  temp = *bPtr;
  *bPtr = *aPtr;
  *aPtr = temp;

}

int main() {
	int a = 5;
	int b = 10;

	printf("a=%d, b=%d\n", a, b);

	swap(&a, &b);

	printf("a=%d, b=%d\n", a, b);

	return 0;
}
