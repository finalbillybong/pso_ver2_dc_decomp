typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
struct Object {
    char unknown0[0x24];
    int f24;
    Arg0_28 *f28;
};
struct S_c8c122700 {
    char unknown0[0x168];
    void *f168;
    void *f16c;
    void *f170;
};
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void operation_8c19b2b4(void *, int, int);
void operation_8c187ed8(Object *o)
{
    S_c8c122700 *t1;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x174);
    if (t1 != 0) {
        operation_8c19b2b4((void *)t1, (int)o, (int)o->f28);
    }
    t1->f168 = (void *)0x8c187fac;
    t1->f170 = (void *)0x8c187fbc;
    t1->f16c = (void *)0x8c187f8c;
    o->f24 = 5;
}
