typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_28_184 Arg0_28_184;
struct Object {
    char unknown0[0x24];
    int f24;
    Arg0_28 *f28;
    char unknown2c[0x4];
    int f30;
};
struct Arg0_28 {
    char unknown0[0x184];
    Arg0_28_184 *f184;
};
struct Arg0_28_184 {
    char unknown0[0x20];
    int f20;
};
struct Frame {
    Block8 f00;
};
extern Block8 g_8c31668c;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4db124;
extern int g_8c4db130;
extern int g_8c4db134;
extern int allocate_block(void *, unsigned int);
extern void initialize_selection_child(void *, void *, int, int, int);
extern void call_8c01d9dc(void);
extern void call_8c220b80(int, int);
void operation_8c15c4e0(Object *o)
{
    Frame frame;
    int v1;
    int v2;
    int v3;
    int t1;
    v1 = (int)g_8c4db124;
    if (v1 > 0) {
        v2 = (int)(0xf423f - o->f28->f184->f20);
        if (v1 > v2) {
            v3 = (int)v2;
        } else {
            v3 = (int)v1;
        }
        if (v3 > 0) {
            if (o->f30 == 0) {
                *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c31668c;
                t1 = allocate_block(g_8c4d97e0, (unsigned int)0x7c);
                if (t1 != 0) {
                    initialize_selection_child((void *)t1, (void *)(&frame), 1, v3, 1);
                }
                o->f30 = (int)(t1);
            }
            call_8c01d9dc();
            call_8c220b80(0x3e, 1);
            o->f24 = 0xc;
            return;
        }
        call_8c220b80(0x49, 1);
        g_8c4db130 = 0x45;
        g_8c4db134 = 2;
        o->f24 = 0x10;
        return;
    }
    call_8c220b80(0x3c, 1);
    g_8c4db130 = 0x45;
    g_8c4db134 = 2;
    o->f24 = 0x10;
}
