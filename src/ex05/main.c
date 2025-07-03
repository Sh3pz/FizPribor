#include <stdio.h>

struct myStruct {
    unsigned int uInt;
    short int shNum;
    int num;
    long int lNum;
    long long llNum;
    char symb;
    float fNum;
    double dNum;
    long double ldNum;
};

union myUnion {
    unsigned int uInt;
    short int shNum;
    int num;
    long int lNum;
    long long llNum;
    char symb;
    float fNum;
    double dNum;
    long double ldNum;
};

union myEqualUnion {
    unsigned int uInt[sizeof(long double)/sizeof(unsigned int)];
    short int shNum[sizeof(long double)/sizeof(short int)];
    int num[sizeof(long double)/sizeof(int)];
    long int lNum[sizeof(long double)/sizeof(long int)];
    long long llNum[sizeof(long double)/sizeof(long long)];
    char symb[sizeof(long double)/sizeof(char)];
    float fNum[sizeof(long double)/sizeof(float)];
    double dNum[sizeof(long double)/sizeof(double)];
    long double ldNum;
};

void printArrUInt(unsigned int arr[], size_t size);
void printArrShInt(short arr[], size_t size);
void printArrInt(int arr[], size_t size);
void printArrLong(long arr[], size_t size);
void printArrLongLong(long long arr[], size_t size);
void printArrChar(char arr[], size_t size);
void printArrFloat(float arr[], size_t size);
void printArrDouble(double arr[], size_t size);

void main(void) {
    struct myStruct strct = {62345, -10, 25, -335305, 44034030403, 'A', 3.14f, 6.2435, 934.1434345};
    union myUnion unn = {65};
    union myEqualUnion eUnn = {65};

    printf("Размер структуры: %zu\nРазмер переменной: %zu\nАдрес переменной: %p\n", sizeof(struct myStruct), sizeof(strct), &strct);
    printf("Адрес поля uInt  = %p, его значение = %u\n", &strct.uInt, strct.uInt);
    printf("Адрес поля shNum = %p, его значение = %hd\n", &strct.shNum, strct.shNum);
    printf("Адрес поля num   = %p, его значение = %d\n", &strct.num, strct.num);
    printf("Адрес поля lNum  = %p, его значение = %ld\n", &strct.lNum, strct.lNum);
    printf("Адрес поля llNum = %p, его значение = %lld\n", &strct.llNum, strct.llNum);
    printf("Адрес поля symb  = %p, его значение = %c\n", &strct.symb, strct.symb);
    printf("Адрес поля fNum  = %p, его значение = %f\n", &strct.fNum, strct.fNum);
    printf("Адрес поля dNum  = %p, его значение = %lf\n", &strct.dNum, strct.dNum);
    printf("Адрес поля ldNum = %p, его значение = %Lf\n\n", &strct.ldNum, strct.ldNum);

    printf("Размер объединения: %zu\nРазмер переменной: %zu\nАдрес переменной: %p\n", sizeof(union myUnion), sizeof(unn), &unn);
    printf("Адрес поля uInt  = %p, его значение = %u, его размер = %zu\n", &unn.uInt, unn.uInt, sizeof(unn.uInt));
    printf("Адрес поля shNum = %p, его значение = %hd, его размер = %zu\n", &unn.shNum, unn.shNum, sizeof(unn.shNum));
    printf("Адрес поля num   = %p, его значение = %d, его размер = %zu\n", &unn.num, unn.num, sizeof(unn.num));
    printf("Адрес поля lNum  = %p, его значение = %ld, его размер = %zu\n", &unn.lNum, unn.lNum, sizeof(unn.lNum));
    printf("Адрес поля llNum = %p, его значение = %lld, его размер = %zu\n", &unn.llNum, unn.llNum, sizeof(unn.llNum));
    printf("Адрес поля symb  = %p, его значение = %c, его размер = %zu\n", &unn.symb, unn.symb, sizeof(unn.symb));
    printf("Адрес поля fNum  = %p, его значение = %f, его размер = %zu\n", &unn.fNum, unn.fNum, sizeof(unn.fNum));
    printf("Адрес поля dNum  = %p, его значение = %lf, его размер = %zu\n", &unn.dNum, unn.dNum, sizeof(unn.dNum));
    printf("Адрес поля ldNum = %p, его значение = %Lf, его размер = %zu\n\n", &unn.ldNum, unn.ldNum, sizeof(unn.ldNum));



    printf("Размер равного объединения: %zu\nРазмер переменной: %zu\nАдрес переменной: %p\n", sizeof(union myEqualUnion), sizeof(eUnn), &eUnn);

    printArrUInt(eUnn.uInt, sizeof(eUnn.uInt)/sizeof(unsigned int));
    printArrShInt(eUnn.shNum, sizeof(eUnn.shNum)/sizeof(short));
    printArrInt(eUnn.num, sizeof(eUnn.num)/sizeof(int));
    printArrLong(eUnn.lNum, sizeof(eUnn.lNum)/sizeof(long));
    printArrLongLong(eUnn.llNum, sizeof(eUnn.llNum)/sizeof(long long));
    printArrChar(eUnn.symb, sizeof(eUnn.symb)/sizeof(char));
    printArrFloat(eUnn.fNum, sizeof(eUnn.fNum)/sizeof(float));
    printArrDouble(eUnn.dNum, sizeof(eUnn.dNum)/sizeof(double));
    printf("Адрес поля ldNum = %p, его значение = %Lf, его размер = %zu\n\n", &unn.ldNum, unn.ldNum, sizeof(unn.ldNum));
}

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
