#include <stdio.h>

int main()
{
    int X, Y, Z;
    scanf("%d %d %d", &X, &Y, &Z);
    if(X!=Y!=Z){
        if(X>Y && X>Z){
            if(Y>Z){
                printf("Daging\n");
                printf("Sayur\n");
                printf("Telur\n");
            }
            else if(Z>Y){
                printf("Daging\n");
                printf("Telur\n");
                printf("Sayur\n");
            }
        }
        else if(Y>X && Y>Z){
            if(X>Z){
                printf("Sayur\n");
                printf("Daging\n");
                printf("Telur\n");
            }
            else if(Z>X){
                printf("Sayur\n");
                printf("Telur\n");
                printf("Daging\n");
            }
        }
        else if(Z>X && Z>Y){
            if(X>Y){
                printf("Telur\n");
                printf("Daging\n");
                printf("Sayur\n");
            }
            else if(Y>X){
                printf("Telur\n");
                printf("Sayur\n");
                printf("Daging\n");
            }
        }
    }

    return 0;
}
