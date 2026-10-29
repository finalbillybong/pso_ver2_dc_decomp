typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4d5958 S_L8c4d5958;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_x10672 S_x10672;
typedef struct S_x75696 S_x75696;
typedef struct S_x96320 S_x96320;
struct Frame {
    float f00;
    char unknown4[0x4];
    float f08;
};
struct S_L8c4d5958 {
    float f00;
    char unknown4[0x4];
    float f08;
};
struct S_x75696 {
    float f00;
};
struct Object {
    float tag;
    char unknown4[0x4];
    float f08;
};
struct S_x10672 {
    float f00;
};
struct S_x96320 {
    float f00;
};
extern int g_8c4d5948;
extern S_L8c4d5958 g_8c4d5958;
extern char g_8c4d5448[];
extern float distance_xz(void *, void *);
int operation_8c102cd0(Object *o, int a1, int a2, int a3)
{
    Frame frame;
    int v6;
    if (g_8c4d5948 > 0x3f) {
        return 0;
    }
    if ((((short)a3 & 1)) == 0) {
        (&frame)->f00 = (&g_8c4d5958)->f00;
        (&frame)->f08 = (&g_8c4d5958)->f08;
        if (distance_xz((void *)o, (void *)(&frame)) > 90000.0f) {
            return 0;
        }
    }
    v6 = (int)(g_8c4d5948 * 0x14);
    ((S_x75696 *)(v6 + g_8c4d5448))->f00 = o->tag;
    ((S_x10672 *)(v6 + (char *)(g_8c4d5448 + 0x4)))->f00 = o->f08;
    ((S_x96320 *)(v6 + (char *)(g_8c4d5448 + 0x8)))->f00 = 1.0f;
    *(int *)((char *)(g_8c4d5448 + 0x10) + (v6)) = a1;
    *(short *)((char *)(g_8c4d5448 + 0xe) + (v6)) = a2;
    *(short *)((char *)(g_8c4d5448 + 0xc) + (v6)) = 0;
    g_8c4d5948 += 1;
    return 1;
}
