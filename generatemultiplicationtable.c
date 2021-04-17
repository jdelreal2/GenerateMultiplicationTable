#include <stdio.h>
int main(void) {
    int num;
    printf ("Lets generate a multiplication table!\nEnter an integer: \n");
    scanf("%d", &num);
    printf ("Generating a multiplication table for (1 to 1000) * %d\n\n", num);
    int i;
    for (i=0; i<=1000; i++) {
        printf ("%d * %d = %d\n", i, num, i*num);
    }
	return 0;
}
