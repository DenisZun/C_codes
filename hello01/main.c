#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define HENGTH 10
#define LENGTH 20

int main() {
    int foo;
    foo = HENGTH * LENGTH;
    printf("%d\n", foo);
    printf("Hello, World!\n");
//    func1();
//    func2();
//    func3();
//    func4();
//    func5();
//    func6();
//    func7();
//    func8();
//    func9();
//    func10();
//    func11();
//    fun12();
//    func13();
//    func14();
//    func15();
//    func16();
//    func01();
//    func03();
//    game();
//    func_aa();
//    foo_11();
//    foo_12();
//    foo_13();
//    circle();
//    foo16_8();
//    num01();
//    size();
//    str();
//    flo();
//    sci_count();
//    count_data();
//    over();
//    tri();
//    def_f1();
//    input();
//    input01();
//    input02();
//    input03();
//    foo1();
//    new_func_01();
//    new_func_02();
//    new_func_03();
//    new_func_04();
//    new_func_05();
//    new_func_06();
//    new_func_07();
//    new_func_08();
//    new_func_09();
//    new_func_10();
//    new_func_11();
//    new_func_12();
//    new_func_13();
//    new_func_14();
    get_time();
    return 0;
}

void func1() {
    int a = 10;
    if (a < 20) {
        printf("a:%d\n", a);
    } else{
        int b = 20;
        a = b;
        printf("a is %d", a);
    }
}

void func2() {
    int num;
    printf("������һ����:");
    scanf("%d", &num);
    if (num > 0) {
        if (num < 10) {
            printf("num is less than 10:%d\n", num);
            if (num % 2 == 0) {
                printf("num is odd num:%d\n", num);
            } else{
                printf("num is even num:%d\n", num);
            }
        } else{
            printf("num is %d\n", num);
        }
    } else{
        printf("error num:%d\n", num);
    }
}

void func3() {
    int a;
    printf("��ѡ��������������:\n");
    scanf("%d", &a);
    switch (a){
        case 1:printf("%d:��ӡ�÷���,����֮�ڱ���Ѫ��֮��\n", a);
            break;
        case 2:printf("%d:�ҿ��������ǲ���ߣ��ߣ����\n", a);
            break;
        case 3:printf("%d:���������ٷ�,��������,�����������Ŷ,�����Ӱ�����\n", a);
            break;
        case 4:printf("%d:���ǲ�������,�ѵ��Ͳ�֪��'���ٲ�֪�����,�������ƿ�����'��?\n", a);
            break;
        case 5:printf("%d:�ҿ���ܼ�į,�����,�и�������\n", a);
            break;
        case 6:printf("%d:����������,һ��������������������ŵ���\n", a);
            break;
        default:printf("%d:��ɵ�ư�,���ⶼ���\n", a);
    }
}

void func4() {
    int a = 10;
    int b = 999999;
    int c = 1000;
    char e[] = "ɵ��";
    int ab_Max = (a>b)?a:b;
    int d = (ab_Max>c)?ab_Max:c;
    printf("d is %d\n", d);
    printf("e:%s", e);
}

void func5() {
    int a;
    printf("��ɵ��:\n");
    scanf("%d\n", &a);
    printf("a:%d\n", a);
    bool c = (a==1)?true:false;
//    char d[] = (c==true)?"ɵ��":"����";
    if (c == true) {
        char d[] = "ɵ��";
        printf("����%s\n", d);
    } else{
        char d[] = "����";
        printf("����%s\n", d);
    }
}

void func6() {
    int len;
//    char you[4] = {'ɵ', '��', '\0'};
    char u[] = "ɵ��";
    printf("����:%s", u);
    len = strlen(u);
    printf("ɵ�Ƶĳ���Ϊ:%d", len);
}

void func7() {
    char a[] = "����";
    char b[] = "ɵ��";

//    strcpy(a, b); // ��������ɵ��
//    printf("a:%s, b:%s", a, b);

    strcat(a ,b);
    printf("a:%s", a); // a����ɵ��
}

int func8 () {
    int a = 10;
    while (a < 20) {
        printf("a is %d\n", a);
        a ++;
        if (a == 15) {
            break;
        }
    }
    return 0;
}

int func9 () {
    int a;
    for (a = 10;a < 30; a++) {
        printf("a is %d\n", a);
        if (a == 20) {
            break;
        }
    }
    return 0;
}

int func10 () {
    int a;
    a = 0;
    do{
        printf("a is %d\n", a);
        a ++;
    }
    while(a <= 30);
}

int func11 () {
    /* �ֲ��������� */
    int i, j;

    for(i=2; i<100; i++) {
        for(j=2; j <= (i/j); j++)
            if(!(i%j)) break; // ����ҵ�����������
        if(j > (i/j)) printf("%d ������\n", i);
    }
    return 0;
}

int fun12 () {
    int i=1, j;
    while (i <=5 ) {
        j = 1;
        while (j <= i) {
            printf("%d", j);
            j ++;
        }
        printf("\n");
        i ++;
    }
    return 0;
}

int func13 () {
    int i=1, j;
    do{
        j = 1;
        do {
            printf("*");
            j ++;
        }while (j <= i);
        i ++;
        printf("\n");
    } while (i <= 5);
}

int func14 () {
    // ����for ѭ����ӡ������
    int i, j;
    for (i=1;i<=10;i++) {
        for (j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int func15 () {
    // �žų˷���
    int i, j;
    for (i=1; i<=9; i++) {
        for (j=1; j<=i; j++) {
            printf("%d*%d=%d\t", j, i, i*j);
        }
        printf("\n");
    }
    return 0;
}

int func16 () {
    // ���������
    int x;
    srand(time(NULL));
    x = 0+(rand() % 3);
    printf("%d",x);
    return x;
}

int game () {
    // C��ȭСС��Ϸ
    char gamer; // ��ҳ���
    int cup; // ���Գ���
    int result; // ��Ϸ���
    printf("����һ����ȭ��С��Ϸ\n");
    while (1) {
        printf("���������ĳ��У�\n");
        printf("A:����\nB:ʯͷ\nC:��\nD:������\n");
        scanf("%c%*c", &gamer);
        switch (gamer) {
            // ����
            case 'a': gamer = 4;break;
            //ʯͷ
            case 'b': gamer = 7;break;
            //��
            case 'c': gamer = 10;break;
            //�˳�,������
            case 'd': return 0;
            default:
                printf("���ѡ��Ϊ %c ѡ�����,�˳�...\n",gamer);
                getchar();
                system("cls");
                return 0;
        }
        srand((unsigned)time(NULL));
        cup = rand()%3;
        result = (int)gamer + cup;
        printf("���Գ���");
        switch (cup) {
            case 0:printf("����\n");
            case 1:printf("ʯͷ\n");
            case 2:printf("��\n");
        }
        printf("��������: ");
        switch (gamer) {
            case 4:printf("����\n");
            case 7:printf("ʯͷ\n");
            case 10:printf("��\n");
        }
        if (result==6||result==7||result==11) printf("��Ӯ��!!!!\n\n\n");
        else if (result==5||result==9||result==10) printf("������\n\n\n\n");
        else printf("ƽ��\n\n\n\n");
    }
}

//C���Ժ���
void swap (int x, int y) {
    // x��y��Ӧ��ֵֻ����������ڻ���
    int temp;
    printf("x:%d, y:%d\n", x, y);
    temp = x;
    x = y;
    y = temp;
    printf("x:%d, y:%d\n", x, y);
}

void func_aa () {
    // ��Ӱ�캯���ڵ�ʵ�ʲ���
    int a=10, b=5;
    // ����ȫ�ֱ���
    printf("a:%d, b:%d\n", a, b);
    // �����ڵ��β���ȫ�ֱ���
    swap(a, b);
    printf("a:%d, b:%d\n", a, b);
}

void foo_11 () {
//    int i = 8;
//    printf("%d\n", ++i);
//    printf("%d\n", --i);
//    printf("%d\n", i++);
//    printf("%d\n", i--);
//    printf("%d\n", -i++);
//    printf("%d\n", -i--);

    // c������ ++,--���Ⱥ��ϵ
    int i=5, j=5, p, q;

    //    5       6       7     = 18
    p = (i++) + (i++) + (i++);

    //    6       7       8     = 21
    q = (++j) + (++j) + (++j);

    printf("%d\n", p);
    printf("%d\n", q);
}

void foo_12 () {
    //getchar ����ֻ�ܽ��ܵ����ַ�����������Ҳ���ַ������������һ���ַ�ʱ��ֻ���յ�һ���ַ�
    char c;
    printf("���������:\n");

    // ��һ��д��
    c = getchar();
    putchar(c);

    // �ڶ���д��
    putchar(getchar());
    printf("%c", getchar());
}

void foo_13 () {
    // ��������ǿ��ת��
//    int e, j;
//    float f = 5.74;
//    char c = 'A';  // A��Ӧ��asciiֵΪ65
//    e = (int)f;
//    j = (int)c;
//    printf("%f, %d", f, e);
//    printf("%d", c);

    // ����ǿת����ʵ��
    unsigned a, b, x;
    int i, j;
    a = 65535;
    x = 65536;
    i = -1;
    j = a;
    b = i;
    printf("(unsigned)%u��(int)%d\n",a,j);
    printf("(int)%d��(unsigned)%u\n",i,b);
    printf("(unsigned)%u��(int)%d\n", x, x);
}



