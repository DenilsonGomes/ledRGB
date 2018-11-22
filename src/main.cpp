/*Autor: Denilson Gomes Vaz da Silva <denilsongomes@alu.ufc.br>
* Graduando em Engenharia de Computação
* Universidade Federal do Ceará - UFC
*
* Led RGB: Codigo para emitir luz de diversas cores utilizando um led RGB.
* Neste projeto foi implementado uma biblioteca para obter a emissao de
* luz nas cores desejadas de forma mais simples.
*/

//Bibliotecas
#include <Arduino.h>
#include <func.h>

//Variaveis
// Variaveis RGB em pinos com PWM
int G = 9; // Led Green (verde) no pino 9
int R = 10; // Led Red (vermelho) no pino 10
int B = 11; // Led Blue (azul) no pino 11

void setup() {
    pinMode(G, OUTPUT); //Pino led G como saida
    pinMode(R, OUTPUT); //Pino led R como saida
    pinMode(B, OUTPUT); //Pino led B como saida
    Serial.begin(9600); //Inicia comunicação serial
    pinMode(A0, OUTPUT);
}

void loop() {
    
    // Cores Experimentais
    /* digitalWrite(G,55); //Intensidade na cor verde
    digitalWrite(R,155); //Intensidade na cor vermelha
    digitalWrite(B,255); //Intensidade na cor azul
    delay(2000); //Espera 2 segundos */
    
    //Cores definidas na biblioteca "func.h"
    acendeVerde(R, G, B); //Luz na cor verde
    delay(2000); //Espera 2 segundos
    acendeVermelho(R, G, B); //Luz na cor vermelha
    delay(2000); //Espera 2 segundos
    acendeAzul(R, G, B); //Luz na cor azul
    delay(2000); //Espera 2 segundos
    acendeAmarelo(R, G, B); //Luz na cor amarelo
    delay(2000); //Espera 2 segundos
    acendeCianes(R, G, B); //Luz na cor cianes
    delay(2000); //Espera 2 segundos
    acendeMagento(R, G, B); //Luz na cor magento
    delay(2000); //Espera 2 segundos
}