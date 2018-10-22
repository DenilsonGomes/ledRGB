/*Autor: Denilson Gomes Vaz da Silva
* Graduando em Engenharia de Computação
* Universidade Federal do Ceará - UFC
*
Led RGB: Codigo para emitir luz de diversas cores utilizando um led RGB
*/

//Bibliotecas
#include <Arduino.h>
#include <D:\ted nerd\Arduino - Codigos\Led3Cores\lib\func.h>

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
    
    /* Cores Experimentais
    digitalWrite(G,255); //Luz na cor verde
    delay(2000); //Espera 2 segundos
    digitalWrite(G,0); //Apaga o led verde
    digitalWrite(R,255); //Acende o led vermelho
    delay(2000); //Espera 2 segundos
    digitalWrite(R,0); //Apaga o led vermelho
    digitalWrite(B,255); //Acende o led azul
    delay(2000); //Espera 2 segundos
    digitalWrite(B,0); //Apaga o led azul */

    //Cores definidas na biblioteca
    acendeVerde(G, R, B);
    delay(2000);
    acendeVermelho(G, R, B);
    delay(2000);
    acendeAzul(G, R, B);
    delay(2000);
}