typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TItemObjectTV_ctor_8c24d270(void *, int, void *);
void TItemObjectTV_create_8c24d230(int a0, int a1)
{
    int t1;
    if (a0 != 0 && a1 != 0) {
        t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x24);
        if (t1 != 0) {
            TItemObjectTV_ctor_8c24d270((void *)t1, a0, (void *)a1);
        }
    }
}
