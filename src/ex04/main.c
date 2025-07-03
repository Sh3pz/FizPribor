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

    printf("Адрес поля uInt = %p, его размер = %zu\n", &eUnn.uInt, sizeof(eUnn.uInt));
    for (int i = 0; i < (sizeof(eUnn.uInt)/sizeof(unsigned int)); i++) printf("Значение %d-го элемента массива uInt = %u\n", i, eUnn.uInt[i]);

    printf("Адрес поля shNum = %p, его размер = %zu\n", &eUnn.shNum, sizeof(eUnn.shNum));
    for (int i = 0; i < (sizeof(eUnn.shNum)/sizeof(short int)); i++) printf("Значение %d-го элемента массива shNum = %hd\n", i, eUnn.shNum[i]);

    printf("Адрес поля num = %p, его размер = %zu\n", &eUnn.num, sizeof(eUnn.num));
    for (int i = 0; i < (sizeof(eUnn.num)/sizeof(int)); i++) printf("Значение %d-го элемента массива num = %d\n", i, eUnn.num[i]);

    printf("Адрес поля lNum = %p, его размер = %zu\n", &eUnn.lNum, sizeof(eUnn.lNum));
    for (int i = 0; i < (sizeof(eUnn.lNum)/sizeof(long int)); i++) printf("Значение %d-го элемента массива lNum = %ld\n", i, eUnn.lNum[i]);

    printf("Адрес поля llNum = %p, его размер = %zu\n", &eUnn.llNum, sizeof(eUnn.llNum));
    for (int i = 0; i < (sizeof(eUnn.lNum)/sizeof(long long)); i++) printf("Значение %d-го элемента массива llNum = %lld\n", i, eUnn.llNum[i]);

    printf("Адрес поля symb = %p, его размер = %zu\n", &eUnn.symb, sizeof(eUnn.symb));
    for (int i = 0; i < (sizeof(eUnn.symb)/sizeof(char)); i++) printf("Значение %d-го элемента массива symb = %c\n", i, eUnn.symb[i]);

    printf("Адрес поля fNum = %p, его размер = %zu\n", &eUnn.fNum, sizeof(eUnn.fNum));
    for (int i = 0; i < (sizeof(eUnn.fNum)/sizeof(float)); i++) printf("Значение %d-го элемента массива fNum = %f\n", i, eUnn.fNum[i]);

    printf("Адрес поля dNum = %p, его размер = %zu\n", &eUnn.dNum, sizeof(eUnn.dNum));
    for (int i = 0; i < (sizeof(eUnn.fNum)/sizeof(float)); i++) printf("Значение %d-го элемента массива dNum = %f\n", i, eUnn.dNum[i]);

    printf("Адрес поля ldNum = %p, его значение = %Lf, его размер = %zu\n\n", &unn.ldNum, unn.ldNum, sizeof(unn.ldNum));
}