typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d9a40 S_g8c4d9a40;
typedef struct S_g8c4d9a44 S_g8c4d9a44;
typedef struct S_g8c4d9a44_4 S_g8c4d9a44_4;
struct S_g8c4d9a44 {
    char unknown0[0x4];
    S_g8c4d9a44_4 *f04;
};
extern void release_scene_control_resource(void *);
extern void call_8c03dc40(void *, int);
extern void call_8c18de08(S_g8c4d9a44 *);
void operation_8c130b70(void)
{
    release_scene_control_resource((void *)((*(S_g8c4d9a44 **)0x8c4d9a44)->f04));
    if (*(int *)0x8c4d9a40 != 0) {
        call_8c03dc40((void *)(*(S_g8c4d9a40 **)0x8c4d9a40), 1);
    }
    if (*(int *)0x8c4d9a44 != 0) {
        call_8c18de08((S_g8c4d9a44 *)(*(S_g8c4d9a44 **)0x8c4d9a44));
    }
}
