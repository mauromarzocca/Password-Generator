//
//  main.c
//  PasswordGenerator
//
//  Created by Mauro Marzocca on 31/07/21.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "changelog.h"
#include "generator.h"

int main()
{
    int scelta = 0;
    
    printf("\t--- PASSWORD GENERATOR ---\n");
    printf("\t--- Versione 1.6 ---\n");
    printf("\t--- Un programma di Marzocca Mauro ---\n\n");
    
    do
    {
        printf("\t1) Genera Password\n\t2) Visualizza Changelog\n");
        printf("\t0) Uscita\n\n");
        printf("\tInserire Scelta : ");
        scanf("%d", &scelta);
        
        switch(scelta)
        {
            case 1 : generator();
                break;
                
            case 2 : changelog();
                break;
                
            case 0 : printf("\n\n\tGrazie di aver usato il mio programma!\n");
                printf("\t\t\t - Mauro Marzocca - \n\n");
                break;
                
            default : printf("\nScelta non valida!\n\n");
        }
    } while (scelta != 0);
    
    return 0;
}
