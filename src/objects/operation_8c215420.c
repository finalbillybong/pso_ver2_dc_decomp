typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TWindowDD_WS_ScrollBar_ctor_8c215450(int);
int TWindowDD_WS_ScrollBar_create_8c215420(void)
{
    int t1;
    t1 = heap_alloc_8c122700(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x78);
    if (t1 != 0) {
        TWindowDD_WS_ScrollBar_ctor_8c215450(t1);
    }
    return t1;
}
