typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db408 S_g8c4db408;
typedef struct S_g8c4db408_0 S_g8c4db408_0;
extern S_g8c4db408 *g_8c4db408;
extern int call_8c021ef8(void *);
extern int call_8c04a9c4(int, void *);
void operation_8c171248(int a0, int a1)
{
    int t1;
    int t2;
    t1 = call_8c021ef8(*(S_g8c4db408_0 **)((char *)g_8c4db408 + ((unsigned char)a0++ << 2)));
    if (t1 != 0) {
        t2 = call_8c04a9c4(t1, *(S_g8c4db408_0 **)((char *)g_8c4db408 + ((unsigned char)a0 << 2)));
        if (t2 != 0) {
            *(int *)((char *)g_8c4db408 + ((unsigned char)a1 << 2)) = 1;
            return;
        }
        *(int *)((char *)g_8c4db408 + ((unsigned char)a1 << 2)) = 0;
        return;
    }
    a1++;
    *(int *)((char *)g_8c4db408 + ((unsigned char)a1 << 2)) = 0;
}
