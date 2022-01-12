//
//  menu.c
//  Million job
//
//  Created by Ilya karazhya on 12/01/2022.
//

#include <stdio.h>
#include "employer.h"

#define MAXNAME 50
#define MAXBUFFER 2024

void menu()
{
    int run = 0;
    char choice = '0';
    char choice1 = '0';
    char email[MAXNAME];
    employer newEmp;
    //candidate newCand;
    int num = 0;
    char temp[MAXNAME];
    
    while (run != -1)
    {
        printf(" ~~~~~ Hello Dear User !~~~~~ \n");
        printf("Welcome to Million Job Program \n");
        printf(" dont miss your apportunity ! \n\n");
        printf("option : \n1) For login Press 1\n2) For Register press 2\n3) For lost password press 3\n4) For exit press 4\n\nchoice :  \b");
        scanf("%c", &choice);
        getchar();
        
        switch (choice)
        {
        case '1':
        {
            
            break;
        }
        case '2':
        {
            printf("option : \n1) For employer Press 1\n2) For candidate press 2\n3) For returning to previous menu press 3\n\nchoice :  \b");
            scanf("%c", &choice1);
            getchar();
            
            
            switch (choice1)            //employer or candidate ?
            {
            case '1':
                    
                    
                    newEmp = employer_Registration();
                    
                    getchar();
                    //EmployerMenu(newEmp);
                    getchar();
                
                
                break;

            case '2':
                
                break;
            default:
                break;
            }

            break;
        }
        case '3':
        {
            
            break;
        }
        case '4':
        {
            run = -1;
            printf("Good-bye !\n\n");

            break;
        }
        default:
        {
            
            printf("Error ! You put wrong number please try again (1-4) : \n");

        }
        }
    }

}


