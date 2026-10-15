typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0xb1];
    char fb1;
};
extern int g_8c504a24;
extern char g_8c504a28[];
extern void call_8c388984(void *, void *, int);
int operation_8c20a54c(void)
{
    int v2;
    S_vv1 *v1;
    v1 = (S_vv1 *)(void *)g_8c504a28;
    v2 = (int)0;
    while (8 > v2) {
        if (((v1->fb1 & 1)) == 0) {
            return (int)(v2);
        }
        v2 = (int)(v2 + 1);
        v1 = (S_vv1 *)((char *)v1 + 180);
    }
    call_8c388984((void *)((void *)g_8c504a28), (void *)((g_8c504a28 + 0xb4)), 0x13b);
    *(char *)(g_8c504a28 + 0x59d) = (unsigned int)*(char *)(g_8c504a28 + 0x59d) >> 1 << 1;
    g_8c504a24 -= 1;
    return 7;
}
