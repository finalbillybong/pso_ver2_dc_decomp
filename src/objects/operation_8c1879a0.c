typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c319bf8 S_g8c319bf8;
typedef struct Block_frame_0 {
    int f00;
    int f04;
    int f08;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
    int f0c;
    char unknown10[0x1c];
};
extern Vector3 g_8c319c20;
extern int g_8c41cd20;
extern int g_8c467188;
extern int g_8c4dbc20;
extern int g_8c4dbc24;
extern int g_8c4dbc28;
extern int g_8c4dc5a0;
extern int g_8c510ba0;
extern char g_8c319c2c[];
extern void call_8c1a80d4(void *);
extern int call_8c104e9c(void *);
extern void call_8c03ef04(void *, void *, void *);
extern void operation_8c1a81a0(void);
void operation_8c1879a0(void)
{
    Frame frame;
    int v5;
    int v4;
    int v6;
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
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    if (g_8c4dc5a0 < 0 || g_8c4dc5a0 > 9) {
        g_8c4dc5a0 = 0;
    } else {
    }
    v4 = (int)g_8c467188;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c319c20;
    v5 = (int)(g_8c510ba0 != 0);
    if (v5 != 0) {
        v6 = (int)(&frame)->f00.f04;
    } else {
        if (g_8c41cd20 != 0) {
            v6 = (int)(&frame)->f00.f08;
        } else {
            v6 = (int)(&frame)->f00.f00;
        }
    }
    call_8c1a80d4((void *)((g_8c319c2c + 0x86)));
    switch (v4) {
    case 0:
        t1 = call_8c104e9c((void *)((g_8c319c2c + 0x9a)));
        g_8c4dbc20 = (int)(t1);
        call_8c03ef04((void *)(&(&frame)->f0c), (void *)(*(S_g8c319bf8 **)((char *)0x8c319bf8 + (g_8c4dc5a0 << 2))), (void *)((g_8c319c2c + 0xaf)));
        t2 = call_8c104e9c((void *)(&(&frame)->f0c));
        g_8c4dbc24 = (int)(t2);
        call_8c03ef04((void *)(&(&frame)->f0c), (void *)((g_8c319c2c + 0xbc)), (void *)v6);
        t3 = call_8c104e9c((void *)(&(&frame)->f0c));
        g_8c4dbc28 = (int)(t3);
        break;
    case 1:
        t4 = call_8c104e9c((void *)((g_8c319c2c + 0xcd)));
        g_8c4dbc20 = (int)(t4);
        call_8c03ef04((void *)(&(&frame)->f0c), (void *)(*(S_g8c319bf8 **)((char *)0x8c319bf8 + (g_8c4dc5a0 << 2))), (void *)((g_8c319c2c + 0xe1)));
        t5 = call_8c104e9c((void *)(&(&frame)->f0c));
        g_8c4dbc24 = (int)(t5);
        call_8c03ef04((void *)(&(&frame)->f0c), (void *)((g_8c319c2c + 0xed)), (void *)v6);
        t6 = call_8c104e9c((void *)(&(&frame)->f0c));
        g_8c4dbc28 = (int)(t6);
        break;
    case 2:
        t7 = call_8c104e9c((void *)((g_8c319c2c + 0xfd)));
        g_8c4dbc20 = (int)(t7);
        call_8c03ef04((void *)(&(&frame)->f0c), (void *)(*(S_g8c319bf8 **)((char *)0x8c319bf8 + (g_8c4dc5a0 << 2))), (void *)((g_8c319c2c + 0x110)));
        t8 = call_8c104e9c((void *)(&(&frame)->f0c));
        g_8c4dbc24 = (int)(t8);
        call_8c03ef04((void *)(&(&frame)->f0c), (void *)((g_8c319c2c + 0x11b)), (void *)v6);
        t9 = call_8c104e9c((void *)(&(&frame)->f0c));
        g_8c4dbc28 = (int)(t9);
        break;
    case 3:
        t10 = call_8c104e9c((void *)((g_8c319c2c + 0x12a)));
        g_8c4dbc20 = (int)(t10);
        call_8c03ef04((void *)(&(&frame)->f0c), (void *)(*(S_g8c319bf8 **)((char *)0x8c319bf8 + (g_8c4dc5a0 << 2))), (void *)((g_8c319c2c + 0x13d)));
        t11 = call_8c104e9c((void *)(&(&frame)->f0c));
        g_8c4dbc24 = (int)(t11);
        call_8c03ef04((void *)(&(&frame)->f0c), (void *)((g_8c319c2c + 0x148)), (void *)v6);
        t12 = call_8c104e9c((void *)(&(&frame)->f0c));
        g_8c4dbc28 = (int)(t12);
        break;
    case 4:
        t13 = call_8c104e9c((void *)((g_8c319c2c + 0x157)));
        g_8c4dbc20 = (int)(t13);
        call_8c03ef04((void *)(&(&frame)->f0c), (void *)(*(S_g8c319bf8 **)((char *)0x8c319bf8 + (g_8c4dc5a0 << 2))), (void *)((g_8c319c2c + 0x16b)));
        t14 = call_8c104e9c((void *)(&(&frame)->f0c));
        g_8c4dbc24 = (int)(t14);
        call_8c03ef04((void *)(&(&frame)->f0c), (void *)((g_8c319c2c + 0x177)), (void *)v6);
        t15 = call_8c104e9c((void *)(&(&frame)->f0c));
        g_8c4dbc28 = (int)(t15);
    }
    operation_8c1a81a0();
}
