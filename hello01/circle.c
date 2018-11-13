#include <stdio.h>
//#define PI 3.14150926

void circle () {
    const float pi = 3.14159;
    float r = 3.4;
    float s = pi * r * r;
    float l = pi * 2 * r;
    unsigned int a = 10; // 无符号整形定义成负数会乱码 4294967286 运行时异常
//    float s = PI * r * r;
//    float l = PI * 2 * r;
//    printf("a:%u \n", a);
    printf("圆的面积为:%.2f \n", s);
    printf("圆的周长为:%.2f \n", l);
}

void foo16_8 () {
    int a , b, c;
    a = 10, b = 0226, c = 0x123;
    printf("%o\n", a);
    printf("%x\n", a);
    printf("%X\n", a);
    printf("%d\n", b);
    printf("%d", c);
}

void num01 () {
    int a = 10;
    float b = 3.123443;
    double c = 3.14159267;
    short d = 10;
    printf("size of a:%d, a:%d \n", sizeof(a), a);
    printf("size of d:%hd, d:%d \n", sizeof(d), d);
    printf("size of b:%d, b:%.2f \n", sizeof(b), b);
    printf("size of c:%d, c:%lf \n", sizeof(c), c);
}


//整形字节数为:4
//短整形字节数为:2
//长整形字节数为:4
//单精度浮点形字节数为:4
//双精度浮点形字节数为:8

void size() {
    int a = 1000;
    unsigned int len0 = sizeof(a);
    unsigned int len1 = sizeof(int);
    unsigned int len2 = sizeof(short);
    unsigned int len3 = sizeof(long);
    unsigned int len4 = sizeof(float);
    unsigned int len5 = sizeof(double);
    printf("a字节数为:%u \n", len0);
    printf("整形字节数为:%u \n", len1);
    printf("短整形字节数为:%u \n", len2);
    printf("长整形字节数为:%u \n", len3);
    printf("单精度浮点形字节数为:%u \n", len4);
    printf("双精度浮点形字节数为:%u \n", len5);
}

void str() {
    char ch = 'a';
    char ch1 = '0';
    // 打印字符型变量
    printf("%c \n", ch);
    printf("%d \n", ch);
    printf("%d \n", ch1);
    printf("\"叼你啊,憨鸠!!!\"\n");  // 对双引号进行转义
    printf("%%d \n"); // 打印百分号
    unsigned int len = sizeof(ch);
    printf("字符形字节数为:%u \n", len);
}

void flo () {
    float a = 3.14f;
    double b = 3.14;
    int c = 5;
    printf("%.2f \n", a);
    printf("%lf \n", b);
    printf("a : %p \n", &a);
    printf("b : %p \n", &b);
    printf("c : %p \n", &c);
    /*
        a : 0x0028FF0C
        b : 0x0028FF00
        c : 0x0028FEFC
     */
}

void sci_count () {
    /*
        科学计数法
    */
    float a = 3210.456f;
    float b = 3.2e-2f;
    printf("a: %e \n", a);
    printf("b: %f \n", b);
}

void count_data () {
    char ch1 = 97;
    char ch2 = 10;
    printf("%c\n", ch1);
    printf("%d\n", ch1);
    printf("%c\n", ch2); // 打不出来,控制字符,无法输入
    printf("%d\n", ch2);
}

void over () {
    // 数据溢出
//    unsigned int a = -1;
//    printf("%u", a); // 2^32 -1
    char ch = 127;
    ch += 2;
    printf("%d", ch);
}

void tri () {
    for (int i = 1; i < 10 ; ++i) {
        for (int j = 1; j < i; ++j) {
            printf("*");
        }
        printf("\n");
    }
}

void def_f1 () {
    // 声明变量
    extern int a;
    volatile mum;
//    register n = 1;
//    printf("%d", n);  // 浪费寄存器空间
}

void input() {
    // 1.字符串指针样式
    char a = 'a';
    char * b = "hello world"; // 表示输出一串字符串
    char * c = "hello \0 world";
//    printf("%s \n", b);
//    printf("%s \n", c);

    // 2.数组表示法
    char d[11] = "hello world";
//    printf("%s\n", d);
    char m[10];
    m[0] = 'a';
    m[1] = 'b';
    m[2] = 'c';
    m[3] = 'd';
//    printf("m:%s\n", m);
}

void input01() {
    int b = 12;
    int a = 1234567;
    float c = 3.141592;
    printf("===%5d=== \n", a); //如果小于给定宽度则自动填充，如果大于正常输出
    printf("===%5d=== \n", b);
    printf("===%05d=== \n", b);
    printf("===%7.2f=== \n", c); // 7表示整体的宽度
}

void input02 () {
    char ch = 'a';
    // 可以输出字符，变量，数字，转义字符
    putchar(ch); // 普通输出一个字符，printf()结构化输出一个字符
    putchar('B');
    putchar(97); // a
    putchar('\n'); // 输出转义字符
}

void input03 () {
    char ch;
    ch = getchar(); // 接受一个字符
    putchar(ch);
}

void foo1() {
    int a = 1;
//    int b = ++a * 10; // 先自增，值发生变化后运算
    int c = a++ * 10;
    printf("a:%d \n", a); // 先运算，后值发生变化
//    printf("%d\n", b);
    printf("%d\n", c);
}