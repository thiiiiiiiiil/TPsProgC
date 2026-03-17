#include <stdio.h>

int main() {
	float sum = 0;
	float valeur;
	int n;

	printf("Entrez le nombre de notes : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("Saisissez la note : ");
        scanf("%f", &valeur);
	    while(valeur>20 || valeur<0) {
		    printf("Erreur, la note doit etre entre 0 et 20. Reessayez : ");
            scanf("%f", &valeur);
        }
		sum+=valeur;
	}
	sum = sum / n;
	printf("La moyenne note est : %.2f\n", sum);
	return 0;
}