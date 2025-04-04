
//Write a program to generate the Fibonacci sequence up to 100.

#include <stdio.h>
int main() {

  int F1 = 0, F2 = 1;

  printf("Fibonacci Sequence %d, %d, ", F1, F2);

  while (1) {
        int NextFibonacci = F1 + F2;

        if (NextFibonacci > 100) {
            break; }

    printf(", %d", NextFibonacci);

    F1 = F2;
    F2 = NextFibonacci;


  }
  printf("\n");
  return 0;
}



