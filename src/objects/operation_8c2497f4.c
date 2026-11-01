typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TObjBagWarnWin_ctor_8c249830(int, int);
int TObjBagWarnWin_create_8c2497f4(int a0)
{
    int t1;
    t1 = heap_alloc_8c122700(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0xa8);
    if (t1 != 0) {
        TObjBagWarnWin_ctor_8c249830(t1, a0);
    }
    return t1;
}
