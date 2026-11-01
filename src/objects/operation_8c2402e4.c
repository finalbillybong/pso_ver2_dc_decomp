typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4689e0 S_g8c4689e0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TItemWpnSunShade_ctor_8c240330(void *, void *, void *);
int TItemWpnSunShade_create_8c2402e4(int a0)
{
    int t1;
    if (a0 != 0) {
        t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x240);
        if (t1 != 0) {
            TItemWpnSunShade_ctor_8c240330((void *)t1, (void *)(*(S_g8c4689e0 **)0x8c4689e0), (void *)a0);
        }
        return (int)(t1);
    }
    return 0;
}
