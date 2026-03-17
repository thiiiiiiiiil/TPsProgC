#include <stdio.h>
int main(){
	int cn; int min; int max;
	printf("Saisissez 10 nombres: ");
	scanf("%d",&cn);
    min=cn;
    max=cn;
        for(int i =0; i<9; i++){
            scanf("%d",&cn);
            if (cn>=max) max=cn;
            if (cn<min) min=cn;
                }
	printf("Min= %d, Max= %d", min,max);
	return 0;
}