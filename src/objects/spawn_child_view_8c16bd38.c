typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    int tag;
    int f04;
};
struct S_c8c122700 {
    char unknown0[0x18];
    void *f18;
    char unknown1c[0x5];
    char f21;
    char unknown22[0x36];
    Object *f58;
};
extern S_c8c122700 *allocate_block(void *, int);
extern void call_8c16b398(S_c8c122700 *, void *, int, int, int);
extern void call_8c16b480(S_c8c122700 *);
void spawn_child_view_8c16bd38(Object *o, int a1, int a2)
{
    S_c8c122700 *t1;
    o->f04 = 1;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, 0x5c);
    if (t1 != 0) {
        S_c8c122700 *self = t1;
        S_c8c122700 **home = &self;
        (void)home;
        call_8c16b398(t1, *(S_g8c44bea0 **)0x8c44bea0, a2, a1, 0);
        self->f18 = (void *)0x8c27016c;
        self->f58 = o;
        self->f21 = 0;
        call_8c16b480(self);
    }
    o->tag += 1;
}
