#include <stdio.h>
#include <stdio.h>
#include <math.h>

int main()
{
 
 int a;
  printf("Vichislenie proizvolnogo chisla iz ryada Fibonnachi\n\n");
  printf("Vvedite nomer chisla v ryade ");
  scanf_s("%i", &a);
  
  int pred = 1;
  int cur = 0;
  for (int i = 0; i < a; i++)
  {
   int temp = cur;
   cur += pred;
   pred = temp;
  }
  printf("Vashe chislo ravnyaetsa %i\n", cur);
  return 0;
}