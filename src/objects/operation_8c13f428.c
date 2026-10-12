typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d9e24 S_g8c4d9e24;
extern void call_8c011ec0(void *);
void operation_8c13f428(void)
{
    if (*(int *)0x8c4d9e20 != 0) {
        call_8c011ec0(*(S_g8c4d9e24 **)0x8c4d9e24);
        *(int *)0x8c4d9e24 = 0;
    }
}
