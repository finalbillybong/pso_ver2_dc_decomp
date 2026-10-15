typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbbec S_g8c4dbbec;
typedef struct S_vv1_0 S_vv1_0;
extern char g_8c319ad4[];
extern void call_8c122774(void *, void *);
extern void call_8c369eb8(void *);
extern int call_8c104d50(int);
extern int allocate_block(void *, unsigned int);
extern void operation_8c104d00(int, int);
int operation_8c186c6c(int a0, int a1)
{
    int v1;
    int t1;
    int t2;
    v1 = (int)(a0 << 2);
    if (*(int *)((char *)((char *)v1 + 0x0) + ((int)((void *)0x8c4dbba0))) != 0) {
        call_8c122774((void *)(*(S_g8c4dbbec **)0x8c4dbbec), (void *)(*(S_vv1_0 **)((char *)((char *)v1 + 0x0) + ((int)((void *)0x8c4dbba0)))));
        *(int *)((char *)((char *)v1 + 0x0) + ((int)((void *)0x8c4dbba0))) = 0;
    }
    call_8c369eb8((void *)((g_8c319ad4 + 0x1a)));
    t1 = call_8c104d50(a1);
    if (t1 > 0) {
        t2 = allocate_block((void *)(*(S_g8c4dbbec **)0x8c4dbbec), (unsigned int)t1);
        if (t2 != 0) {
            operation_8c104d00(a1, t2);
            *(int *)((char *)((char *)v1 + 0x0) + ((int)((void *)0x8c4dbba0))) = (int)(t2);
            call_8c369eb8((void *)((g_8c319ad4 + 0x12)));
            return 1;
        }
    }
    call_8c369eb8((void *)((g_8c319ad4 + 0x12)));
    return 0;
}
