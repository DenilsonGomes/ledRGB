***
<h1 align="center" > Led RGB

<br>
<br>

<h2 align="right" >Denilson Gomes Vaz da Silva<br>
<br>

1.Introdução
==========

<p>Neste projeto usamos um led RGB para produzir luz de diversas cores. Usando a junção das cores R, G e B (Vermelho, Verde e Azul) podemos obter outras cores, logo temos um unico led e podemos emitir luz de varias cores.<p/>
<p>Este dispositivo possui um led pra cada cor do sistema RGB, todos possuindo o terra em comum, mas cada led tem o seu pino de sinal individual.<p/>

2.Funções Criadas
==========

<p>Foram criadas algumas funções para emitir a luminosidade em algumas cores desejadas. Estas funções são explicadas à seguir.<p/>
 <p> Cada função tem uma assinatura autoexplicativa e possui 3 parâmetros, sendo eles os números dos pinos referentes aos leds R, G e B, respectivamente. Estes parâmetros são comuns para todas as funções.<p/>
<p> 1. acendeVerde:
<p> acendeVerde(R, G, B) <br>
<p> A função "acendeVerde" é utilizada para emitir luz na cor verde.<p/>
<p> Para emitir a luz na cor verde basta ligar o led verde e manter os outros desligados. <p/>

<p> 2. acendeVermelho: <br>
<p> acendeVermelho(R, G, B) <br>
<p> A função "acendeVermelho" é utilizada para emitir luz na cor vermelho.<p/>
<p> Para emitir a luz na cor vermelha basta ligar o led vermelho e manter os outros desligados. <p/>

<p> 3. acendeAzul: <br>
<p> acendeAzul(R, G, B) <br>
<p> A função "acendeAzul" é utilizada para emitir luz na cor azul.<p/>
<p> Para emitir a luz na cor azul basta ligar o led azul e manter os outros desligados. <p/>

<p> 4. acendeAmarelo: <br>
<p> acendeAmarelo(R, G, B) <br>
<p> A função "acendeAmarelo" é utilizada para emitir luz na cor vermelho.<p/>
<p> Para emitir a luz na cor amarela vamos ligar os leds verde e vermelho e manter o led azul desligado. <p/>

<p> 5. acendeCianes: <br>
<p> acendeCianes(R, G, B) <br>
<p> A função "acendeCianes" é utilizada para emitir luz na cor cianes.<p/>
<p> Para emitir a luz na cor Cianes vamos ligar os leds verde e azul e manter o led vermelho desligado. <p/>

<p> 6. acendeMagento: <br>
<p> acendemagento(R, G, B) <br>
<p> A função "acendeMagento" é utilizada para emitir luz na cor magento.<p/>
<p> Para emitir a luz na cor magenta vamos ligar os leds vermelho e azul e manter o led verde desligado. <p/>

<p> A implementação das bibliotecas podem ser vistas em "lib\func.h". <p/>