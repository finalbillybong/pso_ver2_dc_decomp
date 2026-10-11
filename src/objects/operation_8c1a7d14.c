typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be88 S_g8c44be88;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_90 Arg0_90;
struct Object {
    char unknown0[0x90];
    Arg0_90 *f90;
};
struct Arg0_90 {
    char unknown0[0x4];
    short f04;
};
extern void call_8c111268(void);
extern void *allocate_block(void *, int);
extern void call_8c172e84(void *, void *, int, int, int);
extern void *hierarchy_is_active(Arg0_90 *);
void operation_8c1a7d14(Object *o, int a1, int a2)
{
    void *t1;
    void *t2;
    if (o->f90 != 0) {
        o->f90->f04 |= 1;
    }
    call_8c111268();
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, 0xb8);
    if (t1 != 0) {
        call_8c172e84(t1, *(S_g8c44be88 **)0x8c44be88, a1, 0, a2);
    }
    o->f90 = t1;
    t2 = hierarchy_is_active(o->f90);
    if (t2 == 0) {
        o->f90 = 0;
    }
}
