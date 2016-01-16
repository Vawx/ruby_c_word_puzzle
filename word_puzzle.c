#include <stdio.h>
#include <string.h>

const char*
RemoveVowels( char* current, char* result )
{
  int i, j;
  char* vowels = "aeiouAEIOU";
  result = current;
  for( i = 0; current[ i ] != '\0'; ++i )
  {
    for( j = 0; vowels[ j ] != '\0'; ++j )
    {
      result[ i ] = ( current[ i ] == vowels[ j ] ) ? '-' : current[ i ];
    }
  }
  return result;
}
