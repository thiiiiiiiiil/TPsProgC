#include <stdio.h>

int main() {
	float sum = 0;
	float valeur;
	int n;
	printf("Entrez un nombre entier : ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%f", &valeur);
		sum += valeur;
	}
	sum = sum / n;
	printf("La moyenne de 1 à %d est : %.2f\n", n, sum);
	return 0;
}