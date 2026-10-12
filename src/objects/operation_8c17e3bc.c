typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbb10 S_g8c4dbb10;
extern void call_8c011ec0(void *);
int operation_8c17e3bc(void)
{
    if (*(int *)0x8c4dbb10 != 0) {
        call_8c011ec0(*(S_g8c4dbb10 **)0x8c4dbb10);
        *(int *)0x8c4dbb10 = 0;
        return 1;
    }
    return 0;
}
