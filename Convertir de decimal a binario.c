#include<stdio.h>
#include<string.h>
 
int main(){
    int num, t;
    char binario[100], t2[2]; //Arreglo: Variable que almacena varios datos, definidos en C
    // t2[2] variable temporal para concatenar
    
    //Las cadenas deben terminar en el lenguaje C
    t2[1]='\0'; 
    //char *binario2;
    
    //Lectura del número a convertir 
    scanf("%d", &num);   //%d para leer enteros y &num para guardar en la variable scanf para ingresar valor
        //Copiando la cadena vacía a la variable binario
    strcpy(binario, ""); //copia vacía de binario
 
do{
    t=num%2;
    num=(int)(num/2); //división entera con int
    if(num==1) strcat(binario, "1"); //guardar como caracter
    else strcat(binario, "0"); //concatenar 
        
//cadena es un arreglo ""  caracter:con comilla simple ''
    }while(num!=1 && num!=0);
    if (num== 1) strcat(binario, "1");
 
 
    for (int i= strlen(binario)-1; i>=0; i-- ){ //se detenga hasta 0 y se imprime desde -1 (último) 
        printf("%c", binario [i]);
    }
    printf("\n");  //salto de línea 
    return 0;
}
