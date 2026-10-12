typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe00 S_g8c46fe00;
typedef struct S_g8c46fe04 S_g8c46fe04;
extern void call_8c03dc40(void *, int);
extern void call_8c37d534(void *);
void operation_8c0db1a0(void)
{
    if (*(int *)0x8c46fe04 != 0) {
        call_8c03dc40(*(S_g8c46fe04 **)0x8c46fe04, 1);
    }
    call_8c37d534(*(S_g8c46fe00 **)0x8c46fe00);
}
