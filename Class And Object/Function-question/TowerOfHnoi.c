#include<stdio.h>
void towers( int num, char S, char A, char D)
{
 if (num == 0)
 return;
 towers (num - 1, S,D , A);
 printf ("\n Move disk %d from peg %c to peg %c", num, S, D);
 towers (num - 1, A, S, D);
}
int main()
{
 int num;
 printf ("Enter the number of disks : ");
 scanf ("%d", &num);
 printf ("The sequence of moves :\n");
 towers (num, 'A', 'B', 'C');
 return 0;
}