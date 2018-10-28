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
void acendeVerde(int R, int G, int B){
    digitalWrite(R,0);
    digitalWrite(G,255);
    digitalWrite(B,0);
}

//acendeVermelho
void acendeVermelho(int R, int G, int B){
    digitalWrite(R,255);
    digitalWrite(G,0);
    digitalWrite(B,0);
}

//acendeAzul
void acendeAzul(int R, int G, int B){
    digitalWrite(R,0);
    digitalWrite(G,0);
    digitalWrite(B,255);
}

//acendeCianes
void acendeCianes(int R, int G, int B){
    digitalWrite(R,0);
    digitalWrite(G,255);
    digitalWrite(B,255);
}

//acendeAmarelo
void acendeAmarelo(int R, int G, int B){
    digitalWrite(R,255);
    digitalWrite(G,255);
    digitalWrite(B,0);
}

//acendeMagento
void acendeMagento(int R, int G, int B){
    digitalWrite(R,255);
    digitalWrite(G,0);
    digitalWrite(B,55);
}