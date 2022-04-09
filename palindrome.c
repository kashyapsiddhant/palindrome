#include <stdio.h>
int main(){
   int num, temp, rem, rev = 0;
   printf("enter a number:\n");
   scanf("%d", &num);
   temp = num;
   while ( temp > 0){
      rem = temp %10;
      rev = rev *10+ rem;
      temp = temp /10;
   }
   printf("reversed number is = %d\n", rev);
   if ( num == rev )
      printf("\n%d is Palindrome Number.\n", num);
   else
      printf("%d is not the Palindrome Number.\n", num);
   return 0;
