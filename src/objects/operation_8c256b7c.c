typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TObjHexLine_ctor_8c256bb4(int, int);
int TObjHexLine_create_8c256b7c(int a0)
{
    int t1;
    t1 = heap_alloc_8c122700(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x24);
    if (t1 != 0) {
        TObjHexLine_ctor_8c256bb4(t1, a0);
    }
    return t1;
}
