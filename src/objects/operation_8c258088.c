typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c513384 S_g8c513384;
extern void call_8c03ed70(void *);
extern void call_8c18de08(void *);
void operation_8c258088(void)
{
    if (*(int *)0x8c513384 != 0) {
        if (*(int *)0x8c513380 != 0) {
            call_8c03ed70((void *)0x8c2e20a8);
        } else {
            call_8c18de08(*(S_g8c513384 **)0x8c513384);
        }
        *(int *)0x8c513384 = 0;
    }
}
