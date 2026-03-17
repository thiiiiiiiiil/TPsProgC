#include <stdio.h>
int main(){
	unsigned char i; unsigned char cr;
        scanf("%hhu",&i);
        cr=i*i;
        printf("Carré de nombre %hhu est %hhu \n",i,cr);
        return 0; 
}

//unsigned char ([0, 255])
