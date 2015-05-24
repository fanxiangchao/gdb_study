/* page 46
swap.c
*/
void swap(int *a,int *b)
{
  int c = *a;
  *a = *b;
  *b = c;
}

