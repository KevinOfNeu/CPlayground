#include <stdio.h>
#include "lib.c"

int main(int argc, char const *argv[])
{
  printf("%s\n", "Hello C");
  printf("%d\n", add(1, 2));
  return 0;
}
