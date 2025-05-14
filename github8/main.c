#include<stdio.h>

//adunarea a doua nr pare
int main(){
    int a,b;
    int suma;
    printf("Introduceti primul numar par:");
    scanf("%d",&a);
    printf("\nIntroduceti al doilea numar par:");
    scanf("%d",&b);
    suma=a+b;
    if(a%2!=0 && b%2!=0){
        printf("Nu ati introdus un numar par");
    }else{
    printf("\nSuma celor doua numere pare este:%d",suma);
           }

return 0;
}
