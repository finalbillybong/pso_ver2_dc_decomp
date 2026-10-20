typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c326d8c S_L8c326d8c;
typedef struct Object Object;
struct Object {
    char unknown0[0x390];
    int f390;
    char unknown394[0xc];
    int f3a0;
    char unknown3a4[0xc];
    int f3b0;
    char unknown3b4[0x1c];
    int f3d0;
    char unknown3d4[0x4];
    int f3d8;
    char unknown3dc[0x8];
    int f3e4;
    float f3e8;
    char unknown3ec[0x4];
    int f3f0;
};
struct S_L8c326d8c {
    char unknown0[0x4];
    int f04;
};
extern char g_8c326d64[];
typedef struct Pair8 {
    int a;
    int b;
} Pair8;
void operation_8c1b584c(Object *o)
{
    int v1;
    char *v6;
    v1 = (int)*(int *)((char *)0x8c326ec8 + (o->f3b0 << 2));
    if (v1 != -1) {
        o->f3e4 = (int)(v1);
        o->f3e8 = 0.0f;
        o->f3f0 = (int)(*(int *)((char *)0x8c326b6c + (v1 << 5)));
    }
    o->f3d0 = 0;
    v6 = (char *)o->f3b0;
    *(Pair8 *)(g_8c326d64 + 0x28) = *(Pair8 *)((char *)0x8c326ed4 + ((int)v6 << 3));
    o->f3d8 = 6;
    if (o->f390 == 5) {
        o->f3a0 = 0x12c;
        return;
    }
    o->f3a0 = 0x96;
}
