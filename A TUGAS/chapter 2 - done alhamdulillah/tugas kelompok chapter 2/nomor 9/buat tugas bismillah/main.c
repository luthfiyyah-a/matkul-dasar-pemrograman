#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c1;
    char c2;
    int n;
    int m;
    int p;

    printf("Two characters > ");
    scanf("%c %c", &c1, &c2);

    printf("Enter three integers sparated by spaces > ");
    scanf("%d %d %d", &n, &m, &p);

    printf(" the result %c, %c, %d, %d, %d", c1, c2, n, m, p);
    return 0;
}
