#include<stdio.h>

int main()
{
  int a, b, c;

  printf("a?\n");
  scanf("%d", &a);

  printf("b?\n");
  scanf("%d", &b);
    
  c = a % b;
  while (c!=0){
  a = b;
  b = c;
  c = a % b;
  }

  printf("%d\n", b);

  return 0;
}
