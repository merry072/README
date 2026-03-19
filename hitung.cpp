#include <stdio.h>
int main (){
    int x,y;
    printf ("Masukkan bilangan x ( bulat positif)= ");
    scanf ("%d", &x);
    printf ("Masukkan bilangan y (bulat)= ");
    scanf("%d", &y);

    printf ("%d ", y);
    for (int i=1; i<=x; i++){
        printf ("%d ", y+x*i);
    }
    return 0;
}