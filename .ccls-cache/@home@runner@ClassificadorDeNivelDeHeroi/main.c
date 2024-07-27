#include <stdio.h>
#include <string.h>

int main(){
  char nome[] = "Heloísa";
  int xp = 1000;
  char nivel[15];

  if (xp <= 1000)
    strcpy(nivel, "Ferro");
  else if (xp > 1000 && xp <= 2000)
    strcpy(nivel, "Bronze");
  else if (xp > 2000 && xp <= 5000)
    strcpy(nivel, "Prata");
  else if (xp > 5000 && xp <= 7000)
    strcpy(nivel, "Ouro");
  else if (xp > 7000 && xp <= 8000)
    strcpy(nivel, "Platina");
  else if (xp > 8000 && xp <= 9000)
    strcpy(nivel, "Ascendente");
  else if (xp > 9000 && xp <= 1000)
    strcpy(nivel, "Imortal");
  else
    strcpy(nivel, "Radiante");

  printf("O herói de nome %s está no nível de %s", nome, nivel);
  return 0;
}