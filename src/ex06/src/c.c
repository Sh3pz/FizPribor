/******************************//*!
 * \file
 * \brief	Описание
 * \author
 * \date	Создан:
 * \date	Изменён:
 */

#include "../include/c.h"

/*
 *	Data definition:
 */


/*
 *	Function(s) definition:
 */

 void printArrUInt(unsigned int arr[], size_t size) {
    printf("Адрес поля uInt = %p\n", &arr);
    for (int i = 0; i < size; i++) printf("Значение %d-го элемента массива uInt = %u\n", i, arr[i]);
}

void printArrShInt(short arr[], size_t size) {
    printf("Адрес поля shNum = %p\n", arr);
    for (size_t i = 0; i < size; i++) printf("Значение %zu-го элемента массива shNum = %hd\n", i, arr[i]);
}

void printArrInt(int arr[], size_t size) {
    printf("Адрес поля num = %p\n", arr);
    for (size_t i = 0; i < size; i++) printf("Значение %zu-го элемента массива num = %d\n", i, arr[i]);
}

void printArrLong(long arr[], size_t size) {
    printf("Адрес поля lNum = %p\n", arr);
    for (size_t i = 0; i < size; i++) printf("Значение %zu-го элемента массива lNum = %ld\n", i, arr[i]);
}

void printArrLongLong(long long arr[], size_t size) {
    printf("Адрес поля llNum = %p\n", arr);
    for (size_t i = 0; i < size; i++) printf("Значение %zu-го элемента массива llNum = %lld\n", i, arr[i]);
}

void printArrChar(char arr[], size_t size) {
    printf("Адрес поля symb = %p\n", arr);
    for (size_t i = 0; i < size; i++) printf("Значение %zu-го элемента массива symb = %c\n", i, arr[i]);
}

void printArrFloat(float arr[], size_t size) {
    printf("Адрес поля fNum = %p\n", arr);
    for (size_t i = 0; i < size; i++) printf("Значение %zu-го элемента массива fNum = %f\n", i, arr[i]);
}

void printArrDouble(double arr[], size_t size) {
    printf("Адрес поля dNum = %p\n", arr);
    for (size_t i = 0; i < size; i++) printf("Значение %zu-го элемента массива dNum = %f\n", i, arr[i]);
}


/******************************//*!
	Описание
	\param[out]	a	...
	\param[in]	b	...
	\return			...
*/

