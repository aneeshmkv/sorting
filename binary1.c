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
int array1[100];
 for ( i = 0 ; i < l ; i++ )
  array1[i]=array[i];

 int c, first, last, middle, search;

   printf("Enter value to find\n");
   scanf("%d", &search);
 
first = 0;
   last = l - 1;
   middle = (first+last)/2;
 
   while (first <= last) {
      if (array1[middle] < search)
         first = middle + 1;    
      else if (array1[middle] == search) {
         printf("%d found at location %d.\n", search, middle+1);
         break;
      }
      else
         last = middle - 1;
 
      middle = (first + last)/2;
   }
   if (first > last)
      printf("Not found! %d is not present in the list.\n", search);
 
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
