#include <stdio.h>
#include <string.h>

int main () {
   const char str1[] = "abacde2fghi3jkl";
   const char str2[] = "4";
   char *ret;

   ret = strpbrk(str1, str2);
   if(ret) {
      printf("First matching character: %c\n", *ret);
   } else {
      printf("Character not found");
   }
   
   return(0);
}
