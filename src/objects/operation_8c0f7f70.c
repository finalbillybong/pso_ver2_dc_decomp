typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_x62480 S_x62480;
struct S_x62480 {
    Block8 f00;
};
extern Block8 g_8c285bc0;
extern void call_8c0f8030(int, int, int, int);
void operation_8c0f7f70(int a0)
{
    int v1;
    int v6;
    v6 = (int)0;
    goto L_8c0f7f98;
    v1 = (int)0;
L_8c0f7f84:;
    *(Block8 *)&((S_x62480 *)(a0 + 0x3d4 + (v1 << 3)))->f00 = *(Block8 *)&g_8c285bc0;
    v6 = (int)(v1 + 1);
L_8c0f7f98:;
    v1 = (int)v6;
    if (4 > v6) {
        goto L_8c0f7f84;
    }
    call_8c0f8030(a0, 0, 0, 0);
}
