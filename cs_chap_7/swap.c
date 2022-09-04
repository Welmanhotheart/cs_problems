/*  swap.c  */

extern int buf[];

int add(int, int);

int *bufp0 = &buf[0];
int *bufp1;

int *bufp2 = &buf[1];

void swap() {
    int temp;

    bufp1 = &buf[1];
    temp = *bufp0;
    *bufp0 = *bufp1;
    *bufp1 = temp;
}