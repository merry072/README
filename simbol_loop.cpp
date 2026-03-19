#include <stdio.h>
int main (){
    int n,i,j;
    char c1,c2,c3;
    printf ("Masukkan nilai n (untuk ukuran)= ");
    scanf ("%d", &n);
    printf ("Masukkan nilai c1 = ");
    scanf (" %c", &c1);
    printf ("Masukkan nilai c2 = ");
    scanf (" %c", &c2);
    printf ("Masukkan nilai c3 = ");
    scanf (" %c", &c3);

     for (i=1; i<=n; i++){
        for (j=1; j<=n; j++) {
            if (i==1 || i==n){
                printf ("%c", c1);
            } else if (j==1 || j==n){
                printf ("%c", c2);
            }
            else {
                printf ("%c", c3);
            }
        }  printf (" \n");
    } 
    return 0;
}