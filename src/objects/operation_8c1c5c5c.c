typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TItemEffHeaven_ctor_8c1c5cb8(void *, int, int, int, int);
void TItemEffHeaven_create_8c1c5c5c(int a0, int a1, int a2, int a3)
{
    int t1;
    if (a0 != 0 && (unsigned short)a2 != 0xffff && a1 != 0) {
        t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x50);
        if (t1 != 0) {
            TItemEffHeaven_ctor_8c1c5cb8((void *)t1, a0, a1, a2, a3);
        }
    }
}
