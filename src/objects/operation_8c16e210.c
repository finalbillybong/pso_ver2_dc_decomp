typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Frame Frame;
typedef struct S_g8c4db408 S_g8c4db408;
typedef struct S_g8c4db408_0 S_g8c4db408_0;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct S_c8c053d84 {
    char unknown0[0x3c];
    Vector3 f3c;
};
extern S_g8c4db408 *g_8c4db408;
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern void create_effect_7cc0(void *, int, int, int);
void operation_8c16e210(int a0)
{
    Frame frame;
    float v3;
    char *v2;
    char *v1;
    S_c8c053d84 *t1;
    int v4;
    char *v5;
    v5 = (char *)g_8c4db408;
    v1 = (char *)*(int *)(v5 + (a0++ << 2));
    v2 = (char *)*(int *)(v5 + (a0++ << 2));
    v4 = *(int *)(v5 + (a0++ << 2));
    v3 = (float)*(int *)(v5 + (a0 << 2));
    t1 = lookup_object_by_id((unsigned short)v4);
    if (t1 != 0) {
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&t1->f3c;
        (&frame)->f00.f04 += v3;
        create_effect_7cc0((void *)(&frame), (int)((short)v1), 0, (int)(v2));
    }
}
