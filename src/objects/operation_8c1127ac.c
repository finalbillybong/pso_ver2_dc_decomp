typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
struct Object {
    char unknown0[0x24];
    int f24;
    Arg0_28 *f28;
};
struct S_c8c122700 {
    char unknown0[0x1f4];
    void *f1f4;
};
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void call_8c188ef0(int, void *, Object *, void *);
extern void call_8c01d9dc(void);
void operation_8c1127ac(Object *o)
{
    S_c8c122700 *t1;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x1f8);
    if (t1 != 0) {
        call_8c188ef0((int)t1, *(S_g8c44be98 **)0x8c44be98, o, o->f28);
    }
    t1->f1f4 = (void *)0x8c112924;
    call_8c01d9dc();
    o->f24 = 5;
}
