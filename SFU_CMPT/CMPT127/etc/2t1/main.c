#include <stdio.h>

int max( int x, int y);
int min( int x, int y);
 
int main( void )
{
  int a = 11;
  int b = 12;
  printf( "The max of our numbers is %d\n", max( a, b ));
  printf( "The min of our numbers is %d\n", min( a, b ));
  return 0;
}