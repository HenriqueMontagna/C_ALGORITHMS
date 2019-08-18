#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int num, x, y, ver = 0, vezes, raiz;
	scanf("%d", &vezes);
	for(y = 0; y < vezes;y++){
		scanf("%d", &num);
		if(num == 0 || num == 1){
			printf("Not Prime\n");
		}
		else{
			ver = 1;
			raiz = sqrt(num);
			for (x = 2; x <= raiz; x++){
				if (num % x == 0){
					ver = 0;
					break;
				}
			}
			if (ver == 1){
				printf("Prime\n");
			}
			else{
				printf("Not Prime\n");
			}
		}
	}
	return 0;
}
