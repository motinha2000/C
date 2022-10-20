# ATIVIDADE AVALIATIVA II

Desenvolver uma solução computacional baseada em linguagem C, para a qual seja fornecida, por vez ou por rodada, uma expressão aritmética, formada por algarismos alfabéticos (que representam variáveis) e símbolos (operadores aritméticos e delimitadores, apenas do tipo parênteses), como nos exemplos a seguir: 

 _A+B-C_ <br>
 _A-B+C*D_ <br>
 _A/((B-C)+D*(E/F))_ <br> 
 _A/(B+C)_ <br>
 _(A+B)*D+E/(F+A*D)+C_ <br>

A solução deve receber como entrada as variáveis e seus respectivos valores numéricos. São etapas necessárias da solução computacional:
Conversão da expressão do formato infixo para o formato pós fixo: nessa etapa, a expressão infixada é submetida à análise do programa que determinará as prioridades das operações, e resultará na expressão pôs fixa. Considere que a expressão infixa pode apresentar ou não delimitadores do tipo parênteses, os quais precisam ser devidamente tratados;
Avaliação da expressão pós fixa: nessa etapa, a expressão posfixada é submetida ao programa que, por meio de uma pilha, calculará e apresentará o 
valor numérico da expressão, tendo com referência os valores numéricos das variáveis. 

## Aspectos técnicos da solução

1. Solução deve ser desenvolvida com arquivo espelho (.c) do arquivo de cabeçalho (.h), usando a prototipagem no último;
2. Arquivo com a função main deve conter função para seleção de opções (menu) com os seguintes itens:
    1. **Definição da expressão:** aqui, uma expressão semelhante ao exemplo é fornecida; 
    2. **Definição das variáveis:** nessa opção, cada variável informada na expressão terá seu valor numérico fornecido;
    3. **Avalia expressão:** nessa opção, a expressão infixa é convertida em pós fixa, exibida e, logo após, o valor numérico resultante do cálculo da expressão deve ser mostrado;
    4. **Sair:** encerra a execução do programa
3. Eventuais erros na expressão devem ser reconhecidos e exibidos ao usuário. Por exemplo: se a expressão não está parentesiada corretamente, se falta um operador binário entre operandos ou, ainda, se faltam operandos nas expressões. Operandos, neste momentos, são as variáveis fornecidas na definição das expressões.
4. Se desejar, use o arquivo inicial do projeto sugerido em sala, no link https://onlinegdb.com/TY8h9ADLA .