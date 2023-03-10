
/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  LED.c
 *        \brief  ..............
 *
 *      \details  LED FUN
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "LED.h"

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/
void LED_ON(void){

DIO_WriteChannel(LED_PIN,HIGH);

}
void LED_OFF(void){

DIO_WriteChannel(LED_PIN,LOW);

}

/**********************************************************************************************************************
 *  END OF FILE: LED.c
 *********************************************************************************************************************/
