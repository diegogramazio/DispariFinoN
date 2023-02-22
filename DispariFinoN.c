#include <stdio.h>

/* Programma che chiede all'utente di inserire un intero positivo da tastiera
 * e stampa tutti gli interi dispari minori o uguali dell'intero letto. */
int main() {
	    int numero;                   // il numero da leggere
		
		/* INPUT */
		printf("Introduci un intero positivo, please.\n");
		scanf("%d", &numero);
		
		/* guarda i primi numero numeri */
		for(int i=1;i<=numero;i++)
			    /* se e' dispari stampalo */
				if(i%2==1)
					    printf("%d ", i);
}
