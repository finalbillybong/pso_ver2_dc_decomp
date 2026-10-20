typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block80 {
    int words[20];
} Block80;
typedef struct S_L8c30be88 S_L8c30be88;
typedef struct S_L8c4d7ce8 S_L8c4d7ce8;
typedef struct S_g8c30f908 S_g8c30f908;
typedef struct S_g8c4d7ce4 S_g8c4d7ce4;
typedef struct S_vv13_0 S_vv13_0;
typedef struct S_vv14_0 S_vv14_0;
typedef struct S_vv15_0 S_vv15_0;
typedef struct S_vv16_0 S_vv16_0;
typedef struct S_x71088 S_x71088;
typedef struct Block_L8c4d7ce8_0 {
    char unknown0[0x31];
    char f31;
    char unknown32[0x1e];
} Block_L8c4d7ce8_0;
struct S_x71088 {
    Block80 f00;
};
struct S_L8c30be88 {
    char unknown0[0x2];
    unsigned short f02;
};
struct S_L8c4d7ce8 {
    Block_L8c4d7ce8_0 f00;
};
extern int g_8c4703c0;
extern S_g8c4d7ce4 *g_8c4d7ce4;
extern Block80 g_8c4d8154;
extern int g_8c4d81a4;
extern S_L8c30be88 g_8c30be88;
extern S_L8c4d7ce8 g_8c4d7ce8;
extern char g_8c4d7d38[];
extern void call_8c18de08(void *);
extern void call_8c028430(char, int, void *, int, void *);
void *operation_8c10baf0(int a0)
{
    int v5;
    int v8;
    int v11;
    if (g_8c4d81a4 != 0) {
        g_8c4d81a4 = 0;
        *(Block80 *)&(&g_8c4d7ce8)->f00 = *(Block80 *)&g_8c4d8154;
    } else {
        *(Block80 *)&(&g_8c4d7ce8)->f00 = *(Block80 *)&((S_x71088 *)((int)g_8c4d7ce4 + a0 * 0x50))->f00;
    }
    call_8c18de08(g_8c4d7ce4);
    v5 = (int)g_8c4703c0;
    g_8c4d7ce4 = (S_g8c4d7ce4 *)0;
    if (v5 >= 0 && 2 >= v5) {
        v8 = v5;
    } else {
        v8 = 2;
    }
    v11 = (int)((*(unsigned short *)((char *)&g_8c30be88.f02 + (a0 * 0x28)) & 0xffff) + v8 * 0x19);
    if (v5 == 3) {
        v11 = (int)((*(unsigned short *)((char *)&g_8c30be88.f02 + (a0 * 0x28)) & 0xffff) + 0x96);
    }
    if (v11 >= 0xc6) {
        v11 = 0xc6;
    }
    switch (v5) {
    case 0:
        call_8c028430((&g_8c4d7ce8)->f00.f31, 5, *(void **)((char *)(a0 << 2) + 0x8c30e2e8), v11, (void *)g_8c4d7d38);
        break;
    case 1:
        call_8c028430((&g_8c4d7ce8)->f00.f31, 5, *(void **)((char *)(a0 << 2) + 0x8c30f808), v11, (void *)g_8c4d7d38);
        break;
    case 2:
        call_8c028430((&g_8c4d7ce8)->f00.f31, 5, *(void **)((char *)(a0 << 2) + 0x8c30f908), v11, (void *)g_8c4d7d38);
        break;
    case 3:
        call_8c028430((&g_8c4d7ce8)->f00.f31, 5, *(void **)((char *)(a0 << 2) + 0x8c30fa08), v11, (void *)g_8c4d7d38);
        break;
    default:
        call_8c028430((&g_8c4d7ce8)->f00.f31, 5, *(void **)((char *)(a0 << 2) + 0x8c30f908), v11, (void *)g_8c4d7d38);
    }
    *(Block80 *)&*(Block80 *)(g_8c4d7d38 + 0x370) = *(Block80 *)&(&g_8c4d7ce8)->f00;
    return (void *)g_8c4d7d38;
}
