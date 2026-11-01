typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4689e0 S_g8c4689e0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TItemWpnOnScythe_ctor_8c251ee4(void *, void *, int);
int TItemWpnOnScythe_create_8c251e98(int a0)
{
    int t1;
    if (a0 != 0) {
        t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x238);
        if (t1 != 0) {
            TItemWpnOnScythe_ctor_8c251ee4((void *)t1, (void *)(*(S_g8c4689e0 **)0x8c4689e0), a0);
        }
        return (int)(t1);
    }
    return 0;
}
