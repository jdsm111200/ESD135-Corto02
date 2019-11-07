#include <stdio.h>

void intercambiar(int *,int *);
/**
 * metodo main
 * @return
 */
int main(){
    int a;
    int b;
    printf("Ingresar el numero 'a':");
    scanf("%d",&a);
    printf("Ingresar el numero 'b':");
    scanf("%d",&b);
    intercambiar(&a,&b);

    printf("El número de a es %d\n", a);
    printf("El número de b es %d\n", b);


    return 0;
}
/**
 * Metodo para intercambiar los numeros ingresados
 * @param p_a espacio en memoria del numero a
 * @param p_b espacio de memoria en el numero b
 */
void intercambiar(int *ptra, int *ptrb){
    *ptra=*ptra+*ptrb;
    *ptrb=*ptra-*ptrb;
    *ptra=*ptra-*ptrb;
}