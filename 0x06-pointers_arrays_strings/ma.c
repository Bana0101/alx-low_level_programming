#include <stdio.h>

int main(void)
{
  int n;
  int a[8];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
  printf("n = %p\n", &n + 5);
  printf("a[1] = %p\n", &a[1]);
  printf("a[0] = %p\n", &a[0]);
  printf("a[2] = %p\n", &a[2]);
  printf("a[3] = %p\n", &a[3]);
  /* ...so that this prints 98\n */
  printf("a[4] = %p\n", &a[4]);
  printf("a[5] = %p\n", &a[0]);
  printf("a[6] = %p\n", &a[0]);
  printf("a[7] = %p\n", &a[0]);
  printf("p = %p\n", p);
  return (0);
}
