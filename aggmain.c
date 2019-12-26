#include "aggret.h"

#include <stdio.h>
#include <stdlib.h>

int main()
{
  Foo* foo = (Foo*) malloc(sizeof(*foo));
  *foo = make_foo(1L);

  printf("{%ld, %ld, %ld}\n", foo->x, foo->y, foo->z);

  free(foo);
}
