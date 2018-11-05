/*
 * main.c
 *
 *  Created on: 5 Kas 2018
 *      Author: TUÐÇE
 */

#include <stdio.h>

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int i;


	printf("sayi gir:");
	scanf("%d",&i);
	printf("\n%d'e bastiniz...",i);
	scanf("%d",&i);
}
