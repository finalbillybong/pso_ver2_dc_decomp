typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct Object Object;
typedef struct Arg0_34 Arg0_34;
typedef struct S_vv2 S_vv2;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    char f20;
    char unknown21[0x1];
    char f22;
    char unknown23[0x5];
    float f28;
    float f2c;
    float f30;
    Arg0_34 *f34;
};
struct S_vv2 {
    char unknown0[0x34];
    int f34;
};
struct Frame {
    char unknown0[0xc];
};
extern S_g8c46fe20 *g_8c46fe20;
extern int call_8c22b1f8(Object *, float, float);
extern void call_8c22b1a4(Object *, Frame *);
extern void call_8c0a7608(void *, Frame *);
void operation_8c22aeb8(Object *o)
{
    Frame frame;
    int v1;
    S_vv2 *v2;
    int v4;
    int t1;
    int t2;
    int t3;
    if (o->f22 > 0) {
        char n = o->f22 + -1;
        if (g_8c46fe20 == 0) {
            v2 = (S_vv2 *)0;
        } else {
            v1 = (int)*(int *)((char *)((char *)g_8c46fe20 + 0x38) + (n << 2));
            v2 = (S_vv2 *)v1;
        }
        if (v2 != 0) {
            v4 = !(v2->f34 & 1);
            if (v4 == 0) {
                goto L_8c22aef8;
            }
        }
        o->f04 |= 1;
        return;
    }
L_8c22aef8:;
    switch (o->f20) {
    case 0:
        o->f20 = 1;
    case 1:
        t1 = call_8c22b1f8(o, 155.0f, o->f28);
        if (t1 == 0) {
            goto L_8c22af8a;
        }
        o->f20 = 2;
        break;
    case 2:
        t2 = call_8c22b1f8(o, 155.0f, o->f30);
        if (t2 == 0) {
            goto L_8c22af8a;
        }
        o->f20 = 3;
        break;
    case 3:
        t3 = call_8c22b1f8(o, o->f2c, o->f30);
        if (t3 == 0) {
            goto L_8c22af8a;
        }
        o->f20 = 4;
        break;
    case 4:
        o->f04 |= 1;
    }
L_8c22af8a:;
    if (o->f34 != 0) {
        call_8c22b1a4(o, (Frame *)((&frame)));
        call_8c0a7608((void *)(o->f34), (Frame *)((&frame)));
    }
}
