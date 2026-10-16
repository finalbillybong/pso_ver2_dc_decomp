typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct S_c8c122700 {
    int f00;
    char unknown4[0x14];
    void *f18;
    char unknown1c[0x2];
    short f1e;
    char unknown20[0x18];
    float f38;
    float f3c;
    char unknown40[0x28];
    int f68;
};
struct Object {
    float tag;
    float f04;
};
extern int call_8c1dc920(int);
extern void operation_8c1dc7fc(int);
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void initialize_base_8c0db1d0(void *, int);
extern void operation_8c0dc854(void *);
extern void call_8c1f1c28(void *, int);
S_c8c122700 *operation_8c1f1a9c(Object *o)
{
    S_c8c122700 *t2;
    int t1;
    char *v1;
    v1 = (char *)*(int *)0x8c4e2fa0;
    if (v1 == 0) {
        return 0;
    }
    t1 = call_8c1dc920((int)(v1));
    if (t1 != 0) {
        operation_8c1dc7fc((int)(v1));
    }
    t2 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x6c);
    if (t2 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t2;
        S_c8c122700 **home = &self;
        (void)home;
        initialize_base_8c0db1d0((void *)t2, (int)((void *)0x8c32c38c));
        self->f18 = (void *)0x8c278000;
        self->f00 = (int)(*(int *)0x8c32c2d8);
        self->f1e = 0x6c;
        self->f38 = o->tag;
        self->f3c = o->f04;
        operation_8c0dc854((void *)self);
        self->f68 = (int)(v1);
        call_8c1f1c28((void *)(((char *)self + 0x2c)), (int)(v1));
    }
    return t2;
}
