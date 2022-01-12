//
//  employer.h
//  Million job
//
//  Created by Ilya karazhya on 12/01/2022.
//

#ifndef employer_h
#define employer_h

#define MAXNAME 50
#define MAXBUFFER 2024

typedef struct employer
{
    char companyName[MAXNAME], Lname[MAXNAME], Fname[MAXNAME], email[MAXNAME],
        password1[MAXNAME], password2[MAXNAME], city[MAXNAME], answer[MAXNAME],
        phoneNumber[MAXNAME], jobDescription[MAXBUFFER];//all the employer data
    int questionChoose;


}employer;


employer employer_Registration();

#endif /* employer_h */
