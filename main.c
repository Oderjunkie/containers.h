#include <stdio.h>
#include "option.h"

int main(void) {
  Option(int) oi = Some(69);
  printf("%d\n", unwrap(oi));
  oi = None(int);
  printf("%d\n", unwrap(oi));
}

