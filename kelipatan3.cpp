#include <stdio.h>
int main (){
    int n;
    printf ("Masukkan nilai n = ");
    scanf ("%d", &n);
    
    for (int i = 3; i<=n; i += 3){
        printf ("%d\n", i);
    }
return 0;
}