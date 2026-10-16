typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_3d4 S_g8c467180_2c_3d4;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_30_2c Arg0_30_2c;
typedef struct S_vv10 S_vv10;
typedef struct S_vv5 S_vv5;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x30];
    int f64;
};
struct Arg0_30 {
    Arg0_30_0 *f00;
    char unknown4[0x28];
    Arg0_30_2c *f2c;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x3d4];
    S_g8c467180_2c_3d4 *f3d4;
};
struct S_vv5 {
    int f00;
};
struct Frame {
    char f00;
    char f01;
    char unknown2[0x2];
};
struct S_vv10 {
    int f00;
};
extern char g_8c31b244[];
extern void call_8c0e196c(void *, void *);
extern void call_8c0e2278(void *, void *, int);
extern int operation_8c247b70(int);
extern void reset_text_cursor_8c18ea38(void);
extern void call_8c18ec00(int, int);
extern void operation_8c18ea4c(int);
extern void call_8c18ed08(int);
extern int call_8c247c88(void);
void operation_8c194b48(Object *o)
{
    Frame frame;
    int v3;
    S_vv5 *v5;
    int t1;
    int v4;
    S_vv10 *v10;
    int t2;
    if ((float)o->f64 > 7.5f) {
        o->f64 = 7;
    }
    call_8c0e196c((void *)(((char *)o + 0x2c)), (void *)((void *)0x8c31b0bc));
    call_8c0e2278((void *)(o->f30->f00), (void *)((*(S_g8c467180 **)0x8c467180)->f2c->f3d4), 0);
    v3 = (int)0;
    v4 = (int)-3;
    while (0xa > v3) {
        v5 = (S_vv5 *)*(Arg0_30_0 **)((char *)&o->f30->f00 + (v3 + 1 << 2));
        t1 = operation_8c247b70(v3);
        if (t1 == 0) {
            v5->f00 |= 2;
        } else {
            v5->f00 &= v4;
            reset_text_cursor_8c18ea38();
            if (v3 != 9) {
                call_8c18ec00((int)(v3 + 1), 2);
            }
            operation_8c18ea4c((int)(g_8c31b244 + 0x18));
            call_8c18ed08(t1);
            call_8c0e2278((void *)v5, (void *)((void *)0x8c4dbe40), 0x20);
        }
        v3 = (int)(v3 + 1);
    }
    v10 = (S_vv10 *)o->f30->f2c;
    t2 = call_8c247c88();
    if (t2 != -1) {
        (&frame)->f00 = t2 + 0x41;
        (&frame)->f01 = 0;
        reset_text_cursor_8c18ea38();
        operation_8c18ea4c((int)(&frame));
        v10->f00 &= -3;
        call_8c0e2278((void *)v10, (void *)((void *)0x8c4dbe40), 0x20);
        return;
    }
    v10->f00 |= 2;
}
