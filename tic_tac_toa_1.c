#include <stdio.h>
#include <assert.h>


int main()
{

  /*Affichage du plateau de jeu*/
  
  printf("\n");
  char plateau[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
  printf(" -----------\n");
  for(int i=0; i<3; i++){
    printf("|");
    for(int j=0; j<3; j++){
      printf(" %c ", plateau[i][j]);
      printf("|");
    }
    printf("\n -----------\n");
  }


  /*Interaction avec les joueurs + Affichage des symbole 'X' et 'O'*/
  
  
  for(int tour=0; tour<9; tour++){    //Le jeu se joue en 9 tours max
    int x, y; 
    printf("\n\n");
    if(tour%2 == 0){
      printf("Player 1 it's your turn.\n");
    }
    else{
      printf("Player 2 it's your turn.\n");
    }
    printf("Choose an emplacement\n");
    printf("line : ");
    scanf("%d", &x);

    if(x!=1 && x!=2 && x!=3){      //cas où la valeur x n'est pas disponible
      printf("this line is not available...\n");
      printf("please select again the line...\n");
      printf("line : ");
      scanf("%d", &x);
    }
    
    printf("colomn : ");
    scanf("%d", &y);

    if(y!=1 && y!=2 && y!=3){      //cas où la valeur y n'est pas disponible
      printf("This colomn is not available...\n");
      printf("please select again the colomn...\n");
      printf("Colomn : ");
      scanf("%d", &y);
    }
      
    if(plateau[x-1][y-1] == 'X' || plateau[x-1][y-1] == 'O'){      //cas où la case est déjà sélectionnée
      printf("La case séléctionné est indisponible...\n");
      printf("Veuillez re-séléctionner la ligne et la colonne\n");
      scanf("%d/%d", &x, &y);
    }
    
    if(tour%2 == 0){
      plateau[x-1][y-1] = 'X';
    }
    else{
      plateau[x-1][y-1] = 'O';
    }
    
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

    //VÉRIFICATION DE FIN DE PARTIE


    if(plateau[0][0] == 'X' && plateau[0][1] == 'X' && plateau[0][2] == 'X'){
      printf("\nBien joué joueur 1, tu as gagné la partie !!!\n");
      assert(1 == 2);
    }//ligne 1
    else if(plateau[1][0] == 'X' && plateau[1][1] == 'X' && plateau[1][2] == 'X'){
      printf("\nBien joué joueur 1, tu as gagné la partie !!!\n");
      assert(1 == 2);
    }//ligne 2
    else if(plateau[2][0] == 'X' && plateau[2][1] == 'X' && plateau[2][2] == 'X'){
      printf("\nBien joué joueur 1, tu as gagné la partie !!!\n");
      assert(1 == 2);
    }//ligne 3
    else if(plateau[0][0] == 'X' && plateau[1][0] == 'X' && plateau[2][0] == 'X'){
      printf("\nBien joué joueur 1, tu as gagné la partie !!!\n");
      assert(1 == 2);
    }//colonne 1
    else if(plateau[0][1] == 'X' && plateau[1][1] == 'X' && plateau[2][1] == 'X'){
      printf("\nBien joué joueur 1, tu as gagné la partie !!!\n");
      assert(1 == 2);
    }//colonne 2
    else if(plateau[0][2] == 'X' && plateau[1][2] == 'X' && plateau[2][2] == 'X'){
      printf("\nBien joué joueur 1, tu as gagné la partie !!!\n");
      assert(1 == 2);
    }//colonne 3
    else if(plateau[0][0] == 'X' && plateau[1][1] == 'X' && plateau[2][2] == 'X'){
      printf("\nBien joué joueur 1, tu as gagné la partie !!!\n");
      assert(1 == 2);
    }//diagonnale haut gauche vers bas droit 
    else if(plateau[2][0] == 'X' && plateau[1][1] == 'X' && plateau[0][2] == 'X'){
      printf("\nBien joué joueur 1, tu as gagné la partie !!!\n");
      assert(1 == 2);
    }//diagonnale haut droit vers bas gauche


    if(plateau[0][0] == 'O' && plateau[0][1] == 'O' && plateau[0][2] == 'O'){
      printf("\nBien joué joueur 2, tu as gagné la partie !!!\n");
      assert(1 == 2);
    }//ligne 1
    else if(plateau[1][0] == 'O' && plateau[1][1] == 'O' && plateau[1][2] == 'O'){
      printf("\nBien joué joueur 2, tu as gagné la partie !!!\n");
      assert(1 == 2);
    }//ligne 2
    else if(plateau[2][0] == 'O' && plateau[2][1] == 'O' && plateau[2][2] == 'O'){
      printf("\nBien joué joueur 2, tu as gagné la partie !!!\n");
      assert(1 == 2);
    }//ligne 3
    else if(plateau[0][0] == '0' && plateau[1][0] == 'O' && plateau[2][0] == 'O'){
      printf("\nBien joué joueur 2, tu as gagné la partie !!!\n");
      assert(1 == 2);
    }//colonne 1
    else if(plateau[0][1] == 'O' && plateau[1][1] == 'O' && plateau[2][1] == 'O'){
      printf("\nBien joué joueur 2, tu as gagné la partie !!!\n");
      assert(1 == 2);
    }//colonne 2
    else if(plateau[0][2] == 'O' && plateau[1][2] == 'O' && plateau[2][2] == 'O'){
      printf("\nBien joué joueur 2, tu as gagné la partie !!!\n");
      assert(1 == 2);
    }//colonne 3
    else if(plateau[0][0] == 'O' && plateau[1][1] == 'O' && plateau[2][2] == 'O'){
      printf("\nBien joué joueur 2, tu as gagné la partie !!!\n");
      assert(1 == 2);
    }//diagonnale haut gauche vers bas droit 
    else if(plateau[2][0] == 'O' && plateau[1][1] == 'O' && plateau[0][2] == 'O'){
      printf("\nBien joué joueur 2, tu as gagné la partie !!!\n");
      assert(1 == 2);
    }//diagonnale haut droit vers bas gauche
  }

  printf("Bien joué à vous deux !!\n il n'y a cependant pas de gagnant...\n");
  return 0;
}
