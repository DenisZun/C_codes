#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

void new_func () {
    int a, b;
    scanf("%d%d", &a, &b);

    printf("a == %d\n", a);
    printf("b == %d\n", b);

    int c = a>b?a:b;
    printf("c is %d\n", c);

    float x = 15.03;
    int num = 5;
    int y;
    y = (int)x;
//    printf("s = %d\n", num/2);
//    printf("s1 = %lf \n", num/2.0);
//    printf("x:%f, y:%d", x, y);
}

void new_func_01 () {
    int c;
    scanf("%d", &c);
    switch (c) {
        case 1:
            printf("???????!\n");
            break;
        case 2:
            printf("????????!\n");
            break;
        case 3:
            printf("?????????\n");
            break;
        default:
            printf("?????????......???");
            break;
    }
}

void new_func_02 () {
    int a, b, c;

    printf("????????????:\n");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b) {
        if (a > c) {
            printf("a:%d???", a);
        }
        else {
            printf("c:%d???", c);
        }
    }
    else {
        if (b > c) {
            printf("b:%d???", b);
        }
        else {
            printf("c:%d???", c);
        }
    }

}

void new_func_03 () {
    int i = 0;

    while (i < 10) {
        if (i % 2 == 0) {
            printf("i:%d \n", i);
        }
        ++i;
    }
}



void new_func_04 () {
    // ??7??7???????????
    int i = 1;

    while (i < 100) {
        if (i%7 == 0 || i%10 == 7 || i/10 == 7) {
            printf("??????!!! \n");
        }
        else {
            printf("%d \n", i);
        }
        i++;
    }
}


void new_func_05 () {
    int i = 0;
    do {
        // do?????????????
        printf("i:%d \n", i);
        i++;
    }
//    while (i <= 10);
    while (i); // ???????Σ??????????е?0????
}

//void new_func_06 () {
//    // ??ζ??????
//    int i = 0;
//    while (i) {
//        printf("%d \n", i);
//        i ++;
//    }
//}


void new_func_07 () {
    int i = 100;
    while (i <= 999) {
        int c = i/100; // ??λ??
        int b = (i - c*100)/10; // ?λ??
        int a = i%(10*c + b); // ??λ??
        int f = (int)(pow(a, 3) + pow(b, 3) + pow(c, 3));
        if (i == f) {
            printf("i:%d???????? \n", i);
        }
        i++;
    }
}

void new_func_08 () {
    int i = 100;
    do {
        int a = i % 10; //??λ??
        int b = i / 10 % 10; //?λ??
        int c = i / 100; //??λ??
        int f = (int)(pow(a, 3) + pow(b, 3) + pow(c, 3));
        if (f == i) {
            printf("%d ???????? \n", i);
        }
        i++;
    } while (i <= 999);
}


void new_func_09 () {
    // ?????????д
//    int i = 0;
//    for (;;) {
//        if (i >= 10) {
//            break;
//        }
//        printf("%d\n", i);
//        i++;
//    }


    // 产生随机数
    // 1.添加随机数种子
    srand((unsigned int)time(NULL));

    for (;;) {
        int num;
        int value = rand() % 10;
        printf("请输入一个数:\n");
        scanf("%d", &num);

        if (num < value) {
            printf("你输入的数小了:%d \n", value);
        }
        else if (num > value) {
            printf("你输入的数大了:%d \n", value);
        }
        else {
            printf("恭喜您，猜对了!!!:%d \n", value);
            break;
        }
    }
}


void new_func_10 () {
    // 1.添加随机数种子
    srand((unsigned int)time(NULL));

    for (;;) {
        char player;
        char *you;
        int cup = rand() % 2;
        printf("请出牌:a 剪刀, b石头 c布 d退出游戏\n");
        scanf("%c%*c", &player);
        switch (player) {
            case 'a':
                player = 3;
                you = "剪刀";
                printf("%d \n", player);
                break;
            case 'b':
                player = 5;
                you = "石头";
                printf("%d \n", player);
                break;
            case 'c':
                player = 7;
                you = "布";
                printf("%d \n", player);
                break;
            case 'd':
                player = 0;
                break;
            default:
                printf("您的输入有误请重新输入! \n");
                break;
        }

        if (player == 0) {
            printf("您已退出游戏! \n");
            break;
        }
        else {
            int result = player + cup;
            char *c;
            switch (cup) {
                case 0:
                    c = "剪刀";
                    break;
                case 1:
                    c = "石头";
                    break;
                case 2:
                    c = "布";
                    break;
            }
            printf("您出的是%s \n", you);
            printf("电脑出的是%s \n", c);

            if (result==5 || result==8) {
                printf("恭喜你赢了!!! \n");
            }
            else if (result == 4 || result == 7) {
                printf("你输了,再接再厉!!! \n");
            }
            else {
                printf("平局! \n");
            }
        }
    }
}

/*
new_func_09
new_func_10
new_func_11
new_func_12
new_func_13
new_func_14
new_func_15
new_func_16
new_func_17
new_func_18
new_func_19
new_func_20
*/
