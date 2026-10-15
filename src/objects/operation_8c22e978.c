typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_44 S_g8c467180_44;
typedef struct Object Object;
struct Object {
    char unknown0[0x8c];
    int f8c;
    char unknown90[0x4];
    int f94;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct S_g8c467180 {
    char unknown0[0x44];
    S_g8c467180_44 *f44;
};
struct S_g8c467180_44 {
    int f00;
};
struct Frame {
    Block8 f00;
    Block8 f08;
};
extern Block8 g_8c3384c4;
extern Block8 g_8c3384cc;
extern S_g8c467180 *g_8c467180;
extern S_L8c41cba0 g_8c41cba0;
extern int operation_8c220ce0(void);
extern void clear_global_8c22fff0(void);
extern int operation_8c220b34(int, int);
extern void operation_8c220be8(int, int);
void operation_8c22e978(Object *o)
{
    Frame frame;
    char *v22;
    int t1;
    int t2;
    if (o->f8c != 0) {
        t1 = operation_8c220ce0();
        if (t1 == 0) {
            return;
        }
    }
    if ((((&g_8c41cba0)->f28 & 4)) == 0 && (((&g_8c41cba0)->f28 & 2)) == 0) {
        return;
    }
    clear_global_8c22fff0();
    v22 = (char *)g_8c467180->f44->f00;
    if (o->f8c == 0) {
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c3384c4;
        *(Block8 *)&(&frame)->f08 = *(Block8 *)&g_8c3384cc;
        t2 = operation_8c220b34((int)(&frame), (int)(&(&frame)->f08));
        o->f8c = (int)(t2);
    }
    operation_8c220be8((int)(v22), 0x81);
    o->f94 = 4;
}
