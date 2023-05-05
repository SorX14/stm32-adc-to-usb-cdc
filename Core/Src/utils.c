/*
 * utils.c
 *
 *  Created on: May 5, 2023
 *      Author: Steve
 */


#include "utils.h"

void delay (int a)
{
  volatile int i,j;

  a = a * 5000;

  for (i=0 ; i < a ; i++)
  {
     j++;
  }
  return;
}
