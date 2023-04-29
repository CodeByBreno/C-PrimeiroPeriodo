/* Resumo de Strings

1) Strings em C: 
Em C n�o existe um tipo de variavel especifico para cadeias,
o que nos faz ter de usar vetores de caracteres para representar palavras.

2)Inicializa��o de Strings:
A inici��o de vetores de palavras ocorre de maneira semelhante a de vetores
num�ricos: declaramos o tipo dos elementos agrupados (caracteres), o identificador da 
variavel e em seguida seu tamanho, entre cochetes.

OBS: � importante ressaltar que o �ltimo digito de um vetor de caracteres deve ser o termo nulo
('\0'). Assim uma cadeia na qual se pretende inserir 10 caracteres, precisar� de 11 espa�os para [
ocupar o termo nulo adicional.

Podemos definir strings logo ap�s sua inicializa��o das seguites formas:

-- Integralmente : char nome[10] = "Breno";
-- Termo a Termo: char nome[10] = {'B','r','e','n','o','\0'}

Tambem podemos valorar termo a termo ap�s a inicializa��o, veja:
nome[0] = 'B';
nome[1] = 'r'; 
etc...

3) Lendo Strings do Teclado:
Para ler uma String do teclado podemos usar o comando scanf da seguinte forma:

scanf ("%s", id_da_string);

Observe que o termo de inicializa��o da string � 's'
Percebe tamb�m que n�o h� necessidade de inserir o '&'
