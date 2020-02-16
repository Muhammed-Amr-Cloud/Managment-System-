/*
 * main.c
 *
 *  Created on: Feb 16, 2020
 *      Author: Mohamed
 */

#include <stdio.h>

/********************************************************************************************
 *									Function Prototypes
 *********************************************************************************************/
static void admin_Mode (void) ;
static void user_Mode  (void) ;



/********************************************************************************************
 *									Patient Info
 *********************************************************************************************/


typedef struct
{

	unsigned char patientName[10]     ;
	unsigned char patientGender[10]   ;
	unsigned char patientAge		  ;
	unsigned char patientID			  ; /* if ID Exist -> retry */

}Patient;



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
 *										Main Routine
 *********************************************************************************************/


int main (void)
{





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


/*TODO: */




}



void user_Mode (void)
{





}




