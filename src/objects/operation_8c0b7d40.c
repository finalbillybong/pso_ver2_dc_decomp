typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_80 Arg0_80;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1e];
    Vector3 f24;
    char unknown30[0x3c];
    int f6c;
    char unknown70[0xe];
    short f7e;
    Arg0_80 *f80;
    Vector3 f84;
};
struct Arg1 {
    Vector3 f00;
};
extern int allocate_block(void *, unsigned int);
extern void call_8c0b8200(int, void *, void *, int, float, void *);
extern int call_8c05fbf8(int, void *, int, int);
extern void emit_control_60320(int, int, int);
extern void call_8c0ada54(Object *);
void operation_8c0b7d40(Object *o, Arg1 *a1)
{
    short v3;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    *(Vector3 *)&o->f84 = *(Vector3 *)&a1->f00;
    *(Vector3 *)&o->f24 = *(Vector3 *)&a1->f00;
    o->f6c += 1;
    if (o->f6c != 0xa) {
        return;
    }
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x64);
    if (t1 != 0) {
        call_8c0b8200(t1, (void *)(&o->f84), (void *)(o->f80), 0xa, (float)o->f7e, (void *)(*(S_g8c44bea0 **)0x8c44bea0));
    }
    if (o->f80 != 0) {
        if ((int)(o->f80) == 1) {
            goto L_8c0b7de6;
        }
        if ((int)(o->f80) == 2) {
            goto L_8c0b7dfa;
        }
    } else {
        t2 = call_8c05fbf8(0x20003, (void *)(&o->f84), 0, 0);
        if (t2 >= 0) {
            emit_control_60320(t2, 0x100, 0);
            goto L_8c0b7e7e;
L_8c0b7de6:;
            call_8c05fbf8(0x20003, (void *)(&o->f84), 0, 0);
            goto L_8c0b7e7e;
L_8c0b7dfa:;
            v3 = (short)o->f7e;
            if ((short)v3 >= 0xf && 0x19 > (short)v3) {
                t3 = call_8c05fbf8(0x20003, (void *)(&o->f84), 0, 0);
                if (!(t3 >= 0)) {
                    goto L_8c0b7e7e;
                }
                emit_control_60320(t3, -0x180, 0);
                goto L_8c0b7e7e;
            }
            if ((short)v3 >= 0x19 && 0x1e > (short)v3) {
                t4 = call_8c05fbf8(0x20003, (void *)(&o->f84), 0, 0);
                if (!(t4 >= 0)) {
                    goto L_8c0b7e7e;
                }
                emit_control_60320(t4, -0x250, 0);
                goto L_8c0b7e7e;
            }
            t5 = call_8c05fbf8(0x20003, (void *)(&o->f84), 0, 0);
            if (t5 >= 0) {
                emit_control_60320(t5, -0x100, 0);
            }
        }
    }
L_8c0b7e7e:;
    call_8c0ada54(o);
    o->f04 |= 1;
}
