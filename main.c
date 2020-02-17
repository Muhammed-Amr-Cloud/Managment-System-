/*
 * main.c
 *
 *  Created on: Feb 16, 2020
 *      Author: Mohamed
 */

#include <stdio.h>


#define DATA_BASE_LIMIT        255

/********************************************************************************************
 *									Patient Info
 *********************************************************************************************/


typedef struct
{

	unsigned char patientName[8]     ;
	unsigned char patientGender[8]   ;
	unsigned char patientAge		 ;
	unsigned char patientID			 ; /* if ID Exist -> retry */

}Patient;




Patient dataBase[DATA_BASE_LIMIT] ;

unsigned char dataBaseIndex = 0 ; ;

void init_System (void)
{
	dataBaseIndex = 0 ;
	dataBase[dataBaseIndex].patientID = 1 ;
}


typedef enum
{
	ADD_NEW_PATIENT,
	EDIT_PATIENT_RECORD,
	RESERVE_SLOT_WITH_DR,
	CANCEL_RESERVATION
}adminOptions;


typedef enum
{
	VIEW_PATIENT_RECORD,
	VIEW_RESERVATION
}userOptions;


/********************************************************************************************
 *									Function Prototypes
 *********************************************************************************************/
static void admin_Mode (void) ;
static void user_Mode  (void) ;





static void add_Patient (void)
{

	printf("Enter Patient Name\n");
	fflush(stdout);

	scanf("%[^\n]",dataBase[dataBaseIndex].patientName);
	fflush(stdin);

	printf("Enter Patient Gender\n");
	fflush(stdout);

	scanf("%[^\n]",dataBase[dataBaseIndex].patientGender);
	fflush(stdin);

	printf("Enter Patient Age\n");
	fflush(stdout);

	scanf("%c",  &(dataBase[dataBaseIndex].patientAge));
	fflush(stdin);

	printf("Enter Patient ID\n");
	fflush(stdout);

	scanf("%c", &(dataBase[dataBaseIndex].patientID));
	fflush(stdin);

	dataBaseIndex++;

}



static void printPatientInfo (Patient* string)
{

	printf("%s\t", string->patientName)   ;
	printf("%s\t", string->patientGender) ;
	printf("%d\t", string->patientAge)    ;
	printf("%d\t", string->patientID)     ;

}



/********************************************************************************************
 *										Main Routine
 *********************************************************************************************/


int main (void)
{

	init_System();

	printf("%c",dataBase[0].patientName[7]);
	return 0 ;
}



/********************************************************************************************
 *									Function Definition
 *********************************************************************************************/
void admin_Mode (void)
{

/*
 *  System asks for a password  : mohamed
 *
 *  System Allows for 3 trials if all are wrong the System should Close.
 *
 */


/*
 * in admin mode :
 *
 * 1 -
 *
 */




}



void user_Mode (void)
{





}




