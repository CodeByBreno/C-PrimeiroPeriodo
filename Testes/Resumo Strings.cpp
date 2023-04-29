/* Resumo de Strings

1) Strings em C: 
Em C não existe um tipo de variavel especifico para cadeias,
o que nos faz ter de usar vetores de caracteres para representar palavras.

2)Inicialização de Strings:
A inicição de vetores de palavras ocorre de maneira semelhante a de vetores
numéricos: declaramos o tipo dos elementos agrupados (caracteres), o identificador da 
variavel e em seguida seu tamanho, entre cochetes.

OBS: É importante ressaltar que o último digito de um vetor de caracteres deve ser o termo nulo
('\0'). Assim uma cadeia na qual se pretende inserir 10 caracteres, precisará de 11 espaços para [
ocupar o termo nulo adicional.

Podemos definir strings logo após sua inicialização das seguites formas:

-- Integralmente : char nome[10] = "Breno";
-- Termo a Termo: char nome[10] = {'B','r','e','n','o','\0'}

Tambem podemos valorar termo a termo após a inicialização, veja:
nome[0] = 'B';
nome[1] = 'r'; 
etc...

3) Lendo Strings do Teclado:
Para ler uma String do teclado podemos usar o comando scanf da seguinte forma:

scanf ("%s", id_da_string);

Observe que o termo de inicialização da string é 's'
Percebe também que não há necessidade de inserir o '&'
