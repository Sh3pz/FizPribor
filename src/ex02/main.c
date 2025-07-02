#include <stdio.h>
#include <limits.h>
#include <float.h>

void main(void) {
    char symb;
    unsigned char usymb;
    int num;
    unsigned int unum;
    long int lnum;
    float fnum;
    double lfnum;
    long double llfnum;

    printf("Размер char = %zu байт\n", sizeof(symb));
    printf("Размер unsigned char = %zu байт\n", sizeof(usymb));
    printf("Размер char и unsigned char одинаковый\n\n");
    
    printf("Размер int = %zu байт\n", sizeof(num));
    printf("Размер unsigned int = %zu байт\n", sizeof(unum));
    printf("Размер long int = %zu байт\n", sizeof(lnum));
    printf("Размер int и unsigned int одинаковый, long int в 2 раза больше\n\n");


    printf("Размер float = %zu байт\n", sizeof(fnum));
    printf("Размер double = %zu байт\n", sizeof(lfnum));
    printf("Размер long double = %zu байт\n", sizeof(llfnum));
    printf("Размер float, double и long double увеличивается в 2 раза по сравнению с предыдущим типом данных\n\n\n\n");

    

    char minSymb = CHAR_MIN, maxSymb = CHAR_MAX;
    unsigned char minUsymb = 0, maxUsymb = UCHAR_MAX;
    int minNum = INT_MIN, maxNum = INT_MAX;
    unsigned int minUnum = 0, maxUnum = UINT_MAX;
    long int minLnum = LONG_MIN, maxLnum = LONG_MAX;
    float minFnum = FLT_MIN, maxFnum = FLT_MAX;
    double minLfnum = DBL_MIN, maxLfnum = DBL_MAX;
    long double minLlfnum = LDBL_MIN, maxLlfnum = LDBL_MAX;

    printf("Минимальное значение char: dec(%d), hex(%X)\n", minSymb, minSymb);
    printf("Максимальное значение char: dec(%d), hex(%X)\n\n", maxSymb, maxSymb);

    printf("Минимальное значение uchar: dec(%u), hex(%X)\n", minUsymb, minUsymb);
    printf("Максимальное значение uchar: dec(%u), hex(%X)\n\n", maxUsymb, maxUsymb);

    printf("Минимальное значение int: dec(%d), hex(%X)\n", minNum, minNum);
    printf("Максимальное значение int: dec(%d), hex(%X)\n\n", maxNum, maxNum);

    printf("Минимальное значение uint: dec(%u), hex(%X)\n", minUnum, minUnum);
    printf("Максимальное значение uint: dec(%u), hex(%X)\n\n", maxUnum, maxUnum);

    printf("Минимальное значение long: dec(%ld), hex(%lX)\n", minLnum, minLnum);
    printf("Максимальное значение long: dec(%ld), hex(%lX)\n\n", maxLnum, maxLnum);

    printf("Минимальное значение float: real(%e), exp(%E)\n", minFnum, minFnum);
    printf("Максимальное значение float: real(%e), exp(%E)\n\n", maxFnum, maxFnum);

    printf("Минимальное значение double: real(%e), exp(%E)\n", minLfnum, minLfnum);
    printf("Максимальное значение double: real(%e), exp(%E)\n\n", maxLfnum, maxLfnum);

    printf("Минимальное значение ldouble: real(%Le), exp(%LE)\n", minLlfnum, minLlfnum);
    printf("Максимальное значение ldouble: real(%Le), exp(%LE)\n", maxLlfnum, maxLlfnum);
}