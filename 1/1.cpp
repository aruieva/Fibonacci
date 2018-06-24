#include <stdio.h>
#include <stdio.h>
#include <math.h>

int main()
{
 
 int a;
  printf("Vichislenie proizvolnogo chisla iz ryada Fibonnachi\n\n");
  L1:
  printf("Vvedite nomer chisla v ryade ");
  scanf_s("%i", &a);
  if (a < 0)
  {
	  printf("Oshibka!\n");
	  goto L1;
  }
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