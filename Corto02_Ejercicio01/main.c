#include <stdio.h>
#include <math.h>

int binToDec(int, int);
int potencia(int, int);
/**
 *
 * @return
 */
int main()
{
    int decimal;
    printf("Ingrese el numero en forma Binaria que desea convertir :\n");
    scanf("%d",&decimal);
    printf("Numero a decimal: %d", binToDec(decimal, 0));
    return 0;
}
/**
 * Funcion recursiva para elevar un numero a una potencia
 * @param base numero a elevar
 * @param exponente potencia a la cual se quiere elevar
 * @return numero elevado a la potencia
 */
int potencia(int base, int exponente){
    if (exponente  == 0) return 1;

    else{
        return base * potencia(base, exponente -1);
    }
}
/**
 * Funcion recursiva para convertir un numero binario a decimal
 * @param decimal numero en binario a convertir
 * @param n numero inicial de la potencia que es 0
 * @return numero en formato decimal
 */
int binToDec(int decimal, int n){
    int y = n;
    if(decimal==0){
        return 0;
    } else {
        return (((decimal%10) * potencia(2, y)) + binToDec((decimal/10), ++y));
    }
}


