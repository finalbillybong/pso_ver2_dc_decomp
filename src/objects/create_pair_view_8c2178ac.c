typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct S_c8c122700 {
    int f00;
    char unknown4[0x14];
    void *f18;
    char unknown1c[0x2];
    short f1e;
};
extern void configure_pair_grid_view(int, int, int);
extern S_c8c122700 *heap_alloc_8c122700(void *, int);
extern void TWindowMessage_ctor_8c119470(S_c8c122700 *, int);
S_c8c122700 *TWindowMessageQuest_ctor_8c2178ac(int a0, int a1)
{
    S_c8c122700 *t1;
    configure_pair_grid_view(a0, a1, 1);
    t1 = heap_alloc_8c122700(*(S_g8c4d97e0 **)0x8c4d97e0, 0xa0);
    if (t1 != 0) {
        TWindowMessage_ctor_8c119470(t1, 1);
        t1->f18 = (void *)0x8c2782d4;
        t1->f00 = *(int *)0x8c3360b8;
        t1->f1e = 0xa0;
    }
    return t1;
}
