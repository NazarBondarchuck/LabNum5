#include <stdio.h>
#include <stdlib.h>

void fill_A_array( unsigned int * A, unsigned int N, unsigned int * output );

int main()
{
 FILE * fp, * output;
 unsigned int N;
 unsigned int * A;
 fp = fopen( "5labum.txt", "r" );
 fscanf( fp, "%u", &N );
 A = ( unsigned int * ) malloc( N * sizeof( unsigned int ) );
 fill_A_array( A, N, output );
  return 0;
}
//=====================================================================================================================
void fill_A_array( unsigned int * A, unsigned int N, unsigned int * output )
{
 unsigned int j, temp;
 output = fopen( "C:\\Users\\Nazar\\Desktop\\5lab\\5lab.txt", "w" );
 printf( "Enter values of array A:\n" );
 for( j = 0; j <= N-1; j++ )
 {
  printf( "A[%u]= ", j );
  scanf( "%u", &temp );
  A[j] = temp;
  fprintf( output, "%u\n", A[j] );
 }
 fclose( output );
}
