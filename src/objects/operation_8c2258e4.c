typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c5060c0 S_g8c5060c0;
typedef struct S_g8c5060c8 S_g8c5060c8;
extern int call_8c12b0cc(void);
extern int call_8c225a5c(void);
extern int allocate_block(void *, unsigned int);
extern void operation_8c2259fc(int);
extern void call_8c12b154(void *, int, int);
void operation_8c2258e4(int a0)
{
    int t1;
    int v3;
    int v2;
    t1 = call_8c12b0cc();
    v3 = call_8c225a5c();
    v2 = allocate_block((void *)(*(S_g8c5060c0 **)0x8c5060c0), (unsigned int)(t1 + 1));
    if (v2 == 0) {
        do {
            operation_8c2259fc(0);
            v2 = allocate_block((void *)(*(S_g8c5060c0 **)0x8c5060c0), (unsigned int)(t1 + 1));
        } while (v2 == 0);
        v3 = call_8c225a5c();
    }
    *(int *)((char *)0x8c5060c8 + (v3 << 2)) = (int)(v2);
    call_8c12b154((void *)(*(S_g8c5060c8 **)((char *)0x8c5060c8 + (v3 << 2))), a0, (int)(t1 + 1));
}
