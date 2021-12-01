//
//  generator.c
//  PasswordGenerator
//
//  Created by Mauro Marzocca on 01/08/21.
//

#include "generator.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generator()
{
    char charset[] = "abcdefghijklmnopqrstuvxyz0123456789ABCDEFGHIJKLMNOPQRSTUVXYZ!£$%&/()=?^;:_-";
    //sono i caratteri da cui la password verrà generata, sono 75

    char *Password;

    int lenght;

    int stop = 0, scelta = 0;

    do {
        printf("\tInserire lunghezza password : ");
        scanf("%d", &lenght);

        //Generazione dello spazio in memoria per la password
        Password = (char *)calloc(lenght, sizeof(char));

        srand((unsigned)time(NULL));

        for(int i = 0; i < lenght; i++)
        {
            Password[i] = charset[rand() % 75];
        }

        printf("\n\tLa password generata e' : %s \n\n", Password);
        
        printf("\tVuoi generare una nuova password? (1 - Si, 2 - NO) ");
        scanf("%d", &scelta);
        printf("\n");
        
        if (scelta == 1) stop = 0;
        else stop = 1;
        
    } while (stop == 0);

}
