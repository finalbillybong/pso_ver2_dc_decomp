typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4189e4 S_g8c4189e4;
extern void call_8c011ec0(void *);
void operation_8c013fa4(void)
{
    if (*(int *)0x8c4189e4 != 0) {
        call_8c011ec0((void *)(*(S_g8c4189e4 **)0x8c4189e4));
        *(int *)0x8c4189e4 = 0;
    }
}
