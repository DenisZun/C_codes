#include <stdio.h>
//#define PI 3.14150926

void circle () {
    const float pi = 3.14159;
    float r = 3.4;
    float s = pi * r * r;
    float l = pi * 2 * r;
    unsigned int a = 10; // �޷������ζ���ɸ��������� 4294967286 ����ʱ�쳣
//    float s = PI * r * r;
//    float l = PI * 2 * r;
//    printf("a:%u \n", a);
    printf("Բ�����Ϊ:%.2f \n", s);
    printf("Բ���ܳ�Ϊ:%.2f \n", l);
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


//�����ֽ���Ϊ:4
//�������ֽ���Ϊ:2
//�������ֽ���Ϊ:4
//�����ȸ������ֽ���Ϊ:4
//˫���ȸ������ֽ���Ϊ:8

void size() {
    int a = 1000;
    unsigned int len0 = sizeof(a);
    unsigned int len1 = sizeof(int);
    unsigned int len2 = sizeof(short);
    unsigned int len3 = sizeof(long);
    unsigned int len4 = sizeof(float);
    unsigned int len5 = sizeof(double);
    printf("a�ֽ���Ϊ:%u \n", len0);
    printf("�����ֽ���Ϊ:%u \n", len1);
    printf("�������ֽ���Ϊ:%u \n", len2);
    printf("�������ֽ���Ϊ:%u \n", len3);
    printf("�����ȸ������ֽ���Ϊ:%u \n", len4);
    printf("˫���ȸ������ֽ���Ϊ:%u \n", len5);
}

void str() {
    char ch = 'a';
    char ch1 = '0';
    // ��ӡ�ַ��ͱ���
    printf("%c \n", ch);
    printf("%d \n", ch);
    printf("%d \n", ch1);
    printf("\"���㰡,���!!!\"\n");  // ��˫���Ž���ת��
    printf("%%d \n"); // ��ӡ�ٷֺ�
    unsigned int len = sizeof(ch);
    printf("�ַ����ֽ���Ϊ:%u \n", len);
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
        ��ѧ������
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
    printf("%c\n", ch2); // �򲻳���,�����ַ�,�޷�����
    printf("%d\n", ch2);
}

void over () {
    // �������
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
    // ��������
    extern int a;
    volatile mum;
//    register n = 1;
//    printf("%d", n);  // �˷ѼĴ����ռ�
}

void input() {
    // 1.�ַ���ָ����ʽ
    char a = 'a';
    char * b = "hello world"; // ��ʾ���һ���ַ���
    char * c = "hello \0 world";
//    printf("%s \n", b);
//    printf("%s \n", c);

    // 2.�����ʾ��
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
    printf("===%5d=== \n", a); //���С�ڸ���������Զ���䣬��������������
    printf("===%5d=== \n", b);
    printf("===%05d=== \n", b);
    printf("===%7.2f=== \n", c); // 7��ʾ����Ŀ��
}

void input02 () {
    char ch = 'a';
    // ��������ַ������������֣�ת���ַ�
    putchar(ch); // ��ͨ���һ���ַ���printf()�ṹ�����һ���ַ�
    putchar('B');
    putchar(97); // a
    putchar('\n'); // ���ת���ַ�
}

void input03 () {
    char ch;
    ch = getchar(); // ����һ���ַ�
    putchar(ch);
}

void foo1() {
    int a = 1;
//    int b = ++a * 10; // ��������ֵ�����仯������
    int c = a++ * 10;
    printf("a:%d \n", a); // �����㣬��ֵ�����仯
//    printf("%d\n", b);
    printf("%d\n", c);
}