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
    while (i); // ???????��??????????��?0????
}

//void new_func_06 () {
//    // ??��??????
//    int i = 0;
//    while (i) {
//        printf("%d \n", i);
//        i ++;
//    }
//}


void new_func_07 () {
    int i = 100;
    while (i <= 999) {
        int c = i/100; // ??��??
        int b = (i - c*100)/10; // ?��??
        int a = i%(10*c + b); // ??��??
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
        int a = i % 10; //??��??
        int b = i / 10 % 10; //?��??
        int c = i / 100; //??��??
        int f = (int)(pow(a, 3) + pow(b, 3) + pow(c, 3));
        if (f == i) {
            printf("%d ???????? \n", i);
        }
        i++;
    } while (i <= 999);
}


void new_func_09 () {
    // ?????????��
//    int i = 0;
//    for (;;) {
//        if (i >= 10) {
//            break;
//        }
//        printf("%d\n", i);
//        i++;
//    }


    // ���������
    // 1.������������
    srand((unsigned int)time(NULL));

    for (;;) {
        int num;
        int value = rand() % 10;
        printf("������һ����:\n");
        scanf("%d", &num);

        if (num < value) {
            printf("���������С��:%d \n", value);
        }
        else if (num > value) {
            printf("�������������:%d \n", value);
        }
        else {
            printf("��ϲ�����¶���!!!:%d \n", value);
            break;
        }
    }
}


void new_func_10 () {
    // 1.������������
    srand((unsigned int)time(NULL));

    for (;;) {
        char player;
        char *you;
        int cup = rand() % 2;
        printf("�����:a ����, bʯͷ c�� d�˳���Ϸ\n");
        scanf("%c%*c", &player);
        switch (player) {
            case 'a':
                player = 3;
                you = "����";
                printf("%d \n", player);
                break;
            case 'b':
                player = 5;
                you = "ʯͷ";
                printf("%d \n", player);
                break;
            case 'c':
                player = 7;
                you = "��";
                printf("%d \n", player);
                break;
            case 'd':
                player = 0;
                break;
            default:
                printf("����������������������! \n");
                break;
        }

        if (player == 0) {
            printf("�����˳���Ϸ! \n");
            break;
        }
        else {
            int result = player + cup;
            char *c;
            switch (cup) {
                case 0:
                    c = "����";
                    break;
                case 1:
                    c = "ʯͷ";
                    break;
                case 2:
                    c = "��";
                    break;
            }
            printf("��������%s \n", you);
            printf("���Գ�����%s \n", c);

            if (result==5 || result==8) {
                printf("��ϲ��Ӯ��!!! \n");
            }
            else if (result == 4 || result == 7) {
                printf("������,�ٽ�����!!! \n");
            }
            else {
                printf("ƽ��! \n");
            }
        }
    }
}

void new_func_11 () {

// 1.��ӡֱ��������
//    for (int i = 1; i <= 10; ++i) {
//        for (int j = 1; j <= i; ++j) {
//            printf("*");
//        }
//        printf("\n");
//    }

// 2.��ӡ��������
// ��Ȧ��������
// ��Ȧ�����ǻ���
//    for (int i = 1; i <= 10; ++i) {
//        for (int j = 1; j <= 10 - i; ++j) {
//            printf("*");
//        }
//        printf("\n");
//    }


// 3.��ӡ����������(ͷ����)
//    for (int i = 1; i <= 10 ; ++i) {
//        for (int j = 1; j <= 10 -i ; ++j) {
//            printf(" ");
//        }
//        for (int k = 1; k <= 2*i- 1 ; ++k) {
//            printf("*");
//        }
//        printf("\n");
//    }


// 4.��ӡ����������(ͷ����)
//    for (int i = 1; i <= 10 ; ++i) {
//        for (int j = 1; j <= i-1; ++j) {
//            printf(" ");
//        }
//        for (int k = 1; k <= 2*10 - 2*i +1; ++k) {
//            printf("*");
//        }
//        printf("\n");
//    }

// 5.��ӡ����
//    for (int i = 1; i < 10; ++i) {
//        for (int j = 1; j < 10; ++j) {
//            printf("*");
//        }
//        printf("\n");
//    }


// 6.��ӡƽ���ı���
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
//    int line = 0;  //�ϰ벿������
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
    printf("��ѡ������: \n");
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
//        c += i;  // ��ǰʮ���
    }
    printf("num1:%d \n", num1);
    printf("num2:%d \n", num2);
    int sum = num1 + num2;
    printf("��Ϊ:%d", sum);
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
    // ʱ�Ӽ�ʱ��
    for (int i = 0; i <= 24; ++i) {
        for (int j = 0; j < 60; ++j) {
            for (int k = 0; k < 60; ++k) {
                system("cls"); // ����ʦ����
                printf("%02d : %02d : %02d \n", i, j, k);
                Sleep(960);  // �൱��python��time.sleep()
            }
        }
    }
}

void new_func_15 () {
    // �žų˷���
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
    // ѭ��֮�����ת,������Ҫ�ں�������ת,��Ϊ�ǻ���ģ�鷨����
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
    // �Ƚϸ߼�����ѭ��
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
