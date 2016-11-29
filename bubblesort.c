#include <stdio.h>
 
void bubble_sort(int [], int);
 
int main()
{
  int array[100], l, i;
 
  printf("Enter number of elements\n");
  scanf("%d", &l);
 
  printf("Enter %d integers\n", l);
 
  for (i = 0; i < l; i++)
    scanf("%d", &array[i]);
 
  bubble_sort(array, l);
 
  printf("Sorted list in ascending order:\n");
 
  for ( i = 0 ; i < l ; i++ )
     printf("%d\n", array[i]);
 
  return 0;
}
 
void bubble_sort(int list[], int n)
{
  int c, d, t;
 
  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (list[d] > list[d+1])
      {
        /* Swapping */
 
        t         = list[d];
        list[d]   = list[d+1];
        list[d+1] = t;
      }
    }
  }
}
