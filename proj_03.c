//*Faça um programa que imprima as variaveis  na tela  e seus valores */

 main()
 {
int z = 20000;
short int a = 10000;
long int b = 100000;

unsigned char c = 65;
unsigned int d = 45000;
unsigned short e = 40000;
unsigned long f = 4000000000;

printf("imprime o conteudo da variavel tipo inteiro com os qualificadores\n");
printf("\t inteiro ------------------> %d\n",z);
printf("\t inteiro curto ------------> %hd\n",a);
printf("\t inteiro longo ------------> %ld\n",b);
printf("\t caracter sem sinal -------> %u %c \n",c,c);
printf("\t inteiro  sem sinal -------> %u\n",d);
printf("\t inteiro curto sem sinal --> %hu\n",e);
printf("\t inteiro longo sem sinal --> %lu\n",f);

 }
