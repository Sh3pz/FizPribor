#include <stdio.h>

void write_char(char* dest, char value) {
    *dest = value;
}

void write_short_int(char* dest, short int value) {
    memcpy(dest, &value, sizeof(short int));
}

void write_int(char* dest, int value) {
    memcpy(dest, &value, sizeof(int));
}

void write_long_int(char* dest, long int value) {
    memcpy(dest, &value, sizeof(long int));
}

void write_float(char* dest, float value) {
    memcpy(dest, &value, sizeof(float));
}

void write_double(char* dest, double value) {
    memcpy(dest, &value, sizeof(double));
}

void write_long_double(char* dest, long double value) {
    memcpy(dest, &value, sizeof(long double));
}



void print_short_int(short int* ptr) {
    printf("short int: %d (%04X)\n", *ptr, (short int)*ptr);
}

void print_int(int* ptr) {
    printf("int: %d (%08X)\n", *ptr, (int)*ptr);
}

void print_long_int(long int* ptr) {
    printf("long int: %d (%016X)\n", *ptr, (long int)*ptr);
}

void print_char(char* ptr) {
    printf("char: %c (%02X)\n", *ptr, *ptr);
}

void print_float(float* ptr) {
    // Собираем байты для вывода hex отдельно, т.к. вещественные числа в c реализованы иначе, чем целочисленные и приведение (float)*ptr не даст нужный результат
    int hex;
    memcpy(&hex, ptr, sizeof(float));
    printf("float: %f (HEX: %08X) (exp: %e)\n", *ptr, hex, *ptr);
}

void print_double(double* ptr) {
    // Собираем байты для вывода hex отдельно, т.к. вещественные числа в c реализованы иначе, чем целочисленные и приведение (float)*ptr не даст нужный результат
    long int hex;
    memcpy(&hex, ptr, sizeof(double));
    printf("double: %lf (HEX: %016llX) (exp: %le)\n", *ptr, hex, *ptr);
}

void print_long_double(long double* ptr) {
    // Собираем и выводим HEX иначе, т.к. не получится сделать это с помощью стандарнтых спецификаторов вывода %0X
    char bytes[sizeof(long double)];
    memcpy(bytes, ptr, sizeof(long double));
    printf("long double: %Lf (HEX:", *ptr);
    for (int i = (int)(sizeof(long double) - 1); i >= 0 ; i--) {
        printf("%02X", bytes[i]);
    }
    printf(") (exp: %Le)\n", *ptr);
}

void main(void) {
    char bytes[64] = {
        0x41, // 41 - буква 'A' (первый элемент 0)
        0x01, 0x00, // 1 в 2 байтах (первый элемент 1)
        0x01, 0x00, 0x00, 0x00,  // 1 в 4 байтах (первый элемент 3)
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 1 в 8 байтах (первый элемент 7)
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 1 в 16 байтах (первый элемент 15)
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 1 в 32 байтах (первый элемент 31)
        0x64
    };

    printf("Вывод данных из массива байт:\n");
    print_char(&bytes[0]);
    print_short_int(&bytes[1]);
    print_int(&bytes[3]);
    print_long_int(&bytes[7]);
    print_float(&bytes[3]);
    print_double(&bytes[15]);
    print_long_double(&bytes[31]);

    printf("\n\nЗапись в массив байт и вывод новых значений:\n");
    write_char(&bytes[15], 'B');
    print_char(&bytes[15]);
    write_short_int(&bytes[15], 128);
    print_short_int(&bytes[15]);
    write_int(&bytes[15], 1025);
    print_int(&bytes[15]);
    write_long_int(&bytes[15], 71549);
    print_long_int(&bytes[15]);
    write_float(&bytes[15], 3.14);
    print_float(&bytes[15]);
    write_double(&bytes[15], 3.14165435435);
    print_double(&bytes[15]); 
    write_long_double(&bytes[15], 95435435.5435435);
    print_long_double(&bytes[15]);
}