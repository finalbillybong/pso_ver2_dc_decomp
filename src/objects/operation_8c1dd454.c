typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block64 {
    int words[16];
} Block64;
typedef struct S_c8c21c6fc S_c8c21c6fc;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_38 Arg0_38;
typedef struct Block_p0_38_0 {
    int f00;
    char unknown4[0x3c];
} Block_p0_38_0;
struct Object {
    char unknown0[0x22];
    short f22;
    Arg0_24 *f24;
    char unknown28[0x10];
    Arg0_38 *f38;
};
struct Arg0_24 {
    char unknown0[0x68];
    unsigned short f68;
    char unknown6a[0x3];
    char f6d;
};
struct Arg0_38 {
    Block_p0_38_0 f00;
};
struct S_c8c21c6fc {
    Block64 f00;
};
extern void operation_8c1e22ec(void *);
extern S_c8c21c6fc *call_8c21c6fc(int);
extern int operation_8c21f32c(void *);
extern void call_8c21f3f0(int);
extern void call_8c1e23d4(Arg0_24 *, void *);
int operation_8c1dd454(Object *o)
{
    S_c8c21c6fc *t1;
    int t2;
    if (o->f24 == 0) {
        return 0;
    }
    if (((o->f24->f68 & 0x40)) != 0) {
        operation_8c1e22ec((void *)(o->f24));
        o->f22 |= 0x20;
        return 1;
    }
    if (((o->f24->f68 & 1)) == 0) {
        return 0;
    }
    o->f22 |= 0x10;
    if (((o->f24->f68 & 0x80)) != 0) {
        t1 = call_8c21c6fc((int)(o->f24->f6d));
        *(Block64 *)&o->f38->f00 = *(Block64 *)&t1->f00;
        if (o->f38->f00.f00 != 3) {
            goto L_8c1dd4fa;
        }
        t2 = operation_8c21f32c((void *)(((char *)o->f38 + 0x4)));
        call_8c21f3f0(t2);
    } else {
        call_8c1e23d4((Arg0_24 *)(o->f24), (void *)(((char *)o->f38 + 0x4)));
    }
L_8c1dd4fa:;
    operation_8c1e22ec((void *)(o->f24));
    return 1;
}
