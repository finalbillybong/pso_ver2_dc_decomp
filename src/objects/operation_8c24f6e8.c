typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4689e0 S_g8c4689e0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TItemWpnYasuShotGun_ctor_8c24f734(int, void *, int);
int TItemWpnYasuShotGun_create_8c24f6e8(int a0)
{
    int t1;
    if (a0 != 0) {
        t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x244);
        if (t1 != 0) {
            TItemWpnYasuShotGun_ctor_8c24f734(t1, (void *)(*(S_g8c4689e0 **)0x8c4689e0), a0);
        }
        return (int)(t1);
    }
    return 0;
}
