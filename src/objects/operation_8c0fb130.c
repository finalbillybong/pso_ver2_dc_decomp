typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TObjEneSlimeWaterBomb_ctor_8c0faf6c(int, int, int);
int TObjEneSlimeWaterBomb_create_8c0fb130(int a0, int a1)
{
    int t1;
    t1 = heap_alloc_8c122700(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x3b4);
    if (t1 != 0) {
        TObjEneSlimeWaterBomb_ctor_8c0faf6c(t1, a0, a1);
    }
    return t1;
}
