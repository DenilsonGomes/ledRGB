/*Autor: Denilson Gomes Vaz da Silva
* <denilsongomes@alu.ufc.br>
* Graduando em Engenharia de Computação
* Universidade Federal do Ceará - UFC
*
* func:
* biblioteca para manipulação de led RGB
*/

//--Bibliotecas
#include <Arduino.h>

//Escrita digital nas saidas RGB com PWM mapeado de 0 à 255
//Ou escrita analogica mapeada de 0 à 1023

//acendeVerde
void acendeVerde(int G, int R, int B){
    digitalWrite(G,255);
    digitalWrite(R,0);
    digitalWrite(B,0);
}

//acendeVermelho
void acendeVermelho(int G, int R, int B){
    digitalWrite(G,0);
    digitalWrite(R,255);
    digitalWrite(B,0);
}

//acendeAzul
void acendeAzul(int G, int R, int B){
    digitalWrite(G,0);
    digitalWrite(R,0);
    digitalWrite(B,255);
}