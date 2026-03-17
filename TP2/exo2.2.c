#include <stdio.h>
int main(){

	char t;
	int l=0;
	int v=0;
	printf("Ecris un texte \n");
	scanf("%c", &t);
	while (t != '#'){
        if ((t >= 'a' && t <= 'z') || t == ' '){
		    if( t>='a' && t<='z'){
			    l++;
                if (t=='i' || t=='a' || t=='e' || t=='o'  || t=='u'  || t=='y'){
			    v++;
		        }
            }
        }
		
        else { 
            printf("Erreur : le caractere '%c' a le code %d\n", t, t);
            break; // Негайно перериваємо цикл! 
        }
		scanf("%c", &t);
	}
	printf("Nombre de minuscule= %d; Nombres de minuscule voyelles=%d;",l,v);
	return 0;
}
