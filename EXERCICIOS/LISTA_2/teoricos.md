# Exercícios Teoricos do 1 ao 5

1: Qual a vantagem de se trabalhar com os tipos da biblioteca stdint.h 

Para definir valores específicos de largura para números inteiros.

2: Qual a principal característica de uma variável do tipo int_fastX_t ? 

Variável inteira que irá alocar o número de bits que implicará em melhor performance do chipset.

3: No nosso kit NUCLEO-G0B1RE, qual o tamanho da variável, em bytes, do     int_fast8_t = 4 bytes.
 int_fast16_t = 4 bytes.
 int_fast32_t = 4 bytes.
int_fast64_t = 8 bytes.

4: Qual a função dos registradores: 

       • GPIOx_MODER: registro de modo de porta.
       Esses bits são escritos por software para configurar o modo de E/S.
       00: Modo de entrada
       01: Modo de saída de uso geral
       10: Modo de função alternativo
       11: Modo analógico (estado de reinicialização).

• GPIOx_OTYPER: Registro do tipo de saída da porta.
      Reservados, devem ser mantidos no valor de reset.
      Esses bits são escritos por software para configurar o tipo de saída de    E/S.
      0: Saída push-pull (estado de reset)
      1: Saída de drenagem aberta


• GPIOx_OSPEEDR: Registro de velocidade de saída da porta GPIO.
     00: Velocidade muito baixa
     01: Baixa velocidade
     10: Alta velocidade
     11: Velocidade muito alta

• GPIOx_PUPDR: Registro de pull-up/pull-down da porta GPIO
     00: Sem pull-up, pull-down
     01: Levantamento
     10: Puxar para baixo
     11: Reservado

• GPIOx_IDR: Registro de dados de entrada da porta GPIO
      Reservados, devem ser mantidos no valor de reset.
Esses bits são somente leitura. Eles contêm o valor de entrada da porta de E/S correspondente.

• GPIOx_ODR: Registro de dados de saída da porta GPIO
Reservado, deve ser mantido no valor de reset.
Para configuração/redefinição de bits atômicos, os bits OD podem ser definidos e/ou redefinidos individualmente escrevendo para o
Registro GPIOx_BSRR (x = A..D, F).

• GPIOx_AFRL: Registro baixo da função alternativa GPIO
Esses bits são escritos por software para configurar E/S de função alternativa
Seleção AFSEly:
0000: AF0                                        1000: Reservado
0001: AF1                                        1001: Reservado
0010: AF2                                        1010: Reservado 
0011: AF3                                        1011: Reservado
0100: AF4                                        1100: Reservado
0101: AF5                                        1101: Reservado
0110: AF6                                        1110: Reservado
0111: AF7                                        1111: Reservado

5: Como posso fazer para ler diretamente o registrador sem utilizar a implementação da ST? (tip: lembre-se dos ponteiros!) 
criar um ponteiro (uint32_t), que aponta a um endereço, e depois dar  printf o valor que está lá.