#include<stdio.h>
int main ()
{
    unsigned int ui;
    unsigned char uc;

    signed int is;
    signed char cs;

    short int si;

    unsigned long int uli;
    unsigned short int usi;	
        

    printf(" The Size of int is %zu Bytes \n",sizeof(int));
    printf(" The Size of float is %zu Bytes \n",sizeof(float));
    printf(" The Size of char is %zu Bytes \n",sizeof(char));
    printf(" The Size of double is %zu Bytes \n",sizeof(double));
    //printf(" The Size of void is %zu \n",sizeof(void));

    printf(" The Size of unsigned int is %zu Bytes \n",sizeof(ui));
    printf(" The Size of unsigned char is %zu Bytes\n",sizeof(uc));

    printf(" The Size of signed int is %zu Bytes \n",sizeof(is));
    printf(" The Size of signed char is %zu Bytes \n",sizeof(cs));

    printf(" The Size of short int is %zu Bytes \n",sizeof(si));

    printf(" The Size of unsigned long int is %zu Bytes \n",sizeof(uli));
    printf(" The Size of unsigned short int is %zu Bytes \n",sizeof(usi));

    return 0;
}