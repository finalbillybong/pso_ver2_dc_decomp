typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db408 S_g8c4db408;
extern char g_8c318c08[];
extern int call_8c12b114(int, void *, int);
void operation_8c172180(int a0)
{
    int t1;
    if (*(int *)0x8c4db9e4 != 0) {
        t1 = call_8c12b114((int)(*(int *)0x8c4db9e4 + 0x1224), (void *)((g_8c318c08 + 0x27)), 0x18);
        if (t1 == 0) {
            *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a0 << 2)) = 0;
            return;
        }
        *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a0 << 2)) = 1;
        return;
    }
    *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a0 << 2)) = 0;
}
