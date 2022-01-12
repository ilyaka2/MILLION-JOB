//
//  employer.c
//  Million job
//
//  Created by Ilya karazhya on 12/01/2022.
//

#include <stdio.h>
#include "employer.h"

employer employer_Registration()
{
    FILE* EmployerF = fopen("/Users/ilyakarazhya/Desktop/Million job/Employer_DATA.csv", "a+");// here you need to put your derectory
    employer newEmployer;


    if (!EmployerF)
    {
        // Error in file opening
        printf("Can't open file\n");
    }

    // Asking user input for the
    // new record to be added
    printf("\nEnter company name :  \b");
    gets(newEmployer.companyName);

    printf("\nEnter first name :  \b");
    scanf("%s", &newEmployer.Fname);
    printf("\nEnter last name :  \b");
    scanf("%s", &newEmployer.Lname);
    printf("\nEnter email address (It will be your username):  \b");
    scanf("%s", &newEmployer.email);

    //
    //
    // HERE NEED TO CHECK IF EXIST.
    //
    //


    printf("\nEnter password (needs to be at least 8 char with at least one capital letter,\none small letter,a number and symbol The password needs to be in english)\npassword : ");
    scanf("%s", &newEmployer.password1);
    
    //
    //
    // HERE NEED TO CHECK THE INPUT FROM USER.
    //
    //
    
    printf("\nPassword verefication :  \b");
    scanf("%s", &newEmployer.password2);
    getchar();
    
    //
    //
    // SAME PASS CHECK AS ABOVE.
    //
    //
    
    

    printf("\nEnter your city name (enter just in small letters) :  \b");
    gets(newEmployer.city);
    
    //
    //
    // HERE NEED TO CHECK FOR SMALL LETTERS.
    //
    //
    
    printf("\nEnter phone number :  \b");
    scanf("%s", &newEmployer.phoneNumber);
    getchar();
    
    //
    //
    // HERE NEED TO CHECK IF THE PHONE IS OK.
    //
    //
    
    
    printf("\nEnter some information about the company :  \n");
    gets(newEmployer.jobDescription);

    printf("\nChoose your security question (default question is 1) : \n");
    printf("press 1: What is your grandfather name from your father side ? \n");
    printf("press 2: What is your pet name ? \n");
    printf("press 3: What is the name of your high-school ? \nyour choise :  \b");

    scanf("%d", &newEmployer.questionChoose);
    getchar();
    printf("\nEnter your answer :  \b");
    gets(newEmployer.answer);

    // Saving data in file
    fprintf(EmployerF, "%s,%s,%s,%s,%s,%s,%s,%s,%d,%s\n", newEmployer.companyName,
        newEmployer.Fname, newEmployer.Lname, newEmployer.email, newEmployer.password1, newEmployer.jobDescription,
        newEmployer.city, newEmployer.phoneNumber, newEmployer.questionChoose, newEmployer.answer);
    fclose(EmployerF);
    printf("\nNew Account added to record !\n~press enter to continue~\n");
    return newEmployer;

}
