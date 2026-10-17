typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    int f24;
};
extern int g_8c46f560;
extern int g_8c575570;
extern void call_8c391c94(void);
extern void set_child_blend(void);
extern void call_8c38f6e8(int);
extern void call_8c38f740(void *, int);
extern void restore_child_blend(void);
extern void call_8c38f7f4(void);
extern void call_8c391cc4(void);
void operation_8c0773e4(Object *o)
{
    int v2;
    int v4;
    int v1;
    if (o->f24 != 0 && o->f20 != 0) {
        call_8c391c94();
        g_8c46f560 = (int)(g_8c575570);
        g_8c575570 |= 0x8000;
        set_child_blend();
        call_8c38f6e8(1);
        v4 = (int)0;
        v1 = (int)-1;
        goto L_8c077432;
        v2 = (int)0;
L_8c07741e:;
        call_8c38f740((void *)(&*(int *)((char *)((char *)o->f20 + 0x0) + (v2 << 5))), 4);
        v4 = (int)(v2 + 1);
L_8c077432:;
        v2 = (int)v4;
        if (((o->f24 >> 1) + v1) > v4) {
            goto L_8c07741e;
        }
        restore_child_blend();
        call_8c38f7f4();
        g_8c575570 = (int)(g_8c46f560);
        call_8c391cc4();
    }
}
