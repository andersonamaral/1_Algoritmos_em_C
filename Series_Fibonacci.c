#include<stdio.h>
 
int main()
{
   int n, first = 0, second = 1, next, c;
 
   printf("Digite o numero de termos\n");
   scanf("%d",&n);
 
   printf("Os primeiros  %d termos dessa serie Fibonacci sao :-\n",n);
 
   for ( c = 0 ; c < n ; c++ )
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      printf("%d\n",next);
   }
 
   return 0;
}
