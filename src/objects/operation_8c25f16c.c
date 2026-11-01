typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TObjSoloPlayWin_ctor_8c25f1a4(int, int);
int TObjSoloPlayWin_create_8c25f16c(int a0)
{
    int t1;
    t1 = heap_alloc_8c122700(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x2c);
    if (t1 != 0) {
        TObjSoloPlayWin_ctor_8c25f1a4(t1, a0);
    }
    return t1;
}
