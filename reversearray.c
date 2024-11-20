#include <stdio.h>

void inplace_swap(int *x, int *y) {
  *y = *x ^ *y; // step 1
  *x = *x ^ *y; // step 2
  *y = *x ^ *y; // step 3
}

void reverse_array(int a[], int cnt) {
  int first, last;
  for (first = 0, last = cnt - 1; first <= last; first++, last--)
    inplace_swap(&a[first], &a[last]);
}

int main() {
  int a[5] = {1, 2, 3, 4, 5};
  reverse_array(a, 5);
  int i = 0;
  for (i = 0; i <= 5; i++) {
    printf("%d", a[i]);
  }
  return 0;
}
