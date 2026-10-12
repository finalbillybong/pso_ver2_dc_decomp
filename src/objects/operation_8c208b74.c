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
    char unknown0[0x34];
    void *f34;
    void *f38;
    void *f3c;
    void *f40;
};
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void call_8c21d170(int, void *, void *);
extern void call_8c220c40(int, int);
void operation_8c208b74(Object *o)
{
    S_c8c122700 *t1;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x78);
    if (t1 != 0) {
        call_8c21d170((int)t1, *(S_g8c44be98 **)0x8c44be98, o->f28);
    }
    if (t1 != 0) {
        call_8c220c40(4, 1);
        t1->f34 = (void *)0x8c208c30;
        t1->f38 = (void *)0x8c208ca0;
        t1->f3c = (void *)0x8c208cd0;
        t1->f40 = (void *)0x8c208c60;
        o->f24 = 0xe;
    }
}
