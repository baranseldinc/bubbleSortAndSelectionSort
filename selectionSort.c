#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int randomNumberGenerator(int a, int b) { 
  if(b <= a) { 
    printf("Ikinci parametre mutlaka ilkinden buyuk olmalidir!\n"); 
    return(0); 
  } else { 
    int randomize = rand(); 
    srand(time(0) * randomize); 
    return rand() % ((b - a) + 1) + a; 
  } 
}
 
int main()
{
   int array[10000], n, c, d, position, swap;
   int numOfComp = 0,numOfSwap = 0;
 
   printf("Enter number of elements\n");
   scanf("%d", &n);
 
   printf("Enter %d integers\n", n);
 
   for ( c = 0 ; c < n ; c++ ){
	array[c] = randomNumberGenerator(0,n+1);
	}
 
   for ( c = 0 ; c < ( n - 1 ) ; c++ )
   {
      position = c;
 
      for ( d = c + 1 ; d < n ; d++ )
      {
          numOfComp++;
         if ( array[position] > array[d] )
            position = d;
      }
      if ( position != c )
      {
           numOfSwap++;
         swap = array[c];
         array[c] = array[position];
         array[position] = swap;
      }
   }
 
   printf("Sorted list in ascending order:\n");
 
   for ( c = 0 ; c < n ; c++ )
      printf("%d\n", array[c]);
      printf("\n\n\n");
      printf("Num Of Comparation: %d\n",numOfComp);
      printf("Num Of Swap: %d\n",numOfSwap);
      system("pause");
   return 0;
}

//Selection Sort
