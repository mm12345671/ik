#include<stdio.h>

void map(int (*f)(int), int x[], size_t n) {

   for (int i = 0; i < n; i++)
  {
       x[i] = f(x[i]);
       printf("\t%d",x[i]);
  }
}
int f(int x) {

   return 3 * x + 1;

}

int main() {

   int list[] = {1, 2, 3, 4, 5};

   map(f, list, 5);
  for (int i = 0; i < 5; i++)
  {
      
       printf("\t%d",list[i]);
        printf("\t%d",list[i]);
  }
}