#include <stdio.h>
int main () {
    float pasir,batubata,semen,biayamaterial,biaya_tukang;
    float biaya_tembok,luas_permukaantembok;

    printf ("Masukkan luas permukaan tembok: ");
    scanf ("%f",&luas_permukaantembok);
    printf ("Masukkan biaya pasir : ");
    scanf ("%f",&pasir);
    printf ("Masukkan biaya batu bata : ");
    scanf ("%f",&batubata);
    printf ("Masukkan biaya semen : ");
    scanf ("%f",&semen);
    printf ("Masukkan biaya tukang : ");
    scanf ("%f",&biaya_tukang);

    biayamaterial = pasir + batubata + semen;
    biaya_tembok = luas_permukaantembok * biaya_tukang + biayamaterial;

    printf ("Total Biaya pembuatan tembok = Rp %.2f\n ",biaya_tembok);

    return 0;
}