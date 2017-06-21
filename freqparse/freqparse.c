#include <stdio.h>
int main() {
  // initialize variables;
  int count = 0;
  int all = 0;
  int integer = 0;
  int lc = 0;

  char c;

  while ((c = getchar()) != EOF) {
    // process one character
    if (c >= '0'&& c <='9') {
      ++integer;
    }else if(c >= 'a'&& c <='z'){
      ++lc;
    }else{
      ++all;
    }
    ++count;
  }

  // Output results here
   printf("number: %f", integer);
   printf("Lower Case: %f", lc);
   printf("all: %f", all);
   printf("number %f ", (float)(integer/count * 100));
   printf("Lower Case %f ", (float)(lc/count * 100));

  return 0;
}
