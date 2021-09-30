#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
//Para que una variable sea global, debe de existir fuera de las funciones
int conv_binario_decimal(char binario[]); //prototipo, termina con punto y coma, Que regresa y el tipo que recibe 

int main(){
    //variable local num, en main, diferente a la del prototipo
    int num=0, pot=0;
    char binario[100];
    scanf("%s", &binario);
 
    num= conv_binario_decimal(binario);  //llamada a la función   //lo que recibe

    printf("%d\n", num);
    return 0;
}

int conv_binario_decimal(char binario[])//prototipo: no termina en llaves y tiene cuerpo en llaves
{
    int num=0, pot=0; 
    for (int i=strlen(binario)-1; i>=0; i--){
        if (binario[i]== '1')
            num= num+pow(2, pot);
        pot=pot+1;
    }
    return num;    
}
