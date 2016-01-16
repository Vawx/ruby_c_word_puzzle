const char*
RemoveVowels( char* current )
{
  int i, j;
  char* vowels = "aeiouAEIOU";
  for( i = 0; current[ i ] != '\0'; ++i )
  {
    for( j = 0; vowels[ j ] != '\0'; ++j )
    {
      if( current[ i ] == vowels[ j ] )
      {
        current[ i ] = '-';
      }
    }
  }
  return current;
}
