typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_vv2 S_vv2;
typedef struct S_vv4 S_vv4;
struct S_vv2 {
    Block8 f00;
};
struct S_vv4 {
    Block8 f00;
};
extern Block8 g_8c301764;
extern char g_8c46a208[];
void operation_8c09b3b8(void)
{
    S_vv2 *v2;
    int v1;
    int v3;
    S_vv4 *v4;
    int v5;
    int stride;
    v1 = (int)0;
    v2 = (S_vv2 *)(void *)0x8c46a000;
    while (0x41 > v1) {
        *(Block8 *)&v2->f00 = *(Block8 *)&g_8c301764;
        v1 = (int)(v1 + 1);
        v2 = (S_vv2 *)((char *)v2 + 8);
    }
    stride = 0x208;
    v3 = (int)0;
    while (7 > v3) {
        v4 = (S_vv4 *)(v3 * stride + g_8c46a208);
        v5 = (int)0;
        while (0x41 > v5) {
            *(Block8 *)&v4->f00 = *(Block8 *)&g_8c301764;
            v5 = (int)(v5 + 1);
            v4 = (S_vv4 *)((char *)v4 + 8);
        }
        v3 = (int)(v3 + 1);
    }
}
