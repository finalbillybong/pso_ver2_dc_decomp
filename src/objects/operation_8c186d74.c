typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbbec S_g8c4dbbec;
extern int allocate_block(void *, unsigned int);
extern void call_8c3889a4(int, int, int);
int operation_8c186d74(int a0, int a1, int a2)
{
    int v1;
    int t1;
    if (a0 > 0x11) {
        return 0;
    }
    v1 = (int)(a0 << 2);
    if (*(int *)((char *)((char *)v1 + 0x0) + ((int)((void *)0x8c4dbba0))) != 0) {
        return 0;
    }
    t1 = allocate_block((void *)(*(S_g8c4dbbec **)0x8c4dbbec), (unsigned int)a2);
    if (t1 != 0) {
        call_8c3889a4(t1, a1, a2);
        *(int *)((char *)((char *)v1 + 0x0) + ((int)((void *)0x8c4dbba0))) = (int)(t1);
        return 1;
    }
    return 0;
}
