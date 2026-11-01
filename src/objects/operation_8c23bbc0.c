typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4689e0 S_g8c4689e0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TItemWpnDorillArm_ctor_8c23bc0c(int, void *, int);
int TItemWpnDorillArm_create_8c23bbc0(int a0)
{
    int t1;
    if (a0 != 0) {
        t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x244);
        if (t1 != 0) {
            TItemWpnDorillArm_ctor_8c23bc0c(t1, (void *)(*(S_g8c4689e0 **)0x8c4689e0), a0);
        }
        return (int)(t1);
    }
    return 0;
}
