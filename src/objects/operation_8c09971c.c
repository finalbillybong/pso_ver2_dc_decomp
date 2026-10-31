typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_c8c122700_20 S_c8c122700_20;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct S_c8c122700 {
    char unknown0[0x18];
    void *f18;
    char unknown1c[0x4];
    S_c8c122700_20 *f20;
    int f24;
    char unknown28[0xc];
    Block8 f34;
    float f3c;
};
struct S_c8c122700_20 {
    char unknown0[0x48];
    Block8 f48;
};
extern S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern void TObject_ctor_8c0330e4(void *, void *);
S_c8c122700 *operation_8c09971c(int a0)
{
    S_c8c122700 *t1;
    t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x40);
    if (t1 != 0) {
        TObject_ctor_8c0330e4((void *)t1, (void *)a0);
        t1->f18 = (void *)0x8c265768;
        t1->f20 = (S_c8c122700_20 *)*(int *)0x8c460900;
        *(Block8 *)&t1->f34 = *(Block8 *)&t1->f20->f48;
        t1->f3c = 0.0f;
        t1->f24 = 0;
    }
    return t1;
}
