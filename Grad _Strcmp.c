#include <stdio.h>
char grad[5];

//create by noy
//hditcs 25a

void main()
{
    while (1)
    {
        printf("Enter your score:");
        scanf("%s", grad);
        if (strcmp(grad, "a") == 0 || strcmp(grad, "A") == 0)
            printf("Grad = 90-100\n");
        if (strcmp(grad, "b+") == 0 || strcmp(grad, "B+") == 0)
            printf("Grad = 80-89\n");
        if (strcmp(grad, "b") == 0 || strcmp(grad, "B") == 0)
            printf("Grad = 70-79\n");
        if (strcmp(grad, "c+") == 0 || strcmp(grad, "C+") == 0)
            printf("Grad = 60-69\n");
        if (strcmp(grad, "c") == 0 || strcmp(grad, "C") == 0)
            printf("Grad = 50-59\n");
        if (strcmp(grad, "d+") == 0 || strcmp(grad, "D+") == 0)
            printf("Grad = 40-49\n");
        if (strcmp(grad, "d") == 0 || strcmp(grad, "D") == 0)
            printf("Grad = 30-39\n");
        if (strcmp(grad, "f") == 0 || strcmp(grad, "F") == 0)
            printf("Grad = 0-29\n");
    }
}
