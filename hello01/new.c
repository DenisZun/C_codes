#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>

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

void new_func_11 () {

// 1.打印直角三角形
//    for (int i = 1; i <= 10; ++i) {
//        for (int j = 1; j <= i; ++j) {
//            printf("*");
//        }
//        printf("\n");
//    }

// 2.打印到三角形
// 外圈控制行数
// 内圈控制星花数
//    for (int i = 1; i <= 10; ++i) {
//        for (int j = 1; j <= 10 - i; ++j) {
//            printf("*");
//        }
//        printf("\n");
//    }


// 3.打印等腰三角形(头朝上)
//    for (int i = 1; i <= 10 ; ++i) {
//        for (int j = 1; j <= 10 -i ; ++j) {
//            printf(" ");
//        }
//        for (int k = 1; k <= 2*i- 1 ; ++k) {
//            printf("*");
//        }
//        printf("\n");
//    }


// 4.打印等腰三角形(头朝下)
//    for (int i = 1; i <= 10 ; ++i) {
//        for (int j = 1; j <= i-1; ++j) {
//            printf(" ");
//        }
//        for (int k = 1; k <= 2*10 - 2*i +1; ++k) {
//            printf("*");
//        }
//        printf("\n");
//    }

// 5.打印矩形
//    for (int i = 1; i < 10; ++i) {
//        for (int j = 1; j < 10; ++j) {
//            printf("*");
//        }
//        printf("\n");
//    }


// 6.打印平行四边形
//    for (int i = 1; i < 10; ++i) {
//        for (int k = 1; k < 10-i; ++k) {
//            printf(" ");
//        }
//        for (int j = 1; j < 10; ++j) {
//            printf("*");
//        }
//        printf("\n");
//    }
}

void new_func_12() {
//    int line = 0;  //上半部分行数
//    int i = 0;
//    int j = 0;
//    int n = 0;
//    scanf("%d", &line);
//    for (i = 0; i < line; i++)
//    {
//        for (n = 0; n < line - 1 - i; n++)
//        {
//            printf(" ");
//        }
//        for (j = 0; j < 2 * i+1; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    for (i = 0; i < line - 1; i++)
//    {
//        for (n = 0; n < i + 1; n++)
//        {
//            printf(" ");
//        }
//        for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }

    int num;
    printf("请选择行数: \n");
    scanf("%d", &num);

    for (int i = 0; i <= num; ++i) {
        for (int j = 0; j <= num - i; ++j) {
            printf(" ");
        }
        for (int k = 0; k < 2*i -1; ++k) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i <= num -1; ++i) {
        for (int j = 0; j <= i+1; ++j) {
            printf(" ");
        }
        for (int k = 0; k < 2*(num - i -1) -1; ++k) {
            printf("*");
        }
        printf("\n");
    }
}

void new_func_13 () {
    int num1 = 0;
    int num2 = 0;
    for (int i = 1; i <= 100 ; ++i) {

        if (i % 2 != 0)
            num1 += -i;
        else
            num2 += i;

//        if (i % 2 != 0) {
//            int a = -1 * i;
//            printf("%d \n", a);
//        }
//        else {
//            int b = i;
//            printf("%d \n", b);
//        }
//        c += i;  // 求前十项和
    }
    printf("num1:%d \n", num1);
    printf("num2:%d \n", num2);
    int sum = num1 + num2;
    printf("和为:%d", sum);
//    printf("c:%d \n", c);
}

void new_func_14 () {
    for (int i = 1; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            for (int k = 0; k < 10; ++k) {
                if (i!=j && i!=k && j!=k) {
                    printf("%d%d%d \n", i, j, k);
                }
            }
        }
    }
}

void get_time () {
    // 时钟计时器
    for (int i = 0; i <= 24; ++i) {
        for (int j = 0; j < 60; ++j) {
            for (int k = 0; k < 60; ++k) {
                system("cls"); // 苍老师清屏
                printf("%02d : %02d : %02d \n", i, j, k);
                Sleep(960);  // 相当于python的time.sleep()
            }
        }
    }
}

void new_func_15 () {
    // 九九乘法表
    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("%d*%d=%d \t", j, i, i*j);
        }
        printf("\n");
    }
}

void new_func_16 () {
    printf("FUCK YOU 1 !!! \n");
    printf("FUCK YOU 2 !!! \n");
    goto FLAG;
    printf("FUCK YOU 3 !!! \n");
    printf("FUCK YOU 4 !!! \n");
    FLAG:
    printf("FUCK YOU 5 !!! \n");
    printf("FUCK YOU 6 !!! \n");
}

void new_func_17 () {
    // 循环之间的跳转,尽量不要在函数中跳转,因为是基于模块法开发
    int i = 0, j= 0;

    for (i = 0; i < 10; ++i) {
        if (i == 5) {
            goto FLAG;
        }
        printf("i=%d \n", i);
    }
    for (j = 0; j < 10; ++j) {
        FLAG:
        printf("j=%d \n", j);
    }
}

void new_func_18 () {
    // 比较高级的死循环
    FLAG:
        printf("hello world !!! \n");
    goto FLAG;
}

/*
new_func_19
new_func_20
new_func_21
new_func_22
new_func_23
new_func_24
new_func_25
new_func_26
new_func_27
new_func_28
new_func_29
new_func_30
*/
