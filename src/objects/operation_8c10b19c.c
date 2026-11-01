typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TJudgmentSequence_ctor_8c187ca0(void *, int, int);
int TJudgmentSequence_create_8c10b19c(int a0)
{
    int t1;
    t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x34);
    if (t1 != 0) {
        TJudgmentSequence_ctor_8c187ca0((void *)t1, (int)(*(S_g8c44be98 **)0x8c44be98), a0);
    }
    return (int)(t1);
}
