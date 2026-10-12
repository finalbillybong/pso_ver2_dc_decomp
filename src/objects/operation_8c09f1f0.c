typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46ed84 S_g8c46ed84;
extern void call_8c03dc40(void *, int);
void operation_8c09f1f0(void)
{
    if (*(int *)0x8c46ed84 != 0) {
        call_8c03dc40(*(S_g8c46ed84 **)0x8c46ed84, 1);
        *(int *)0x8c46ed84 = 0;
    }
    *(int *)0x8c46ed80 = 0;
}
