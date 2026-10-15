typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4d51d4 S_L8c4d51d4;
typedef struct S_g8c4d51dc S_g8c4d51dc;
struct S_L8c4d51d4 {
    char unknown0[0x8];
    S_g8c4d51dc *f08;
};
extern S_L8c4d51d4 g_8c4d51d4;
extern void call_8c35049c(void *);
void operation_8c1005d0(void)
{
    int v1;
    v1 = (int)0;
    while (1 > v1) {
        call_8c35049c((void *)(*(S_g8c4d51dc **)((char *)&g_8c4d51d4.f08 + (v1 << 2))));
        v1 = (int)(v1 + 1);
    }
}
