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
typedef struct S_g8c30e2e8 S_g8c30e2e8;
typedef struct S_g8c30fb08 S_g8c30fb08;
typedef struct S_g8c4d7ce4 S_g8c4d7ce4;
typedef struct S_vv15_0 S_vv15_0;
typedef struct S_vv16_0 S_vv16_0;
typedef struct S_vv17_0 S_vv17_0;
typedef struct S_vv18_0 S_vv18_0;
typedef struct S_x54944 S_x54944;
typedef struct Block_L8c4d7ce8_0 {
    char unknown0[0x31];
    char f31;
    char unknown32[0x1e];
} Block_L8c4d7ce8_0;
struct S_x54944 {
    Block80 f00;
};
struct S_L8c30be88 {
    char unknown0[0x2];
    unsigned short f02;
};
struct S_L8c4d7ce8 {
    Block_L8c4d7ce8_0 f00;
};
extern S_g8c30fb08 *g_8c30fb08;
extern int g_8c4703c0;
extern S_g8c4d7ce4 *g_8c4d7ce4;
extern Block80 g_8c4d8154;
extern int g_8c4d81a4;
extern S_L8c30be88 g_8c30be88;
extern S_L8c4d7ce8 g_8c4d7ce8;
extern char g_8c4d7d38[];
extern int call_8c18de4c(int);
extern void operation_8c104d00(int, int);
extern void call_8c18de08(void *);
extern void call_8c028430(char, int, void *, int, void *);
void *operation_8c10bc84(int a0)
{
    int v7;
    int v10;
    int v13;
    int t1;
    if (g_8c4d7ce4 != 0) {
        return 0;
    }
    t1 = call_8c18de4c(0x1400);
    g_8c4d7ce4 = (S_g8c4d7ce4 *)(int)(t1);
    if (g_8c4d81a4 != 0) {
        g_8c4d81a4 = 0;
        *(Block80 *)&(&g_8c4d7ce8)->f00 = *(Block80 *)&g_8c4d8154;
    } else {
        operation_8c104d00((int)g_8c30fb08, t1);
        *(Block80 *)&(&g_8c4d7ce8)->f00 = *(Block80 *)&((S_x54944 *)((int)g_8c4d7ce4 + a0 * 0x50))->f00;
    }
    call_8c18de08(g_8c4d7ce4);
    v7 = (int)g_8c4703c0;
    g_8c4d7ce4 = (S_g8c4d7ce4 *)0;
    if (v7 >= 0 && 2 >= v7) {
        v10 = v7;
    } else {
        v10 = 2;
    }
    v13 = (int)((*(unsigned short *)((char *)&g_8c30be88.f02 + (a0 * 0x28)) & 0xffff) + v10 * 0x19);
    if (v7 == 3) {
        v13 = (int)((*(unsigned short *)((char *)&g_8c30be88.f02 + (a0 * 0x28)) & 0xffff) + 0x96);
    }
    if (v13 >= 0xc6) {
        v13 = 0xc6;
    }
    switch (v7) {
    case 0:
        call_8c028430((&g_8c4d7ce8)->f00.f31, 5, *(void **)((a0 << 2) + 0x8c30e2e8), v13, g_8c4d7d38);
        break;
    case 1:
        call_8c028430((&g_8c4d7ce8)->f00.f31, 5, *(void **)((a0 << 2) + 0x8c30f808), v13, g_8c4d7d38);
        break;
    case 2:
        call_8c028430((&g_8c4d7ce8)->f00.f31, 5, *(void **)((a0 << 2) + 0x8c30f908), v13, g_8c4d7d38);
        break;
    case 3:
        call_8c028430((&g_8c4d7ce8)->f00.f31, 5, *(void **)((a0 << 2) + 0x8c30fa08), v13, g_8c4d7d38);
        break;
    default:
        call_8c028430((&g_8c4d7ce8)->f00.f31, 5, *(void **)((a0 << 2) + 0x8c30e2e8), v13, g_8c4d7d38);
        break;
    }
    *(Block80 *)&*(Block80 *)(g_8c4d7d38 + 0x370) = *(Block80 *)&(&g_8c4d7ce8)->f00;
    return (void *)g_8c4d7d38;
}
