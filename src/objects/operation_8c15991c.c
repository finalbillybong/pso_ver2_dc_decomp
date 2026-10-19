typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct S_c8c122700 {
    char unknown0[0x22ec];
    void *f22ec;
    void *f22f0;
    void *f22f4;
};
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void call_8c221f44(S_c8c122700 *, void *, int);
void operation_8c15991c(void)
{
    S_c8c122700 *t1;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x22f8);
    if (t1 != 0) {
        call_8c221f44(t1, g_8c44be98, 0);
    }
    if (t1 != 0) {
        t1->f22ec = (void *)0x8c159988;
        t1->f22f0 = (void *)0x8c1599a8;
        t1->f22f4 = (void *)0x8c1599b8;
    }
}
