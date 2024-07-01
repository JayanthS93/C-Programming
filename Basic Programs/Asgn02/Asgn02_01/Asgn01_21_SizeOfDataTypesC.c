#include<stdio.h>

void SizeOfDataTypesInC()
{
    printf(" The Size of void is %zu Byte \n",sizeof(void));

    printf(" The Size of int is %zu Bytes \n",sizeof(int));
    printf(" The Size of float is %zu Bytes \n",sizeof(float));
    printf(" The Size of char is %zu Bytes \n",sizeof(char));
    printf(" The Size of double is %zu Bytes \n",sizeof(double));

    printf(" The Size of unsigned int is %zu Bytes \n",sizeof(unsigned int));
    printf(" The Size of unsigned char is %zu Bytes\n",sizeof(unsigned char));

    printf(" The Size of signed int is %zu Bytes \n",sizeof(signed int));
    printf(" The Size of signed char is %zu Bytes \n",sizeof(signed char));

    printf(" The Size of short int is %zu Bytes \n",sizeof(short int));

    printf(" The Size of unsigned long int is %zu Bytes \n",sizeof(unsigned long int));
    printf(" The Size of unsigned short int is %zu Bytes \n",sizeof(unsigned short int));

}

int main ()
{
    // Print the sizes of data Types in Bytes.
    SizeOfDataTypesInC();

    return 0;
}