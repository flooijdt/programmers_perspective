#include <stdio.h>

int main() {
  int var = 200 * 300 * 400 * 500;
  double varl = 200 * 300 * 400 * 500;
  long int varlong = 200 * 300 * 400 * 500;
  // for printf:
  //   u = int unsigned;
  //   d = int signed; it is signed by default
  //   l = long;
  //   f = float and double.
  printf("%u\n", var);
  return 0;
}
