typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4703c0 S_g8c4703c0;
extern void call_8c17945c(void *);
extern void call_8c17963c(void);
void operation_8c179428(void)
{
    char *v1;
    v1 = (char *)*(int *)0x8c4db954;
    call_8c17945c((void *)(*(S_g8c4703c0 **)0x8c4703c0));
    if (*(int *)0x8c4db954 != (int)v1) {
        call_8c17963c();
    }
}
