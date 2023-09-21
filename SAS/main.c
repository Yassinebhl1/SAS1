#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int k;
struct tacheList{

    int id;
    int status;
    char titre[100];
    char description[500];
};
void ajouter(struct tacheList taches[],int k)// La partie 1 de Ajouter
{
    struct tacheList nvtache;
    nvtache.id = k+1;

    printf("identifiant:%d",nvtache.id);//identifiant
   // k++;
    printf("\nTitre:");//titre
    scanf(" %[^\n]s",&nvtache.titre);

    printf("description:");//description
    scanf(" %[^\n]s",&nvtache.description);
    printf("1.TODO        2.DOING        3.DONE");
    printf("\nstatus:");
    scanf("%d",&nvtache.status);
    taches[k]=nvtache;

}

void affichagelist(struct tacheList taches[], int k) {

    for(int i=0; i<k; i++){


    printf("tache numero:%d",i+1);
    printf("identifiant:%d",taches[i].id);//identifiant
    printf("\nTitre:%s\n",taches[i].titre);//titre
    printf("description:%s\n",taches[i].description);//description
    printf("1.TODO        2.DOING        3.DONE");
    printf("status:\n");

    switch(taches[i].status){
    case 1:
        printf("TODO\n");
        break;
    case 2:
        printf("DOING\n");
        break;
    case 3:
        printf("DONE");
        break;
    }
    printf("\n");
    }


}
void removelist() {}

int main()
{
    int choix;
    int k=0;
    struct tacheList taches[100];


    puts("     /============================================================\\");
    puts("                                  MENU                             ");
    puts("     \\============================================================/");

    puts("------------------>1. Ajouter une nouvelle tache");
    puts("------------------>2. Ajouter plusieurs nouvelles taches");
    puts("------------------>3. Afficher la liste de toutes les taches");
    puts("------------------>4. Modifier une tache:");
    puts("------------------>5. Supprimer une tache par identifiant");
    puts("------------------>6. Statistiques");
    puts("------------------>7. Rechercher les Taches");

    printf("-->> ");
    scanf("%d",&choix);




    while(true)
    {
        switch(choix)

        {
            int n;
        case 1:
                ajouter(taches,k);
                k++;
                main();
                return;
            break;
        case 2:
            printf("combien de taches souhaitez-vous ajouter: ");
            scanf("%d",&n);
            for(int i=1;i<=n;i++){
                    ajouter(taches,k);
                    k++;
            }
           main();
           return;
            break;
        case 3:
            printf("    3. Afficher la liste de toutes les taches:\n");
            affichagelist(taches,k);
            break;
        case 4:
            printf("    4. Modifier une tache:\n");
            break;
        case 5:
            printf("    5. Supprimer une tache par identifiant:\n");
            break;
        case 6:
            printf("    6. Statistiques:\n");
            break;
        case 7:
            printf("    7. Rechercher les Taches:\n");
            break;
        }

    }







    return 0;
}
