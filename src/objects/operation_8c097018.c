typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c300d08[];
extern void call_8c0a28f8(void *);
void operation_8c097018(void)
{
    call_8c0a28f8((void *)((g_8c300d08 + 0x2c)));
    *(float *)0x8c300d60 = 1.0f;
}
