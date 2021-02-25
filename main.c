#include<stdio.h>
#define N 11

void outputArray(int a[], unsigned n)
{
   unsigned i;
   for (i = 0; i < n; i++)
      printf("a[%i] = %i\n", i, a[i]);
}

void minimumSort(int a[], unsigned n)
{
   int startIndexUnsorted, i, indexMinimum, help;
   for (startIndexUnsorted = 0; startIndexUnsorted <= n - 2; startIndexUnsorted++)
   {
      indexMinimum = startIndexUnsorted;
      for (i = startIndexUnsorted + 1; i < n; i++)
         if (a[i] < a[indexMinimum])
            indexMinimum = i;
      help = a[startIndexUnsorted];
      a[startIndexUnsorted] = a[indexMinimum];
      a[indexMinimum] = help;
   }
}

int main(void)
{
   int a[N] = { 22, 77, 34, 3, 69, 24, 18, 98, 41, 64, 55 };
   printf("unsorted array\n");
   outputArray(a, N);
   minimumSort(a, N);
   printf("sorted array\n");
   outputArray(a, N);
   return 0;
}
