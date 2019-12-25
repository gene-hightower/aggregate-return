#include "ptrret.h"

void make_foo(Foo *ret, long a)
{
  ret->x = a;
  ret->y = a;
  ret->z = a;
}
