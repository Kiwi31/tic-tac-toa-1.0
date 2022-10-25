#include <stdio.h>

int main(){
  char plateau[3][3] = {{'a','b','c'},{' ',' ',' '},{' ',' ',' '}};
  printf(" -----------\n");
  for(int i=0; i<3; i++){
    printf("|");
    for(int j=0; j<3; j++){
      printf(" %c ", plateau[i][j]);
      printf("|");
    }
    printf("\n -----------\n");
  }

  char plateau[1][3] = 'X';
  printf("\n\n");
  printf(" -----------\n");
  for(int i=0; i<3; i++){
    printf("|");
    for(int j=0; j<3; j++){
      printf(" %c ", plateau[i][j]);
      printf("|");
    }
    printf("\n -----------\n");
  }


  return 0;
}








/*
  TIC_TAC_TOE:

tableau de caractères { . ; X ; O }

char tab [3][3] (matrice)


   X|X|O
   -----
   O|O|X
   -----
   X|O|X

entre la ligne {A,B,C} et la colone {1,2,3}
correspo,d à x et y
(Structures ??)

*/
