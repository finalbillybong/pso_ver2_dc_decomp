typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TObjItemNameEntry_ctor_8c173f64(int, int);
int TObjItemNameEntry_create_8c174144(int a0)
{
    int t1;
    t1 = heap_alloc_8c122700(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x28);
    if (t1 == 0) {
        for (;;) {
        }
    }
    if (t1 != 0) {
        TObjItemNameEntry_ctor_8c173f64(t1, a0);
    }
    return t1;
}
