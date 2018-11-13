#include <stdio.h>
#include <math.h>

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
            printf("你是傻逼!\n");
            break;
        case 2:
            printf("你是大傻逼!\n");
            break;
        case 3:
            printf("傻逼傻逼傻逼\n");
            break;
        default:
            printf("你才不是傻逼......才怪");
            break;
    }
}

void new_func_02 () {
    int a, b, c;

    printf("请输入三个数:\n");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b) {
        if (a > c) {
            printf("a:%d最大", a);
        }
        else {
            printf("c:%d最大", c);
        }
    }
    else {
        if (b > c) {
            printf("b:%d最大", b);
        }
        else {
            printf("c:%d最大", c);
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
    // 带7或7的倍数敲桌子
    int i = 1;

    while (i < 100) {
        if (i%7 == 0 || i%10 == 7 || i/10 == 7) {
            printf("敲桌子!!! \n");
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
        // do的条件可能为假
        printf("i:%d \n", i);
        i++;
    }
//    while (i <= 10);
    while (i); // 执行无限次，数据溢出执行到0结束
}

//void new_func_06 () {
//    // 一次都不执行
//    int i = 0;
//    while (i) {
//        printf("%d \n", i);
//        i ++;
//    }
//}


void new_func_07 () {
    int i = 100;
    while (i <= 999) {
        int c = i/100; // 百位数
        int b = (i - c*100)/10; // 十位数
        int a = i%(10*c + b); // 个位数
        int f = (int)(pow(a, 3) + pow(b, 3) + pow(c, 3));
        if (i == f) {
            printf("i:%d是水仙花数 \n", i);
        }
        i++;
    }
}

void new_func_08 () {
    int i = 100;
    do {
        int a = i % 10; //个位数
        int b = i / 10 % 10; //十位数
        int c = i / 100; //百位数
        int f = (int)(pow(a, 3) + pow(b, 3) + pow(c, 3));
        if (f == i) {
            printf("%d 是水仙花数 \n", i);
        }
        i++;
    } while (i <= 999);
}


void new_func_09 () {
    // 也可以这样写
    int i = 0;
    for (;;) {
        if (i >= 10) {
            break;
        }
        printf("%d\n", i);
        i++;
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
