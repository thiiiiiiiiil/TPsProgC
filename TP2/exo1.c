#include <stdio.h>
int main(){
	int bissextile;
	printf("Ecris une année:\n");
	scanf("%d",&bissextile);
	if ( (bissextile % 4== 0 && bissextile % 100 !=0) || (bissextile % 400 == 0 ))
		 printf("%d est bissextile\n", bissextile);
	else printf("%d  n'est pas  bissextile\n", bissextile);
	return 0;
}
