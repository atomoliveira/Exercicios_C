/*Exercício 2 -Lista 2 de Funções	Crie a função Verifica que receba da função main um valor do tipo inteiro e declarado localmente na função main.
 Na função verifica  verifique e exiba se o valor é positivo ou negativo ouzero.*/
 #include<stdio.h>
 #include<locale.h>
int valores[10], negativos[10];
verifica(int valor)
{
    if(valor==0)
        printf("Valor digitado é zero. \n");
    else if (valor<0)
        printf("Valor digitado é negativo. \n");
    else
        printf("Valor digitado é positivo. \n");
}
main()
{setlocale(LC_ALL,"");
int k=0, cont,contneg=0;
while(k<=0||k>10)
{
    printf("Digite a quantidade de termos que deve ser maior que zero e menor ou igual ao 100\n");
    scanf("%d",&k);
    if(k<=0||k>10)
        printf("Quantidade Inválida\n");

}
for(cont=0;cont<k;cont+=1)
{
   printf(" Digite um valor qualquer. \n");
   scanf("%d",&valores[cont]);
   verifica(valores[cont]);
}
printf("EXIBA AS POSIÇÕES QUE APARECEM APENAS NÚMEROS POSITIVOS\n ");
for(cont=0;cont<k;cont+=1)
    if(valores[cont]>0)
    printf("Apareceu na posição = %d",cont);

printf("criando vetor negativos\n");
for(cont=0;cont<k;cont+=1)
    if(valores[cont]<0)
        contneg+=1;
    if (contneg==0)
        printf("Não foi digitado nenhum valor negativo no vetor valores\n");
    else
    {contneg=0;
     for(cont=0;cont<k;cont+=1)
    if(valores[cont]<0)
        {negativos[contneg]=valores[cont];
         contneg+=1;}

         printf("O conteúdo do vetor Negativos é\n");
         for(cont=0;cont<contneg;cont+=1)
            printf("Posição[%d]= %d\n",cont,negativos[cont]);


    }
}

