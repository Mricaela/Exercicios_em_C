#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	char V;
	
	printf("por favor, digite uma letra:");
	scanf(" %c", &V);
	
	if (V == 'A' || V == 'a' || V == 'E' || V == 'e' || V == 'I' || V == 'i' || V == 'O' || V == 'o' || V == 'U' || V == 'u'){
		printf(" isso e uma vogal.");
	} else {
		printf("isso e uma consoante.");
	}
	
	return 0;
}
