#include <stdio.h>
void swap(int *x,int *y) {
  int tmp;
  tmp = *x;
  *x = *y;
  *y = tmp;
}
int main(void) {
  int a,b;
  printf("Enter first number  : ");
  scanf("%d",&a);
  printf("Enter second number : ");
  scanf("%d",&b);
  swap(&a,&b);
  printf("first = %d\nsecond = %d\n",a,b);
  return 0;
}