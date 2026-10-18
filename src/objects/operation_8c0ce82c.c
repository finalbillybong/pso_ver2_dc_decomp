typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fab8 S_g8c46fab8;
typedef struct Object Object;
typedef struct Arg0_334 Arg0_334;
typedef struct Arg0_36c Arg0_36c;
typedef struct Arg0_36c_8 Arg0_36c_8;
typedef struct S_vv12 S_vv12;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb8];
    short ff0;
    char unknownf2[0x72];
    Vector3 f164;
    char unknown170[0x19a];
    short f30a;
    char unknown30c[0x28];
    Arg0_334 *f334;
    char unknown338[0x34];
    Arg0_36c *f36c;
    char unknown370[0x14];
    int f384;
    char unknown388[0x8];
    int f390;
    char unknown394[0x4];
    int f398;
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
    char unknown3a8[0x6];
    short f3ae;
    char unknown3b0[0x10];
    float f3c0;
};
struct Arg0_334 {
    char unknown0[0x324];
    Vector3 f324;
};
struct S_g8c46fab8 {
    char unknown0[0x8];
    float f08;
};
struct S_vv12 {
    char unknown0[0x324];
    Vector3 f324;
};
struct Arg0_36c {
    char unknown0[0x8];
    Arg0_36c_8 *f08;
};
extern int operation_8c05bbf8(void);
extern void call_8c05fbf8(int, void *, int, int);
extern void call_8c01c5f0(Object *);
extern void call_8c05fd7c(int, Object *, void *, int, int);
extern void call_8c0444f8(Object *, float, Vector3);
extern void operation_43fb4(void *, int, void *);
extern void operation_8c04a43c(void *, float, void *);
extern void call_8c0521a0(Object *);
extern void call_8c05228c(Object *);
void operation_8c0ce82c(Object *o)
{
    int v2;
    int v9;
    int v11;
    S_vv12 *v12;
    float v13;
    float v16;
    short v17;
    int t1;
    int t2;
    if (o->f398 == -1) {
        return;
    }
    if (o->f398 != 0) {
        if (o->f398 == 1) {
            goto L_8c0ce8d6;
        }
        if (o->f398 == 2) {
            goto L_8c0ce914;
        }
        return;
    }
    o->f3a4 |= 0x1800000;
    o->f34 &= -0x4040001;
    if (o->f39c != 0) {
        t1 = operation_8c05bbf8();
        if (t1 == 0) {
            if (o->f3ae != 0) {
                v2 = (int)7;
            } else {
                v2 = (int)*(int *)((char *)0x8c306a64 + (o->f384 << 2));
            }
            o->ff0 = v2;
        } else {
            o->ff0 = 0;
        }
        o->f398 = 2;
    } else {
        call_8c05fbf8(0x30005, (void *)(((char *)o + 0x3c)), 0, 0);
        o->f398 = 1;
    }
    if (o->f334 == 0) {
        return;
    }
    *(Vector3 *)&o->f164 = *(Vector3 *)&o->f334->f324;
    return;
L_8c0ce8d6:;
    call_8c01c5f0(o);
    v16 = (float)/* ? fr15 */ 0;
    if (o->ff0 == 0) {
        t2 = operation_8c05bbf8();
        if (t2 == 0) {
            if (o->f3ae != 0) {
                v9 = (int)7;
            } else {
                v9 = (int)*(int *)((char *)0x8c306a64 + (o->f384 << 2));
            }
            o->ff0 = v9;
        }
        o->f398 = 2;
        return;
L_8c0ce914:;
        call_8c01c5f0(o);
        if (o->f3ae != 0) {
            v11 = (int)0x30001;
        } else {
            v11 = (int)0x30000;
        }
        call_8c05fd7c(v11, o, (void *)(((char *)o + 0x3c)), 0, 0);
        v12 = (S_vv12 *)o->f334;
        if (v12 != 0) {
            if (o->f3ae != 0) {
                v16 = (float)(*(S_g8c46fab8 **)((char *)0x8c46fab8 + (o->f384 << 2)))->f08;
            } else {
                v13 = (float)*(float *)((char *)0x8c306a5c + (o->f384 << 2));
                v16 = (float)v13;
            }
            call_8c0444f8(o, v16, *(Vector3 *)&v12->f324);
            o->f3c0 += v16;
            operation_43fb4((void *)o, (int)(o->f36c->f08), (void *)(((char *)o + 0x318)));
        } else {
            if (((o->f3a4 & 1)) == 0) {
                v17 = (short)o->f30a;
                if (v17 != 0) {
                    o->f39c = (int)(v17);
                    o->f390 = 0;
                }
            }
            v16 = (float)/* ? fr15 */ 0;
        }
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        call_8c0521a0(o);
        call_8c05228c(o);
    }
}
