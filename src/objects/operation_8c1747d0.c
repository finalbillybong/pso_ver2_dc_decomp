typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TObjItemOKWindow_ctor_8c1744ec(int, int);
int TObjItemOKWindow_create_8c1747d0(int a0)
{
    int t1;
    t1 = heap_alloc_8c122700(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x6c);
    if (t1 == 0) {
        for (;;) {
        }
    }
    if (t1 != 0) {
        TObjItemOKWindow_ctor_8c1744ec(t1, a0);
    }
    return t1;
}
