#include "foo.h"
#include <cassert>

int main()
{
  Foo foo = Foo(3, 4);

  assert(foo.sum() == 7);
}
