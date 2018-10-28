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
    
    /* // Cores Experimentais
    digitalWrite(G,105); //Intensidade na cor verde
    digitalWrite(R,155); //Intensidade na cor vermelha
    digitalWrite(B,255); //Intensidade na cor azul
    delay(2000); //Espera 2 segundos */
    

    //Cores definidas na biblioteca
    acendeVerde(R, G, B);
    delay(2000);
    acendeVermelho(R, G, B);
    delay(2000);
    acendeAzul(R, G, B);
    delay(2000);
    acendeAmarelo(R, G, B);
    delay(2000);
    acendeCianes(R, G, B);
    delay(2000);
    acendeMagento(R, G, B);
    delay(2000);
}