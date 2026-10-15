typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
typedef struct S_frame_4 S_frame_4;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4dbc20 S_g8c4dbc20;
typedef struct S_g8c4dbc20_0 S_g8c4dbc20_0;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_38 Arg0_38;
typedef struct S_vv83 S_vv83;
typedef struct S_vv83_90 S_vv83_90;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x4];
    Arg0_2c *f2c;
    char unknown30[0x8];
    Arg0_38 *f38;
    char unknown3c[0x18];
    int f54;
    int f58;
    int f5c;
};
struct S_g8c4dbc20 {
    S_g8c4dbc20_0 *f00;
};
struct S_g8c4dbc20_0 {
    char unknown0[0xbc];
    int fbc;
};
struct Frame {
    S_frame_0 *f00;
    S_frame_4 *f04;
    int f08;
    char unknownc[0x10];
    int f1c;
    char unknown20[0x10];
};
struct Arg0_2c {
    char unknown0[0x80];
    unsigned short f80;
    char unknown82[0x2];
    short f84;
};
struct S_vv83 {
    char unknown0[0x90];
    S_vv83_90 *f90;
};
extern void call_8c220b80(int, int);
extern void operation_8c1cdc94(void *);
extern int operation_8c19fb24(int, int);
extern int call_8c15b510(int, void *, void *);
extern void operation_8c1cd6b4(void *, int, int, void *);
extern void call_8c1cdc30(Arg0_2c *);
extern void operation_8c1cdcdc(void *);
extern void call_8c1cdd08(Arg0_2c *);
extern void operation_8c19a044(void *, int);
extern int call_8c15b448(int, void *);
extern int allocate_block(void *, unsigned int);
extern void operation_8c1d5b24(void *);
extern void operation_8c1d5dfc(void *, int);
void operation_8c1a6acc(Object *o)
{
    Frame frame;
    char *v199;
    int v1;
    int v42;
    S_vv83 *v83;
    int v112;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    o->f58 = 1;
    o->f54 = (int)(*(int *)0x8c4db120);
    if (o->f54 == 0) {
        call_8c220b80(0x3d, 1);
        o->f24 = 6;
        if (o->f2c == 0) {
            return;
        }
        operation_8c1cdc94((void *)(o->f2c));
        return;
    }
    if (o->f2c == 0) {
        v199 = (char *)(*(S_g8c4dbc20 **)0x8c4dbc20)->f00->fbc;
        t1 = operation_8c19fb24((int)(v199), 0x3c);
        o->f2c = (Arg0_2c *)t1;
        v1 = (int)0;
        while (0x3c > v1) {
            t2 = call_8c15b510(v1, (void *)(&(&frame)->f1c), (void *)(&(&frame)->f04));
            if (t2 != 0) {
                if ((int)((&frame)->f04) > 1) {
                    operation_8c1cd6b4((void *)(o->f2c), (int)(&(&frame)->f1c), v1, (void *)((&frame)->f04));
                } else {
                    operation_8c1cd6b4((void *)(o->f2c), (int)(&(&frame)->f1c), v1, (void *)0);
                }
            }
            v1 = (int)(v1 + 1);
        }
        call_8c1cdc30((Arg0_2c *)(o->f2c));
        v112 = (int)o->f2c->f84;
    } else {
        operation_8c1cdcdc((void *)(o->f2c));
        operation_8c1cdc94((void *)(o->f2c));
        v42 = (int)0;
        while (0x3c > v42) {
            t3 = call_8c15b510(v42, (void *)(&(&frame)->f08), (void *)(&frame));
            if (t3 != 0) {
                if ((int)((&frame)->f00) > 1) {
                    operation_8c1cd6b4((void *)(o->f2c), (int)(&(&frame)->f08), v42, (void *)((&frame)->f00));
                } else {
                    operation_8c1cd6b4((void *)(o->f2c), (int)(&(&frame)->f08), v42, (void *)0);
                }
            }
            v42 = (int)(v42 + 1);
        }
        call_8c1cdd08((Arg0_2c *)(o->f2c));
        call_8c1cdc30((Arg0_2c *)(o->f2c));
        v83 = (S_vv83 *)o->f2c;
        o->f2c->f80 = (o->f2c->f80 & 0xffff) & -3;
        if (v83->f90 != 0) {
            operation_8c19a044((void *)(v83->f90), 1);
        }
        v112 = (int)o->f2c->f84;
    }
    if (o->f38 == 0) {
        t4 = call_8c15b448(v112, (void *)(((char *)o + 0x3c)));
        if (t4 == 0) {
            goto L_8c1a6c54;
        }
        t5 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0xb8);
        if (t5 != 0) {
            operation_8c1d5b24((void *)t5);
        }
        o->f38 = (Arg0_38 *)t5;
        operation_8c1d5dfc((void *)(o->f38), (int)(((char *)o + 0x3c)));
        o->f5c = (int)(v112);
    } else {
        t6 = call_8c15b448(v112, (void *)(((char *)o + 0x3c)));
        if (t6 != 0) {
            operation_8c1d5dfc((void *)(o->f38), (int)(((char *)o + 0x3c)));
            o->f5c = (int)(v112);
        }
    }
L_8c1a6c54:;
    o->f24 = 1;
}
