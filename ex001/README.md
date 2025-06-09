A solução desse exercício é feita utilizando bruteforce e bitmask, bitmask seria um tipo de método onde cada subconjunto de um conjunto pode ser determinado pela ausência/presença de um bit, onde o bit aceso representa que o elemento está presente e a ausência de bit representa o contrário.

Então por exemplo em um conjunto de n elementos podemos ter 2^n subconjuntos.

Exemplo:

2^3 = 8 subconjuntos, 000 até 111 representa cada subconjunto, o 000 representa o conjunto vazio e o 111 representa o conjunto cheio com todos os 3 elementos presentes, o 010 representa apenas o subconjunto que o elemento do meio está presente.