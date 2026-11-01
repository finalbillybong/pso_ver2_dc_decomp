typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TObjEneRe7BeruraPunch_ctor_8c0f39dc(int, int, int);
int TObjEneRe7BeruraPunch_create_8c0f399c(int a0)
{
    int t1;
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x154);
    if (t1 != 0) {
        TObjEneRe7BeruraPunch_ctor_8c0f39dc(t1, a0, a0);
    }
    return (int)(t1);
}
