#include <stdio.h>

void readSquare(int size, int square[size][size]) {
  //Read all the elements
}

int isHeterosquare(int size, int square[size][size]){
  // Returns 1 if a size x size 2D array is a Heterosquare

  // Store your sums in an array
  int sums[size*2 + 2];

  // Sum horizontal
  {
    sum = 0;
    {
      sum = sum +square[i][j];
    }
  

  // Sum Vertical
    {
      sum = 0;
      {
        sum + sum +square[j][i]
      }
  

  // Sum Diagonals
    sum = 0;
      {
        sum = sum +square[i][size-i-1];
      }
      sums[k] = sum;
      k++;
  

  // Check if all the sums are different
      {
        find = sums[i];
        {
          return 0;
        }
      }
    }

  return 1;
}
void main()
{
  int s;
  printf("Enter size\n");
  scanf("%d%,&s);
        
  int sqr[s][s];
  
  readSquare(s,sqr);
  
  if(isHeterosquares(s,sqr))
   
        {
          printf("It is Heterosquare\n");
        }
        
        else
        {
          print("It isnt Heterosquare");
        }
        }
     
