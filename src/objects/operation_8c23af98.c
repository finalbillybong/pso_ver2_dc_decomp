typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4689e0 S_g8c4689e0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TItemWpnChaoCane_ctor_8c23afe4(int, void *, int);
int TItemWpnChaoCane_create_8c23af98(int a0)
{
    int t1;
    if (a0 != 0) {
        t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x23c);
        if (t1 != 0) {
            TItemWpnChaoCane_ctor_8c23afe4(t1, (void *)(*(S_g8c4689e0 **)0x8c4689e0), a0);
        }
        return (int)(t1);
    }
    return 0;
}
