typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_0 S_g8c467180_2c_0;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x4];
    float f08;
    char unknownc[0xc];
    int dispatch;
    char f1c;
    char f1d;
    char unknown1e[0x6];
    int f24;
    char unknown28[0xc];
    int f34;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    S_g8c467180_2c_0 *f00;
};
extern void reset_text_cursor_8c18ea38(void);
extern void operation_8c18eb44(int);
extern void operation_8c18ea4c(int);
extern void call_8c18de08(int);
extern int operation_8c257e2c(int);
extern int call_8c18de4c(int);
extern void call_8c12b154(int, void *, int);
void operation_8c19f19c(Object *o, int a1, int a2)
{
    int v1;
    int v2;
    int v6;
    int v8;
    int t1;
    int t2;
    o->f08 = 11.0f;
    o->f1c = 0x2d;
    v1 = (int)9;
    o->f1d = v1;
    reset_text_cursor_8c18ea38();
    operation_8c18eb44(a1);
    operation_8c18ea4c((int)((*(S_g8c467180 **)0x8c467180)->f2c->f00));
    v2 = (int)o->f24;
    if (v2 != 0 && ((o->tag & 0x10)) != 0) {
        o->tag &= -0x11;
        call_8c18de08(v2);
    }
    if ((void *)0x8c4dbe40 != 0) {
        t1 = operation_8c257e2c((int)((void *)0x8c4dbe40));
        t2 = call_8c18de4c((int)(t1 + 1));
        v8 = (int)t2;
        v6 = (int)(t1 + 1);
        call_8c12b154(t2, (void *)((void *)0x8c4dbe40), v6);
        o->tag |= 0x10;
    } else {
        v8 = (int)(void *)0x8c4dbe40;
    }
    o->f24 = (int)(v8);
    o->f34 = -1;
    o->dispatch = a2;
    o->tag |= 0x45;
}
