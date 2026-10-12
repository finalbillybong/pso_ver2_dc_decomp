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
    char unknown0[0x50];
    void *f50;
    void *f54;
    void *f58;
};
extern int call_8c220ce0(void);
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void operation_8c158b8c(void *, int, int, int);
void operation_8c15966c(Object *o)
{
    int t1;
    S_c8c122700 *t2;
    t1 = call_8c220ce0();
    if (t1 != 0) {
        t2 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x5c);
        if (t2 != 0) {
            operation_8c158b8c((void *)t2, (int)*(S_g8c44be98 **)0x8c44be98, (int)o, (int)o->f28);
        }
        if (t2 != 0) {
            t2->f54 = (void *)0x8c159894;
            t2->f50 = (void *)0x8c1598f4;
            t2->f58 = (void *)0x8c15991c;
            o->f24 = 0xa;
        }
    }
}
