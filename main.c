#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void* SUBSTRING(char yazi[], int baslangicIndex, int uzunluk,char sonuc[]){
    int i,j=0;

    for(i=baslangicIndex;i<baslangicIndex+uzunluk;i++){
        sonuc[j]=yazi[i];
        j++;
    }

    sonuc[j]='\0';

    return sonuc;


}

int main()
{
    char sonuc[99];
     int baslangicIndex=3,uzunluk=99,i;

    SUBSTRING("selimefeuysal", baslangicIndex, uzunluk,sonuc);

    for(i=0;i<uzunluk;i++){
        printf("%c",sonuc[i]);
    }

}
