typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_x41968 S_x41968;
struct S_x41968 {
    Vector3 f00;
};
struct Object {
    Vector3 tag;
};
extern int g_8c4e2278;
extern char g_8c4e1af8[];
int operation_8c1ad004(Object *o, int a1, int a2)
{
    int v1;
    v1 = (int)g_8c4e2278;
    if (v1 >= 0x60) {
        return 0;
    }
    *(Vector3 *)&((S_x41968 *)(v1 * 0x14 + g_8c4e1af8))->f00 = *(Vector3 *)&o->tag;
    *(int *)((char *)(g_8c4e1af8 + 0xc) + (v1 * 0x14)) = a1;
    *(int *)((char *)(g_8c4e1af8 + 0x10) + (v1 * 0x14)) = a2;
    g_8c4e2278 += 1;
    return 1;
}
