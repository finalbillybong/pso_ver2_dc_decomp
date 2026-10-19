typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg0_104 Arg0_104;
typedef struct S_vv12 S_vv12;
typedef struct S_x49120_0 S_x49120_0;
struct Object {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
    char unknown48[0xa0];
    float fe8;
    float fec;
    float ff0;
    char unknownf4[0xc];
    int f100;
};
struct Frame {
    float f00;
    float f04;
    float f08;
};
struct S_c8c021ef8 {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
};
struct S_vv12 {
    char unknown0[0x4];
    short f04;
};
struct S_x49120_0 {
    char unknown0[0x4];
    short f04;
};
extern void operation_8c24a6c8(void *);
extern void call_8c24a6ec(Object *);
extern S_c8c021ef8 *lookup_low_id(int);
extern float call_8c37e494(Frame *);
extern void operation_8c245f40(void *);
void operation_8c24a264(Object *o)
{
    Frame frame;
    int v11;
    S_vv12 *v12;
    int v10;
    int v15;
    int v14;
    int v16;
    S_c8c021ef8 *t1;
    float t2;
    o->fe8 += o->ff0;
    if (o->fe8 > (o->fec - 1.0f)) {
        o->fe8 = 0.0f;
        operation_8c24a6c8((void *)o);
    }
    if (o->f100 != 0) {
        call_8c24a6ec(o);
    }
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0) {
        (&frame)->f00 = t1->f3c - o->f3c;
        (&frame)->f08 = t1->f44 - o->f44;
        (&frame)->f04 = 0.0f;
        t2 = call_8c37e494((Frame *)((&frame)));
        if (!(t2 > 14400.0f)) {
            v11 = (int)0;
            v10 = (int)-0x11;
            while (8 > v11) {
                v12 = (S_vv12 *)*(Arg0_104 **)((char *)((char *)o + 0x104) + (v11 << 2));
                if (v12 != 0) {
                    v12->f04 &= v10;
                }
                v11 = (int)(v11 + 1);
            }
            o->f100 = 1;
            return;
        }
        v15 = (int)0;
        v14 = (int)0x104;
        while (8 > v15) {
            v16 = (int)(v15 << 2);
            if (*(int *)((char *)((char *)((int)o + v14) + 0x0) + (v16)) != 0) {
                (*(S_x49120_0 **)((char *)((char *)((int)o + v14) + 0x0) + (v16)))->f04 |= 0x10;
                operation_8c245f40((void *)(*(S_x49120_0 **)((char *)((char *)((int)o + v14) + 0x0) + (v16))));
            }
            v15 = (int)(v15 + 1);
        }
        o->f100 = 0;
    }
}
