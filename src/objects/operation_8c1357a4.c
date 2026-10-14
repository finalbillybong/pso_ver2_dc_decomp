typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d9b00 S_g8c4d9b00;
typedef struct S_g8c4d9b04 S_g8c4d9b04;
typedef struct S_g8c4d9b04_4 S_g8c4d9b04_4;
struct S_g8c4d9b04 {
    char unknown0[0x4];
    S_g8c4d9b04_4 *f04;
};
extern void release_scene_control_resource(void *);
extern void call_8c03dc40(void *, int);
extern void call_8c18de08(S_g8c4d9b04 *);
void operation_8c1357a4(void)
{
    release_scene_control_resource((void *)((*(S_g8c4d9b04 **)0x8c4d9b04)->f04));
    if (*(int *)0x8c4d9b00 != 0) {
        call_8c03dc40((void *)(*(S_g8c4d9b00 **)0x8c4d9b00), 1);
    }
    if (*(int *)0x8c4d9b04 != 0) {
        call_8c18de08((S_g8c4d9b04 *)(*(S_g8c4d9b04 **)0x8c4d9b04));
    }
}
