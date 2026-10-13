typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469a94 S_g8c469a94;
typedef struct S_g8c469a98 S_g8c469a98;
extern void call_8c03dc40(void *, int);
extern void release_scene_control_resource(void *);
extern void clear_global_8c08a584(void);
extern void call_8c07cdb4(void);
void operation_8c07922c(void)
{
    call_8c03dc40((void *)(*(S_g8c469a94 **)0x8c469a94), 1);
    release_scene_control_resource((void *)(*(S_g8c469a98 **)0x8c469a98));
    *(int *)0x8c469a98 = 0;
    clear_global_8c08a584();
    call_8c07cdb4();
}
