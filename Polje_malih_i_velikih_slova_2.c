#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

#define MAX 50

int prijepis(char *polje) {

	int i, dulj = 0;
	int brMalih = 0, brVel = 0;
	int k = 0, l = 0;

	char *mala, *velika;

	dulj = strlen(polje);

	for (i = 0; i < dulj; i++) {

		if (*(polje + i) >= 'a' && *(polje + i) <= 'z') brMalih++;

		else if (*(polje + i) >= 'A' && *(polje + i) <= 'Z') brVel++;

	}

	mala = (char *)malloc(brMalih*sizeof(char));
	velika = (char *)malloc(brVel*sizeof(char));

	for (i = 0; i < dulj; i++) {

		if (*(polje + i) >= 'a' && *(polje + i) <= 'z') {

			*(mala + k) = *(polje + i);
			k++;

		}

		else if (*(polje + i) >= 'A' && *(polje + i) <= 'Z') {

			*(velika + l) = *(polje + i);
			l++;
		}
	}

	*(mala + k) = '\0';
	*(velika + l) = '\0';

	puts(mala, stdout);
	printf("\n");

	puts(velika, stdout);
	printf("\n");

	return brMalih + brVel;

}


int main() {

	char polje[MAX + 1];
	int i, brSlova;

	printf("Ucitajte znakovni niz:\n");
	gets(polje);

	brSlova = prijepis(polje);

	printf("Broj slova je %d.\n", brSlova);

	system("pause");

	return 0;


}