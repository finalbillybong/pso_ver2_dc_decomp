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
typedef struct S_x25632 S_x25632;
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
    char unknown38[0x14];
    int f4c;
};
struct S_vv1 {
    char unknown0[0x80];
    unsigned short f80;
};
struct Frame {
    Block8 f00;
    Block_frame_8 f08;
};
struct S_x25632 {
    Block20 f00;
};
struct S_vv22 {
    char unknown0[0x80];
    unsigned short f80;
};
extern Block8 g_8c30b63c;
extern S_g8c418248 *g_8c418248;
extern int operation_8c1571f4(void *);
extern void call_8c220b80(int, int);
extern void request_resource_release(void *);
extern int operation_8c156c6c(int);
extern int operation_8c1cdc80(void *);
extern int operation_194d60(unsigned short);
extern void operation_8c1c74a8(void *, int);
extern void operation_8c023a44(void *, void *);
extern void operation_8c106038(Object *, int);
extern int call_8c1ccb64(int);
extern void operation_8c18afac(int);
void operation_8c105ee0(Object *o)
{
    Frame frame;
    S_vv1 *v1;
    int t1;
    S_vv22 *v22;
    int t3;
    int t2;
    int v2;
    int t4;
    int t5;
    int off;
    v1 = (S_vv1 *)o->f30;
    if (v1 != 0 && ((v1->f80 & 0xffff & 2)) != 0) {
        t1 = operation_8c1571f4((void *)v1);
        if (t1 == 0 && o->f34 != 0) {
            if (o->f4c != 0) {
                call_8c220b80(0x17, 1);
                request_resource_release((void *)(o->f30));
                *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c30b63c;
                t2 = operation_8c156c6c((int)(&frame));
                o->f30 = (Arg0_30 *)t2;
                o->f24 = 9;
            } else {
                t3 = operation_8c1cdc80((void *)(o->f34));
                off = t3 * 0x14;
                *(Block20 *)&(&frame)->f08 = *(Block20 *)&((S_x25632 *)((char *)(int *)((char *)o + 0x50) + off))->f00;
                t4 = operation_194d60((unsigned short)g_8c418248);
                (&frame)->f08.f0c = (int)(t4);
                operation_8c1c74a8((void *)(&(&frame)->f08), 1);
                operation_8c023a44((void *)(o->f28), (void *)(&(&frame)->f08));
                v2 = (int)((int)o + off + 0x50);
                operation_8c106038(o, v2);
                t5 = call_8c1ccb64(v2);
                if (t5 != 0) {
                    operation_8c18afac(t3);
                }
                request_resource_release((void *)(o->f30));
                o->f30 = (Arg0_30 *)0;
                o->f24 = 0;
            }
        }
        if (t1 == 1) {
            request_resource_release((void *)(o->f30));
            o->f30 = (Arg0_30 *)0;
            o->f24 = 0;
        }
    }
    v22 = (S_vv22 *)o->f30;
    if (v22 != 0 && ((v22->f80 & 0xffff & 4)) != 0) {
        request_resource_release((void *)v22);
        o->f30 = (Arg0_30 *)0;
        o->f24 = 0;
    }
}
