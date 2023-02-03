// selection sort function module in C
#include <stdio.h>

void swap(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void display(int a[], int n) {

  int i;

  for (i = 0; i < n; i++)
    printf("%5d", a[i]);
  printf("\n");
}

void selectionSort(int data[], int length) {
  int i, j, m;
  for (i = 0; i < length - 1; i++) {
    m = i;
    for (j = i + 1; j < length; j++) {
      if (data[j] < data[m])
        m = j;
    }
    if (m != i) {
      swap(&data[i], &data[m]);
      display(data, length);
    }
  }
}

void insertion(int a[], int n) {
  int i, j, m;
  for (i = 0; i < n - 1; i++) {
    if (a[i] > a[i + 1]) {
      swap(&a[i], &a[i + 1]);
      display(a, n);
      for (j = i; a[j - 1] > a[j] && i > 0; j--) {
        swap(&a[j - 1], &a[j]);
        display(a, n);
      }
    }
  }
}

void bubbleSort(int a[], int n) {

  int i, j;
  int sorted;
  // how may pair to compare?
  for (i = 0; i < n - 1; i++) {
    sorted = 0;
    for (j = 0; j < n - i - 1; j++) {
      if (a[j] > a[j + 1]) {
        swap(&a[j], &a[j + 1]);
        sorted = 1;
      }
      display(a, n);
    }
    if (sorted == 0)
      break;
  }
}
