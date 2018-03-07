/* This file was auto-generated by KreMLin! */
#include "kremlib.h"
#ifndef __PKCS11_DateTime_H
#define __PKCS11_DateTime_H





typedef struct 
{
  uint8_t day;
  uint8_t month;
  uint8_t year;
}
PKCS11_DateTime_date;

bool PKCS11_DateTime_uu___is_MakeDate(PKCS11_DateTime_date projectee);

uint8_t PKCS11_DateTime___proj__MakeDate__item__day(PKCS11_DateTime_date projectee);

uint8_t PKCS11_DateTime___proj__MakeDate__item__month(PKCS11_DateTime_date projectee);

uint8_t PKCS11_DateTime___proj__MakeDate__item__year(PKCS11_DateTime_date projectee);

extern PKCS11_DateTime_date PKCS11_DateTime_parseDate(void *x0);
#endif