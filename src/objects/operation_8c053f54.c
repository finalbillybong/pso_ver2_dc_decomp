typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467240 S_g8c467240;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
};
struct S_g8c467240 {
    char unknown0[0x20];
    unsigned short f20;
};
extern int g_8c467870;
extern int g_8c467874;
extern int g_8c467878;
extern int g_8c46787c;
extern int call_8c18e768(int, int);
extern void call_8c12b77c(void *, void *, int);
unsigned short operation_8c053f54(Object *o)
{
    int v2;
    int v8;
    int v4;
    int v7;
    unsigned short v5;
    int t1;
    unsigned short v3;
    int v9;
    unsigned short v10;
    int v1;
    v1 = (int)g_8c467870;
    v2 = (int)0;
    v3 = (unsigned short)o->f20;
    v4 = (int)(v1 + -1);
    while (v2 < v4) {
        t1 = call_8c18e768((int)(v2 + v4), 2);
        if ((*(S_g8c467240 **)((char *)0x8c467240 + (t1 << 2)))->f20 < (unsigned int)(unsigned short)v3) {
            v2 = t1 + 1;
        } else {
            v4 = t1;
        }
    }
    v9 = (int)*(int *)((char *)0x8c467240 + (v2 << 2));
    if (v9 == (int)(o)) {
        call_8c12b77c((void *)(&*(int *)((char *)0x8c467240 + (v2 << 2))), (void *)(&*(int *)((char *)0x8c467240 + (v2 + 1 << 2))), (int)(v1 - (v2 + 1) << 2));
        g_8c467870 -= 1;
        v10 = (unsigned short)o->f20;
        if ((unsigned int)0x1000 > v10) {
            g_8c467874 -= 1;
        } else {
            if ((unsigned int)0x4000 > v10) {
                g_8c467878 -= 1;
            } else {
                g_8c46787c -= 1;
            }
        }
        *(int *)((char *)0x8c467240 + (g_8c467870 << 2)) = 0;
        return v3;
    }
    return 0xffff;
}
