#include <stdio.h>

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

void main(void) {
    char ch_arr[8] = {
        10,
        012,
        0xA,
        -5,
        15,
        017,
        0xF,
        -10
    };

    short int shi_arr[8] = {
        100,
        0144,
        0x64,
        -50,
        200,
        0310,
        0xC8,
        -100
    };

    int i_arr[8] = {
        1000,
        01750,
        0x3E8,
        -500,
        2000,
        03720,
        0x7D0,
        -1000
    };

    long int li_arr[8] = {
        100000L,
        0303240L,
        0x186A0L,
        -50000L,
        200000L,
        0606500L,
        0x30D40L,
        -100000L
    };

    float f_arr[8] = {
        3.14f,
        -0.5f,
        2.5e3f,
        1.0e-2f,
        123.456f,
        -1.5e4f,
        0.0f,
        3e-5f
    };

    double d_arr[8] = {
        3.1415926535,
        -0.0001,
        1.5e200,
        2.0e-100,
        123456.789,
        -9.99e-50,
        0.0,
        2.112e23
    };

    long double ld_arr[8] = {
        3.141592653589793238L,
        -1.23456789e-50L,
        1.0e300L,
        2.0e-400L,
        1234567890.123456789L,
        -5.5e100L,
        0.0L,
        9.63407015e-34L
    };

    printf("1.\n\n");
    printf("char:\n");
    for (int i = 0; i < 8; i++) {
        printf("dec(%d), hex(%X)\n", ch_arr[i], ch_arr[i]);
    }
    printf("\n\n");

    printf("short int:\n");
    for (int i = 0; i < 8; i++) {
        printf("dec(%d), hex(%X)\n", shi_arr[i], shi_arr[i]);
    }
    printf("\n\n");

    printf("int:\n");
    for (int i = 0; i < 8; i++) {
        printf("dec(%d), hex(%X)\n", i_arr[i], i_arr[i]);
    }
    printf("\n\n");

    printf("long int:\n");
    for (int i = 0; i < 8; i++) {
        printf("dec(%ld), hex(%lX)\n", li_arr[i], li_arr[i]);
    }
    printf("\n\n");

    printf("float:\n");
    for (int i = 0; i < 8; i++) {
        printf("real(%e), exp(%E)\n", f_arr[i], f_arr[i]);
    }
    printf("\n\n");

    printf("double:\n");
    for (int i = 0; i < 8; i++) {
        printf("real(%e), exp(%E)\n", d_arr[i], d_arr[i]);
    }
    printf("\n\n");

    printf("long double:\n");
    for (int i = 0; i < 8; i++) {
        printf("real(%Le), exp(%LE)\n", ld_arr[i], ld_arr[i]);
    }
    printf("\n\n\n");

    printf("2.\n\n");
    printf("Адрес ch_arr: %p   Размер массива = %zu   Размер 3-го элемента = %zu   Дельта между элементами = %ld\n", (void*)ch_arr, sizeof(ch_arr), sizeof(ch_arr[2]), &ch_arr[7]-&ch_arr[0]);
    printf("Адрес shi_arr: %p   Размер массива = %zu   Размер 3-го элемента = %zu   Дельта между элементами = %ld\n", (void*)shi_arr, sizeof(shi_arr), sizeof(shi_arr[2]), &shi_arr[7]-&shi_arr[0]);
    printf("Адрес i_arr: %p   Размер массива = %zu   Размер 3-го элемента = %zu   Дельта между элементами = %ld\n", (void*)i_arr, sizeof(i_arr), sizeof(i_arr[2]), &i_arr[7]-&i_arr[0]);
    printf("Адрес li_arr: %p   Размер массива = %zu   Размер 3-го элемента = %zu   Дельта между элементами = %ld\n", (void*)li_arr, sizeof(li_arr), sizeof(li_arr[2]), &li_arr[7]-&li_arr[0]);
    printf("Адрес f_arr: %p   Размер массива = %zu   Размер 3-го элемента = %zu   Дельта между элементами = %ld\n", (void*)f_arr, sizeof(f_arr), sizeof(f_arr[2]), &f_arr[7]-&f_arr[0]);
    printf("Адрес d_arr: %p   Размер массива = %zu   Размер 3-го элемента = %zu   Дельта между элементами = %ld\n", (void*)d_arr, sizeof(d_arr), sizeof(d_arr[2]), &d_arr[7]-&d_arr[0]);
    printf("Адрес ld_arr: %p   Размер массива = %zu   Размер 3-го элемента = %zu   Дельта между элементами = %ld\n\n", (void*)ld_arr, sizeof(ld_arr), sizeof(ld_arr[2]), &ld_arr[7]-&ld_arr[0]);

        printf("char:\n");
    for (size_t i = 0; i < ARRAY_SIZE(ch_arr); i++) {
        printf("dec(%d), hex(%X)\n", ch_arr[i], ch_arr[i]);
    }
    printf("\n\n");

    printf("short int:\n");
    for (size_t i = 0; i < ARRAY_SIZE(shi_arr); i++) {
        printf("dec(%d), hex(%X)\n", shi_arr[i], shi_arr[i]);
    }
    printf("\n\n");

    printf("int:\n");
    for (size_t i = 0; i < ARRAY_SIZE(i_arr); i++) {
        printf("dec(%d), hex(%X)\n", i_arr[i], i_arr[i]);
    }
    printf("\n\n");

    printf("long int:\n");
    for (size_t i = 0; i < ARRAY_SIZE(li_arr); i++) {
        printf("dec(%ld), hex(%lX)\n", li_arr[i], li_arr[i]);
    }
    printf("\n\n");

    printf("float:\n");
    for (size_t i = 0; i < ARRAY_SIZE(f_arr); i++) {
        printf("real(%e), exp(%E)\n", f_arr[i], f_arr[i]);
    }
    printf("\n\n");

    printf("double:\n");
    for (size_t i = 0; i < ARRAY_SIZE(d_arr); i++) {
        printf("real(%e), exp(%E)\n", d_arr[i], d_arr[i]);
    }
    printf("\n\n");

    printf("long double:\n");
    for (size_t i = 0; i < ARRAY_SIZE(ld_arr); i++) {
        printf("real(%Le), exp(%LE)\n", ld_arr[i], ld_arr[i]);
    }
}