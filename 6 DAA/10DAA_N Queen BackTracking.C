/* N- Queens Problem by Back-Tracking Method */

#include<stdio.h>
#include<math.h>

char a[10][10];
int n;

void printmatrix()
{
   int i, j;
   printf("\n");

   for (i = 0; i < n; i++)
   {
      for (j = 0; j < n; j++)
	 printf("%c\t", a[i][j]);
      printf("\n\n");
   }
}

int getmarkedcol(int row)
{
   int i;
   for (i = 0; i < n; i++)
      if (a[row][i] == 'Q')
      {
	 return (i);
	 break;
      }
}

int feasible(int row, int col)
{
   int i, tcol;
   for (i = 0; i < n; i++)
   {
      tcol = getmarkedcol(i);
      if (col == tcol || abs(row - i) == abs(col - tcol))
	 return 0;
   }
   return 1;
}

void nqueen(int row)
{
   int i, j;
   if (row < n)
   {
      for (i = 0; i < n; i++)
      {
	 if (feasible(row, i))
	 {
	    a[row][i] = 'Q';
	    nqueen(row + 1);
	    a[row][i] = '.';
	 }
      }
   }
   else
   {
      printf("\nThe solution is:- ");
      printmatrix();
   }
}

void main()
{
   int i, j;
   clrscr();
   printf("\nEnter the no. of queens:- ");
   scanf("%d", &n);

   for (i = 0; i < n; i++)
      for (j = 0; j < n; j++)
	 a[i][j] = '.';

   nqueen(0);
   getch();
}

/*Output

Enter the no. of queens:- 4

The solution is:-
.       Q       .       .
 
.       .       .       Q
 
Q       .       .       .
 
.       .       Q       .
 
 
The solution is:-
.       .       Q       .
 
Q       .       .       .
 
.       .       .       Q
 
.       Q       .       .
*/
