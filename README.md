# Trabalho-modelagem-numeros-aleatorios
Código para geração de numeros aleatórios C++
  Os métodos utilizadados para geração para números aleatórios foram: Meio quadrado, Meio produto e Congruência.
  Para baixar o arquivo, basta observar na opção superior "Clone or Download" e escolher a opção "Download ZIP", apos baixado extraia o arquivo e procure o arquivo "numeros_pseudoaleatorio.cpp" e execute-o.
  Para a contrução do código utilizou-se o ambiente de programação DevC++ 5.11. A contrução do código, caso do Meio quadrado e meio produto, foi basicamente em manpulação de strings onde tinhamos que converter o um número inteiro em string e virse-versa. O padrão do codigo observado foi que sempre se tinha a entrada um número de algarismos par, e se elevarmos ou multiplicássemos por outro numero com mesma quantidade de algarismo, o tal algarismo de referencia obtinha-se o dobro da quantidade incial. Porem em algumas operações se tinha uma quantidade ímpar de algarimos , para resolver isto fez se necessário adiconar o valor '0' na frente do número. A partir disso extraia-se a mesma quantidade de valores como incialmente, porém seria os números centrais do novo número do número gerado.
 Para o método da Congruência basicamente utilizou somente operações matemáticas basica e a função mod, no caso a ideia era ter quatro numeros dados pelo usuário, que três número seriam a soma e o produto entre entre eles (y), e o quarto número seria o que ficaria dentro da função mod (M, sendo que ele será o maior possivel).  Daí gerava-se um novo número, que se tornario o novo número de referência.
 
E para a execução do código, dependo do ambiente que você trabalhe porém tem ser um copilador de linguagem C++, procure a opção copilar para executar o algoritmo e escolha uma das 4 opções do menu. Com isso forneça a variavel de entrada caso ele peça( De preferencia numeros com quantidade de algarismos par).
