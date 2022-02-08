# Lista de Exercícios #3 
## Pado Labs - Microcontroladores 
## Estruturas em C e Interrupções

### 1: Qual a principal vantagem em utilizar uma interrupção ao invés de checar periodicamente o status de uma GPIO, por exemplo. 

### Ao checar os status da GPIO, você acaba perdendo tempo e eficácia. Utilizando as interrupções, obtemos respostas mais rápidas, melhorando a eficiência do programa.

### 2: Por que não é recomendável executar operações custosas e longas dentro de uma rotina ISR? 

### Porque o programa coloca as interrupções em prioridade, ou seja antes do programa que estava em andamento, assim ocorrendo perda de dados.
