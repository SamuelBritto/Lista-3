#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char text2[100];
	printf("Digite um texto ate 100 caracteres: ");
	gets(text2);
	int vogais = 0, i = 0;
	for(i= 0;<sizeof(text2) && text2[i] != '0'; i++){
		if (text2[i] == 'a' || text2[i]== 'e' || text2[i] == 'i' || text2[i]== 'o' || text2[i] == 'u'){
			vogais++;
		}
		if (text2[i] == 'A' || text2[i]== 'E' || text2[i] == 'I' || text2[i]== 'O' || text2[i] == 'U'){
			vogais++;
		}
	}
	printf("\nO total de vogais e de: %d", vogais);
	return 0;
}
