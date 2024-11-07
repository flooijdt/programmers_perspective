#include <stdio.h>

int main() {
  int var = 200 * 300 * 400 * 500;
  double varl = 200 * 300 * 400 * 500;
  long int varlong = 200 * 300 * 400 * 500;
  unsigned int max = 4294967295;
  unsigned int max2 = 4294967296;
  /* for printf:
    u = int unsigned;
    d = int signed; it is signed by default
    l = long;
    f = float and double.
  */
  printf("sizeof int: %d\n", sizeof(int));
  printf("int unsined: %u\n", var);
  printf("int signed: %d\n", var);
  printf("int unsigned 2^32: %u\n", max2);
  printf("int unsigned (2^32) - 1: %u\n", max);
  printf("int signed 2^32: %d\n", max2);
  printf("int signed (2^32) - 1: %d\n", max);
  return 0;
}
