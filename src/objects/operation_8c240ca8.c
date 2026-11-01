typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4689e0 S_g8c4689e0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TItemWpnUmbrella_ctor_8c240cf4(void *, void *, void *);
int TItemWpnUmbrella_create_8c240ca8(int a0)
{
    int t1;
    if (a0 != 0) {
        t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x240);
        if (t1 != 0) {
            TItemWpnUmbrella_ctor_8c240cf4((void *)t1, (void *)(*(S_g8c4689e0 **)0x8c4689e0), (void *)a0);
        }
        return (int)(t1);
    }
    return 0;
}
