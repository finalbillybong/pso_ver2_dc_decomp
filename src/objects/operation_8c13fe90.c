typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TObjCMLoadPlDataReq_ctor_2_8c13ff90(void *, int, void *);
int TObjCMLoadPlDataReq_create_8c13fe90(int a0, int a1)
{
    int t1;
    t1 = heap_alloc_8c122700(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x94);
    if (t1 != 0) {
        TObjCMLoadPlDataReq_ctor_2_8c13ff90((void *)t1, a0, (void *)a1);
    }
    return t1;
}
