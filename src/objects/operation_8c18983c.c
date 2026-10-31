typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Block20 {
    int words[5];
} Block20;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_34 Arg0_34;
typedef struct S_vv1 S_vv1;
typedef struct S_vv22 S_vv22;
typedef struct S_x70720 S_x70720;
typedef struct Block_frame_8 {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x4];
} Block_frame_8;
struct Object {
    char unknown0[0x24];
    int f24;
    Arg0_28 *f28;
    char unknown2c[0x4];
    Arg0_30 *f30;
    Arg0_34 *f34;
    char unknown38[0x1b8];
    int f1f0;
};
struct S_vv1 {
    char unknown0[0x80];
    unsigned short f80;
};
struct Frame {
    Block8 f00;
    Block_frame_8 f08;
};
struct S_x70720 {
    Block20 f00;
};
struct S_vv22 {
    char unknown0[0x80];
    unsigned short f80;
};
extern Block8 g_8c319e54;
extern S_g8c418248 *g_8c418248;
extern int operation_8c1571f4(void *);
extern void call_8c220b80(int, int);
extern void request_resource_release(void *);
extern int operation_8c156c6c(int);
extern int operation_8c1cdc80(void *);
extern int operation_194d60(unsigned short);
extern void operation_8c023a44(void *, void *);
extern void operation_8c189990(Object *, int);
extern int operation_8c1ccb64(void *);
extern void operation_8c18ef00(int);
extern void operation_8c1cdcdc(void *);
void operation_8c18983c(Object *o)
{
    Frame frame;
    S_vv1 *v1;
    int t1;
    S_vv22 *v22;
    int t3;
    int v61;
    int t2;
    int v2;
    int t4;
    int t5;
    v1 = (S_vv1 *)o->f34;
    if (v1 != 0 && ((v1->f80 & 0xffff & 2)) != 0) {
        t1 = operation_8c1571f4((void *)v1);
        if (t1 == 0 && o->f30 != 0) {
            if (o->f1f0 != 0) {
                call_8c220b80(0x17, 1);
                request_resource_release((void *)(o->f34));
                *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c319e54;
                t2 = operation_8c156c6c((int)(&frame));
                o->f34 = (Arg0_34 *)t2;
                o->f24 = 9;
            } else {
                t3 = operation_8c1cdc80((void *)(o->f30));
                v61 = (int)(t3 * 0x14);
                *(Block20 *)&(&frame)->f08 = *(Block20 *)&((S_x70720 *)((char *)(int *)((char *)o + 0x4c) + v61))->f00;
                t4 = operation_194d60((unsigned short)g_8c418248);
                (&frame)->f08.f0c = (int)(t4);
                operation_8c023a44((void *)(o->f28), (void *)(&(&frame)->f08));
                v2 = (int)((int)o + v61 + 0x4c);
                operation_8c189990(o, v2);
                t5 = operation_8c1ccb64((void *)v2);
                if (t5 != 0) {
                    operation_8c18ef00(t3);
                }
                operation_8c1cdcdc((void *)(o->f30));
                request_resource_release((void *)(o->f34));
                o->f34 = (Arg0_34 *)0;
                o->f24 = 0;
            }
        }
        if (t1 == 1) {
            request_resource_release((void *)(o->f34));
            o->f34 = (Arg0_34 *)0;
            o->f24 = 0;
        }
    }
    v22 = (S_vv22 *)o->f34;
    if (v22 != 0 && ((v22->f80 & 0xffff & 4)) != 0) {
        request_resource_release((void *)v22);
        o->f34 = (Arg0_34 *)0;
        o->f24 = 0;
    }
}
