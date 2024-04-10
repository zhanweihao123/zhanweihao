#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_questions(int grade, int num) {
    srand(time(NULL));
    for (int i = 0; i < num; i++) {
        int a, b, c, d;
        switch (grade) {
        case 1:
            a = rand() % 21;
            b = rand() % 21;
            if (a >= b) {
                printf("%d - %d = \n", a, b);
            }
            else {
                printf("%d + %d = \n", a, b);
            }
            break;
        case 2:
            a = rand() % 51;
            b = rand() % 51;
            if (a >= b) {
                printf("%d - %d = \n", a, b);
            }
            else {
                printf("%d + %d = \n", a, b);
            }
            break;
        case 3:
            a = rand() % 1001;
            b = rand() % 1001;
            if (a >= b) {
                printf("%d - %d = \n", a, b);
            }
            else if (rand() % 2 == 0) {
                printf("%d + %d = \n", a, b);
            }
            else {
                printf("%d * %d = \n", a, b);
            }
            break;
        default:
            a = rand() % 1001;
            b = rand() % 1001;
            c = rand() % 1001;
            d = rand() % 4;
            if (d == 0) {
                printf("(%d + %d) * %d = \n", a, b, c);
            }
            else if (d == 1) {
                printf("(%d - %d) * %d = \n", a, b, c);
            }
            else if (d == 2) {
                printf("(%d * %d) + %d = \n", a, b, c);
            }
            else {
                printf("(%d * %d) - %d = \n", a, b, c);
            }
            break;
        }
    }
}

int main() {
    int grade, num;
    printf("请输入年级（1-6）：");
    scanf_s("%d", &grade);
    printf("请输入题目数量：");
    scanf_s("%d", &num);
    generate_questions(grade, num);
    return 0;
}
