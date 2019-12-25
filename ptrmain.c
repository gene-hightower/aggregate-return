#include "ptrret.h"

#include <stdio.h>

int main()
{
  Foo foo;
  make_foo(&foo, 1L);

  printf("{%ld, %ld, %ld}\n", foo.x, foo.y, foo.z);
}
