/*Exerc�cio 2 -Lista 2 de Fun��es	Crie a fun��o Verifica que receba da fun��o main um valor do tipo inteiro e declarado localmente na fun��o main.
 Na fun��o verifica  verifique e exiba se o valor � positivo ou negativo ouzero.*/
 #include<stdio.h>
 #include<locale.h>
int valores[10], negativos[10];
verifica(int valor)
{
    if(valor==0)
        printf("Valor digitado � zero. \n");
    else if (valor<0)
        printf("Valor digitado � negativo. \n");
    else
        printf("Valor digitado � positivo. \n");
}
main()
{setlocale(LC_ALL,"");
int k=0, cont,contneg=0;
while(k<=0||k>10)
{
    printf("Digite a quantidade de termos que deve ser maior que zero e menor ou igual ao 100\n");
    scanf("%d",&k);
    if(k<=0||k>10)
        printf("Quantidade Inv�lida\n");

}
for(cont=0;cont<k;cont+=1)
{
   printf(" Digite um valor qualquer. \n");
   scanf("%d",&valores[cont]);
   verifica(valores[cont]);
}
printf("EXIBA AS POSI��ES QUE APARECEM APENAS N�MEROS POSITIVOS\n ");
for(cont=0;cont<k;cont+=1)
    if(valores[cont]>0)
    printf("Apareceu na posi��o = %d",cont);

printf("criando vetor negativos\n");
for(cont=0;cont<k;cont+=1)
    if(valores[cont]<0)
        contneg+=1;
    if (contneg==0)
        printf("N�o foi digitado nenhum valor negativo no vetor valores\n");
    else
    {contneg=0;
     for(cont=0;cont<k;cont+=1)
    if(valores[cont]<0)
        {negativos[contneg]=valores[cont];
         contneg+=1;}

         printf("O conte�do do vetor Negativos �\n");
         for(cont=0;cont<contneg;cont+=1)
            printf("Posi��o[%d]= %d\n",cont,negativos[cont]);


    }
}

