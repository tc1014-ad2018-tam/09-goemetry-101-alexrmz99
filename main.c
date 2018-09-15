/*Este programa tiene como propósito calcular lo solicitado por el usuario, ya sea el perímetro, área y volúmen
 * de diferentes figuras geométricas
 *
 * Author: Alejandro Ramírez
 * Date: September 14th
 *
 * */

#include <stdio.h>
#include <math.h>

//declaro funciones
//PERIMETRO
int perSquare (double s) {
    double result;
    result = s * 4;
    return result;
}

int perTriangle (double a, double b, double c) {
    double result;
    result = a + b + c;
    return result;
}

int perRectangle (double b, double h) {
    double result;
    result = b + b + h + h;
    return result;
}

//AREA
int areaSquare (double s) {
    double result;
    result = s * s;
    return result;
}

int areaTriangle (double a, double b) {
    double result;
    result = (a*b) / 2;
    return result;
}

int areaRect (double b, double h) {
    double result;
    result = b*h;
    return result;
}

//VOLUMEN
int volCube (double s) {
    double result;
    result = pow(s, 3);
    return result;
}

int volTriangle (double a, double b, double c) {
    double result;
    result = (((a*b)/2) * c) / 3;
    return result;
}

int volRect (double b, double h, double k) {
    double result;
    result = (b * h)* k;
    return result;
}

int main() {
    int opcion;
    int figura;
    float result;
    double size1;
    double size2;
    double size3;

    do {
        printf("What would you like to calculate?\n");
        printf("1. Perimeter\n");
        printf("2. Area\n");
        printf("3. Volume\n");
        printf("0. Exit\n");
        scanf("%i", &opcion);

        if (opcion == 1) {
            printf("From what shape do you want to calculate it's perimeter?\n");
            printf("1. Square\n");
            printf("2. Triangle\n");
            printf("3. Rectangle\n");
            scanf("%i", &figura);

            if (figura == 1) {
                printf("Give me the size of one side from the square: ");
                scanf("%lf", &size1);
                result = perSquare(size1);
            }

            else if (figura == 2) {
                printf("Give me the sizes of the sides from the triangle: ");
                scanf("%lf, %lf, %lf", &size1, &size2, &size3);
                result = perTriangle(size1, size2, size3);
            }

            else if (figura == 3) {
                printf("Give me the size of the base and height from the rectangle: ");
                scanf("%lf, %lf", &size1, &size2);
                result = perRectangle(size1, size2);
            }
            printf("The perimeter is: %f\n", result);

        } else if (opcion == 2) {
            printf("From what shape do you want to calculate it's area?\n");
            printf("1. Square\n");
            printf("2. Triangle\n");
            printf("3. Rectangle\n");
            scanf("%i", &figura);

            if (figura == 1) {
                printf("Give me the size of one side from the square: ");
                scanf("%lf", &size1);
                result = areaSquare(size1);
            }

            else if (figura == 2) {
                printf("Give me the sizes of the sides from the triangle: ");
                scanf("%lf, %lf, %lf", &size1, &size2);
                result = areaTriangle(size1, size2);
            }

            else if (figura == 3) {
                printf("Give me the size of the base and height from the rectangle: ");
                scanf("%lf, %lf", &size1, &size2);
                result = areaRect(size1, size2);
            }
            printf("The area is: %f\n", result);

        } else if (opcion == 3) {
            printf("From what shape do you want to calculate it's volume?\n");
            printf("1. Cube\n");
            printf("2. Triangle\n");
            printf("3. Rectangle\n");
            scanf("%i", &figura);

            if (figura == 1) {
                printf("Give me the size of one side from the cube: ");
                scanf("%lf", &size1);
                result = volCube(size1);
            }

            else if (figura == 2) {
                printf("Give me the sizes of the sides from the triangle: ");
                scanf("%lf, %lf, %lf", &size1, &size2, &size3);
                result = volTriangle(size1, size2, size3);
            }

            else if (figura == 3) {
                printf("Give me the size of the base and height from the rectangle: ");
                scanf("%lf, %lf, %lf", &size1, &size2, &size3);
                result = volRect(size1, size2, size3);
            }
            printf("The volume is: %f\n", result);

        }
        else if (opcion == 0) {
            printf("Bye!");
        }

    } while (opcion != 0);

    return 0;
}