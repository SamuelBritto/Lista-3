#include <stdio.h>


int main()
{
   char string1[20], string2[20];
 
   printf("Digite a primeira:\n");
   gets(string1);
 
   printf("Digite a segunda:\n");
   gets(string2);
 
   if (comparar_strings(string1, string2) == 0)
      printf("Elas sao iguais\n");
   else
      printf("Elas sao diferentes\n");
 
   return 0;
}
 
int comparar_strings(char string1[], char string2[]){
   int c = 0;
 
   while (string1[c] == string2[c]) {
      if (string1[c] == '\0' || string2[c] == '\0')
         break;
      c++;
   }
   
   if (string1[c] == '\0' && string2[c] == '\0')
      return 0;
   else
      return -1;
}
