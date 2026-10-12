typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbb14 S_g8c4dbb14;
extern void call_8c011ec0(void *);
int operation_8c17e42c(void)
{
    if (*(int *)0x8c4dbb14 != 0) {
        call_8c011ec0(*(S_g8c4dbb14 **)0x8c4dbb14);
        *(int *)0x8c4dbb14 = 0;
        return 1;
    }
    return 0;
}
