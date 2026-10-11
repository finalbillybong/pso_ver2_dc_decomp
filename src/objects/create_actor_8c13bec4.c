typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct S_c8c122700 {
    char unknown0[0x18];
    void *f18;
    char unknown1c[0x4];
    short f20;
    char unknown22[0xa];
    short f2c;
    short f2e;
    short f30;
    char unknown32[0x52];
    int f84;
};
struct Object {
    char unknown0[0x2c];
    short f2c;
    short f2e;
};
extern S_c8c122700 *allocate_block(void *, int);
extern void initialize_actor_mode_state(S_c8c122700 *, Object *);
extern void call_8c13a688(S_c8c122700 *);
S_c8c122700 *create_actor_8c13bec4(Object *o, int a1, int a2)
{
    S_c8c122700 *t1;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, 0x3f0);
    if (t1 != 0) {
        S_c8c122700 *self = t1;
        S_c8c122700 **home = &self;
        (void)home;
        initialize_actor_mode_state(t1, o);
        self->f18 = (void *)0x8c26d24c;
        self->f20 = a1;
        self->f30 = a2;
        self->f84 = 0;
        self->f2c = o->f2c;
        self->f2e = o->f2e;
        call_8c13a688(self);
    }
    return t1;
}
