typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db410 S_g8c4db410;
extern void request_resource_release(void *);
void operation_8c16d724(void)
{
    if (*(int *)0x8c4db410 != 0) {
        request_resource_release((void *)(*(S_g8c4db410 **)0x8c4db410));
        *(int *)0x8c4db410 = 0;
    }
}
