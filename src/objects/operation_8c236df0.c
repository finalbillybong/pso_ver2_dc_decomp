typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c510b80 S_L8c510b80;
typedef struct S_g8c510b28 S_g8c510b28;
typedef struct S_vv2_0 S_vv2_0;
struct S_L8c510b80 {
    float f00;
    float f04;
    float f08;
    int f0c;
    char unknown10[0x2];
    short f12;
};
extern S_g8c510b28 *g_8c510b28;
extern S_L8c510b80 g_8c510b80;
extern void call_8c03dc40(void *, int);
extern void release_scene_control_resource(void *);
void operation_8c236df0(void)
{
    int v2;
    int v1;
    (&g_8c510b80)->f12 = 1;
    (&g_8c510b80)->f00 = 63.0f;
    (&g_8c510b80)->f04 = 0.0f;
    (&g_8c510b80)->f08 = 63.0f;
    (&g_8c510b80)->f0c = 0;
    call_8c03dc40(g_8c510b28, 1);
    g_8c510b28 = (S_g8c510b28 *)0;
    v1 = (int)0;
    while (9 > v1) {
        v2 = (int)(v1 << 2);
        release_scene_control_resource((void *)(*(S_vv2_0 **)((char *)((char *)v2 + 0x0) + ((int)((void *)0x8c339628)))));
        *(int *)((char *)((char *)v2 + 0x0) + ((int)((void *)0x8c339628))) = 0;
        v1 = (int)(v1 + 1);
    }
}
