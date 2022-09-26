//*Faça um programa que peça nome de cidades e suas distancias respectivas e imprima na tela */

int main ()
 {
  char cidades[5][100];
  float distancia[5][5];
  int i, j;
  for (i=0; i<5; i++){
    printf ("Informe o nome da cidade %d :", i+1);
 gets (cidades[i]);
 }
 for (i=0; i<5; i++) {
 for (j=0; j<5; j++) {
  if (i==j)
   distancia[i][j] = 0;
  if (j>i){
 printf ("Digite a distancia de ");
 puts (cidades[i]);
printf (" para ");
 puts (cidades[j]);
scanf ("%f", &distancia[i][j]);
  distancia[j][i] = distancia[i][j];
    }
   }
  }
 for (i=0; i<5; i++) {
 puts (cidades[i]);
 for (j=0; j<5; j++) {
printf ("%f ", distancia[i][j]);
}
printf ("\n");
 }
return 0;
}
