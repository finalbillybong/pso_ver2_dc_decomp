typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4689e0 S_g8c4689e0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TItemWpnBindGunA_ctor_8c23a414(int, void *, int);
int TItemWpnBindGunA_create_8c23a3c8(int a0)
{
    int t1;
    if (a0 != 0) {
        t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x234);
        if (t1 != 0) {
            TItemWpnBindGunA_ctor_8c23a414(t1, (void *)(*(S_g8c4689e0 **)0x8c4689e0), a0);
        }
        return (int)(t1);
    }
    return 0;
}
