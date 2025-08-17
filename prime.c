
#include <stdio.h>
int main() {

  int n, i,j = 0;
  scanf("%d", &n) ;
  if (n == 0 || n == 1)
    j= 1;
  for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      j= 1;
      break;
    }
  }
  if (j == 0)
    printf("%d is a prime number.", n);
  else
    printf("%d is not a prime number.", n);

  return 0;
}
