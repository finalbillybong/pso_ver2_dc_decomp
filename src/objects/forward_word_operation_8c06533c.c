typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c468994 S_g8c468994;
extern void word_operation_8c065360(void *);
int forward_word_operation_8c06533c(void)
{
    if (*(int *)0x8c468994 != 0) {
        word_operation_8c065360(*(S_g8c468994 **)0x8c468994);
        return;
    }
    return 0;
}
