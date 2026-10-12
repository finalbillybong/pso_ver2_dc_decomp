typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418a00 S_g8c418a00;
extern void call_8c02e910(void *);
void operation_8c015ab4(void)
{
    if (*(int *)0x8c418a00 != 0) {
        call_8c02e910(*(S_g8c418a00 **)0x8c418a00);
    }
}
