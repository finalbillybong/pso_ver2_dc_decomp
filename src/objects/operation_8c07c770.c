typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block20 {
    int words[5];
} Block20;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_e4 Arg0_e4;
typedef struct Arg0_ec Arg0_ec;
typedef struct S_x8656 S_x8656;
typedef struct Block_frame_0 {
    int f00;
    float f04;
    char unknown8[0xc];
} Block_frame_0;
struct Object {
    char unknown0[0xe4];
    Arg0_e4 *fe4;
    char unknowne8[0x4];
    Arg0_ec *fec;
    char unknownf0[0x10];
    int f100;
};
struct Frame {
    Block_frame_0 f00;
};
struct Arg0_ec {
    char unknown0[0x8];
    int f08;
};
struct S_x8656 {
    int f00;
};
extern Block20 g_8c284f48;
extern int hierarchy_is_active(void *);
extern float operation_8c067d1c(void *);
extern int call_8c0f3514(Object *, void *, Frame *, Arg0_ec *);
extern void operation_8c07c8e4(void *, int);
void operation_8c07c770(Object *o)
{
    Frame frame;
    char *v37;
    int v9;
    int v2;
    int v7;
    int v8;
    int v1;
    int v10;
    int v14;
    int t1;
    float t2;
    int t3;
    v37 = (char *)o->fe4;
    if (v37 != 0) {
        t1 = hierarchy_is_active((void *)v37);
        if (t1 == 0) {
            o->fe4 = (Arg0_e4 *)0;
            return;
        }
        *(Block20 *)&(&frame)->f00 = *(Block20 *)&g_8c284f48;
        t2 = operation_8c067d1c((void *)(o->fe4));
        (&frame)->f00.f04 = t2;
        (&frame)->f00.f00 = (int)(o->f100);
        v1 = (int)o->fec->f08;
        t3 = call_8c0f3514(o, (void *)((char *)&g_8c284f48 + 0xc), (Frame *)((&frame)), (Arg0_ec *)(o->fec));
        if (t3 != 0) {
            v2 = (int)o->fec->f08;
            while (v2 > v1) {
                *(int *)((char *)((char *)o + 0xf0) + (v1 << 2)) = 0x3c;
                v1 = v1 + 1;
            }
        }
        v1 = (int)0;
        v7 = (int)o->fec->f08;
        v8 = (int)v7;
        while (v8 > v1) {
            v9 = (int)(v1 << 2);
            if (!(*(int *)((char *)((char *)o + 0xf0) + (v9)) > 0)) {
                operation_8c07c8e4((void *)(o->fec), v1);
                v8 = (int)(v8 + -1);
                v10 = (int)(v8 << 2);
                *(int *)((char *)((char *)o + 0xf0) + (v9)) = (int)(*(int *)((char *)((char *)o + 0xf0) + (v10)));
                *(int *)((char *)((char *)o + 0xf0) + (v10)) = 0;
                v14 = (int)(v1 + -1);
            } else {
                ((S_x8656 *)((char *)(int *)((char *)o + 0xf0) + v9))->f00 -= 1;
                v14 = (int)v1;
            }
            v1 = (int)(v14 + 1);
        }
    }
}
