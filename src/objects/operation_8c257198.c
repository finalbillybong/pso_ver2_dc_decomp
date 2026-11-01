typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TObjHexLine_ctor_8c2571dc(int, int, int);
int TObjHexLine_create_8c257198(int a0, int a1)
{
    int t1;
    t1 = heap_alloc_8c122700(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0xa4);
    if (t1 != 0) {
        TObjHexLine_ctor_8c2571dc(t1, a0, a1);
    }
    return t1;
}
