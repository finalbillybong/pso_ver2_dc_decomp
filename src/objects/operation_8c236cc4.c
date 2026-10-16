typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c339628 S_L8c339628;
typedef struct S_L8c510b20 S_L8c510b20;
typedef struct S_L8c510b80 S_L8c510b80;
struct S_L8c510b80 {
    float f00;
    float f04;
    float f08;
    int f0c;
    char unknown10[0x2];
    short f12;
    char unknown14[0x4];
    char f18;
};
struct S_L8c510b20 {
    int f00;
    int f04;
};
struct S_L8c339628 {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
    int f14;
    int f18;
    int f1c;
    int f20;
};
extern int g_8c510b28;
extern S_L8c339628 g_8c339628;
extern S_L8c510b20 g_8c510b20;
extern S_L8c510b80 g_8c510b80;
extern char g_8c339668[];
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
extern int call_8c118528(void *);
void operation_8c236cc4(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    (&g_8c510b80)->f12 = 1;
    (&g_8c510b80)->f00 = 63.0f;
    (&g_8c510b80)->f04 = 0.0f;
    (&g_8c510b80)->f08 = 63.0f;
    (&g_8c510b80)->f0c = 0;
    (&g_8c510b80)->f18 = 0;
    (&g_8c510b20)->f00 = 0;
    (&g_8c510b20)->f04 = 0;
    t1 = call_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 5, (void *)((void *)0x8c3395ec), 0, 0, 0);
    }
    g_8c510b28 = (int)(t1);
    t2 = call_8c118528((void *)((g_8c339668 + 0x78)));
    (&g_8c339628)->f00 = (int)(t2);
    t3 = call_8c118528((void *)((g_8c339668 + 0x86)));
    (&g_8c339628)->f04 = (int)(t3);
    t4 = call_8c118528((void *)((g_8c339668 + 0x94)));
    (&g_8c339628)->f08 = (int)(t4);
    t5 = call_8c118528((void *)((g_8c339668 + 0xa1)));
    (&g_8c339628)->f0c = (int)(t5);
    t6 = call_8c118528((void *)((g_8c339668 + 0xaf)));
    (&g_8c339628)->f10 = (int)(t6);
    t7 = call_8c118528((void *)((g_8c339668 + 0xc6)));
    (&g_8c339628)->f14 = (int)(t7);
    t8 = call_8c118528((void *)((g_8c339668 + 0xdf)));
    (&g_8c339628)->f18 = (int)(t8);
    t9 = call_8c118528((void *)((g_8c339668 + 0xed)));
    (&g_8c339628)->f1c = (int)(t9);
    t10 = call_8c118528((void *)((g_8c339668 + 0x102)));
    (&g_8c339628)->f20 = (int)(t10);
}
