# ATIVIDADE AVALIATIVA II

Desenvolver uma solu��o computacional baseada em linguagem C, para a qual seja fornecida, por vez ou por rodada, uma express�o aritm�tica, formada por algarismos alfab�ticos (que representam vari�veis) e s�mbolos (operadores aritm�ticos e delimitadores, apenas do tipo par�nteses), como nos exemplos a seguir: 

 _A+B-C_ <br>
 _A-B+C*D_ <br>
 _A/((B-C)+D*(E/F))_ <br> 
 _A/(B+C)_ <br>
 _(A+B)*D+E/(F+A*D)+C_ <br>

A solu��o deve receber como entrada as vari�veis e seus respectivos valores num�ricos. S�o etapas necess�rias da solu��o computacional:
Convers�o da express�o do formato infixo para o formato p�s fixo: nessa etapa, a express�o infixada � submetida � an�lise do programa que determinar� as prioridades das opera��es, e resultar� na express�o p�s fixa. Considere que a express�o infixa pode apresentar ou n�o delimitadores do tipo par�nteses, os quais precisam ser devidamente tratados;
Avalia��o da express�o p�s fixa: nessa etapa, a express�o posfixada � submetida ao programa que, por meio de uma pilha, calcular� e apresentar� o 
valor num�rico da express�o, tendo com refer�ncia os valores num�ricos das vari�veis. 

## Aspectos t�cnicos da solu��o

1. Solu��o deve ser desenvolvida com arquivo espelho (.c) do arquivo de cabe�alho (.h), usando a prototipagem no �ltimo;
2. Arquivo com a fun��o main deve conter fun��o para sele��o de op��es (menu) com os seguintes itens:
    1. **Defini��o da express�o:** aqui, uma express�o semelhante ao exemplo � fornecida; 
    2. **Defini��o das vari�veis:** nessa op��o, cada vari�vel informada na express�o ter� seu valor num�rico fornecido;
    3. **Avalia express�o:** nessa op��o, a express�o infixa � convertida em p�s fixa, exibida e, logo ap�s, o valor num�rico resultante do c�lculo da express�o deve ser mostrado;
    4. **Sair:** encerra a execu��o do programa
3. Eventuais erros na express�o devem ser reconhecidos e exibidos ao usu�rio. Por exemplo: se a express�o n�o est� parentesiada corretamente, se falta um operador bin�rio entre operandos ou, ainda, se faltam operandos nas express�es. Operandos, neste momentos, s�o as vari�veis fornecidas na defini��o das express�es.
4. Se desejar, use o arquivo inicial do projeto sugerido em sala, no link https://onlinegdb.com/TY8h9ADLA .