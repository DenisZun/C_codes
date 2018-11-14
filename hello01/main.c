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
    printf("请输入一个数:");
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
    printf("请选择您的幸运数字:\n");
    scanf("%d", &a);
    switch (a){
        case 1:printf("%d:你印堂发黑,三天之内必有血光之灾\n", a);
            break;
        case 2:printf("%d:我看你肾虚是不是撸管撸多了\n", a);
            break;
        case 3:printf("%d:看你玉树临风,风流倜傥,告诉你个秘密哦,有妹子暗恋你\n", a);
            break;
        case 4:printf("%d:还是不长记性,难道就不知道'年少不知精珍贵,老来望逼空流泪'吗?\n", a);
            break;
        case 5:printf("%d:我看你很寂寞,别憋着,叫个鸡玩玩\n", a);
            break;
        case 6:printf("%d:别找老婆了,一看那你这叼样就是怕老婆的命\n", a);
            break;
        default:printf("%d:你傻逼啊,连这都输错\n", a);
    }
}

void func4() {
    int a = 10;
    int b = 999999;
    int c = 1000;
    char e[] = "傻逼";
    int ab_Max = (a>b)?a:b;
    int d = (ab_Max>c)?ab_Max:c;
    printf("d is %d\n", d);
    printf("e:%s", e);
}

void func5() {
    int a;
    printf("你傻吗:\n");
    scanf("%d\n", &a);
    printf("a:%d\n", a);
    bool c = (a==1)?true:false;
//    char d[] = (c==true)?"傻逼":"智障";
    if (c == true) {
        char d[] = "傻逼";
        printf("你是%s\n", d);
    } else{
        char d[] = "智障";
        printf("你是%s\n", d);
    }
}

void func6() {
    int len;
//    char you[4] = {'傻', '逼', '\0'};
    char u[] = "傻逼";
    printf("你是:%s", u);
    len = strlen(u);
    printf("傻逼的长度为:%d", len);
}

void func7() {
    char a[] = "你是";
    char b[] = "傻逼";

//    strcpy(a, b); // 两个都是傻逼
//    printf("a:%s, b:%s", a, b);

    strcat(a ,b);
    printf("a:%s", a); // a你是傻逼
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
    /* 局部变量定义 */
    int i, j;

    for(i=2; i<100; i++) {
        for(j=2; j <= (i/j); j++)
            if(!(i%j)) break; // 如果找到，则不是质数
        if(j > (i/j)) printf("%d 是质数\n", i);
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
    // 利用for 循环打印三角形
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
    // 九九乘法表
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
    // 生成随机数
    int x;
    srand(time(NULL));
    x = 0+(rand() % 3);
    printf("%d",x);
    return x;
}

int game () {
    // C猜拳小小游戏
    char gamer; // 玩家出招
    int cup; // 电脑出招
    int result; // 游戏结果
    printf("这是一个猜拳的小游戏\n");
    while (1) {
        printf("请输入您的出招：\n");
        printf("A:剪刀\nB:石头\nC:布\nD:不玩了\n");
        scanf("%c%*c", &gamer);
        switch (gamer) {
            // 剪刀
            case 'a': gamer = 4;break;
            //石头
            case 'b': gamer = 7;break;
            //布
            case 'c': gamer = 10;break;
            //退出,不玩了
            case 'd': return 0;
            default:
                printf("你的选择为 %c 选择错误,退出...\n",gamer);
                getchar();
                system("cls");
                return 0;
        }
        srand((unsigned)time(NULL));
        cup = rand()%3;
        result = (int)gamer + cup;
        printf("电脑出招");
        switch (cup) {
            case 0:printf("剪刀\n");
            case 1:printf("石头\n");
            case 2:printf("布\n");
        }
        printf("您出的是: ");
        switch (gamer) {
            case 4:printf("剪刀\n");
            case 7:printf("石头\n");
            case 10:printf("布\n");
        }
        if (result==6||result==7||result==11) printf("您赢了!!!!\n\n\n");
        else if (result==5||result==9||result==10) printf("您输了\n\n\n\n");
        else printf("平局\n\n\n\n");
    }
}

//C语言函数
void swap (int x, int y) {
    // x与y对应的值只在这个函数内互换
    int temp;
    printf("x:%d, y:%d\n", x, y);
    temp = x;
    x = y;
    y = temp;
    printf("x:%d, y:%d\n", x, y);
}

void func_aa () {
    // 不影响函数内的实际参数
    int a=10, b=5;
    // 这是全局变量
    printf("a:%d, b:%d\n", a, b);
    // 函数内的形参是全局变量
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

    // c语言中 ++,--的先后关系
    int i=5, j=5, p, q;

    //    5       6       7     = 18
    p = (i++) + (i++) + (i++);

    //    6       7       8     = 21
    q = (++j) + (++j) + (++j);

    printf("%d\n", p);
    printf("%d\n", q);
}

void foo_12 () {
    //getchar 函数只能接受单个字符，输入数字也按字符处理。输入多于一个字符时，只接收第一个字符
    char c;
    printf("请随便输入:\n");

    // 第一种写法
    c = getchar();
    putchar(c);

    // 第二种写法
    putchar(getchar());
    printf("%c", getchar());
}

void foo_13 () {
    // 变量类型强制转换
//    int e, j;
//    float f = 5.74;
//    char c = 'A';  // A对应的ascii值为65
//    e = (int)f;
//    j = (int)c;
//    printf("%f, %d", f, e);
//    printf("%d", c);

    // 变量强转类型实例
    unsigned a, b, x;
    int i, j;
    a = 65535;
    x = 65536;
    i = -1;
    j = a;
    b = i;
    printf("(unsigned)%u→(int)%d\n",a,j);
    printf("(int)%d→(unsigned)%u\n",i,b);
    printf("(unsigned)%u→(int)%d\n", x, x);
}



