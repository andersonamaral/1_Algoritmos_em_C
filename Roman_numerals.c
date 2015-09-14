/*  **************************************************************************  */
/*  anderson.amaral@usp.br        */
/*  **************************************************************************  */

#include <stdio.h>
int main() {
    int n, /* Given number */
        aux, /* Auxiliar Variable */
        m = 1000; /* Variable designating the decimal to be calculated */

    printf("Type an integer from 1 to 3999.\n");
    scanf("%d", &n);
    printf(" The number  %d typed in romans is: ", n);

    while(n > 0) {
        
        
        aux = (n/m);
        
        if (aux == 9) {
            if (m == 100) printf("CM");
            if (m == 10) printf("XC");
            if (m == 1) printf("IX");
            n = n - 9*m;
            aux = (n/m)*10; 
        }   
        if (aux >= 5) {
            if (m == 100) printf("D");
            if (m == 10) printf("L");
            if (m == 1) printf("V");
            n = n - 5*m;
            aux = (n/m)*10; 
        }
        if (aux == 4) {
            if (m == 100) printf("CD");
            if (m == 10) printf("XL");
            if (m == 1) printf("IV");
            n = n - 4*m;
            aux = (n/m)*10; 
        }
        if (aux > 0) {
            if (m == 1000) printf("M");
            if (m == 100) printf("C");
            if (m == 10) printf("X");
            if (m == 1) printf("I");
            n = n - 1*m;
            aux = (n/m)*10; 
        }

        /* It means the decimal was entirely filled up */
        if (aux == 0) {
            m = m/10;
        }
    }

    printf("\n");
    return 0;
}


