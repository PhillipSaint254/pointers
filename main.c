#include <stdio.h>
#include <stdlib.h>

struct point {
    int x;
    int y;
};

struct rectangle {
    struct point upper_left;
    struct point lower_right;
};

int area(struct rectangle a) {
    int length = a.lower_right.x - a.upper_left.x;
    int height = a.upper_left.y - a.lower_right.y;

    return length * height;
};
int main()
{
    struct rectangle var;
    printf("Enter upper left value: ");
    scanf("%d %d", &var.upper_left.x, &var.upper_left.y);
    printf("Enter lower right values: ");
    scanf("%d %d", &var.lower_right.x, &var.lower_right.y);
    printf("%d", area(var));
    return 0;
}
