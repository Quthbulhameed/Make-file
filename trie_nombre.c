//DJIAVOUDINE
//Quthbulhameed
//Etudiant L3 INFO (ISEI)

#include <stdio.h>

void Trie_nombre(void)

{
 
  int tab[6] = { 4, -1, 8, 12, -6, 23};
  int i, j, tmp;
 
    //afficher les éléments du tableau
    
    printf("Avant le tri, la liste est: \n");
    for (int i=0; i<6; i++) {
    printf("%d ",tab[i]);
  }
  
   
 
  for (i=0 ; i < 6; i++)
  {
    for (j=0 ; j < 6-i-1; j++)
    {
      /* Pour un ordre décroissant utiliser < */
      if (tab[j] > tab[j+1]) /* si le numéro est plus grand exemple 4>1 alors  */ 
      { 
          // alors on permute éléments j et j+1
        tmp = tab[j];
        tab[j] = tab[j+1];
        tab[j+1] = tmp;
      }
    }
  }
 
  printf("\ntableau triée par ordre croissant \n");
 
    //afficher les éléments du tableau triée
   for (int i=0; i<6; i++) {
    printf("%d ",tab[i]);
  }
  
 
  
    
    
  
   
 
 
  
 
  

}


	

