#define N 6
#include "sorting.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int Isprime();

int main(int argc, char *argv[]) {
  int i, j = 0, n, *a, *prime;
  n = argc - 1;
  a = (int *)malloc(sizeof(int) * n);
  prime = (int *)malloc(sizeof(int) * n);
  for (i = 0; i < n; i++) {
    a[i] = atoi(argv[i + 1]);
    if (Isprime(a[i])) {
      prime[j] = a[i];
      j++;
    }
  }
  n = j;
  if (n == 0)
    printf("No prime\n");
  else {
    display(prime, n);
    bubbleSort(prime, n);
    display(prime, n);
  }
  return 0;
}

int Isprime(int num) {
  if (num == 1)
    return 0;
  for (int i = 2; i < num; i++) {
    if (num % i == 0)
      return 0;
  }
  return 1;
}