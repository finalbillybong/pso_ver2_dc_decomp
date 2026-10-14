typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46ec50 S_g8c46ec50;
typedef struct S_g8c46ec54 S_g8c46ec54;
typedef struct S_g8c46ed0c S_g8c46ed0c;
typedef struct S_g8c46ed10 S_g8c46ed10;
extern void call_8c011ec0(void *);
void operation_8c09d250(void)
{
    if (*(int *)0x8c46ed10 != 0) {
        call_8c011ec0((void *)(*(S_g8c46ed10 **)0x8c46ed10));
        *(int *)0x8c46ed10 = 0;
    }
    if (*(int *)0x8c46ed0c != 0) {
        call_8c011ec0((void *)(*(S_g8c46ed0c **)0x8c46ed0c));
        *(int *)0x8c46ed0c = 0;
    }
    if (*(int *)0x8c46ec54 != 0) {
        call_8c011ec0((void *)(*(S_g8c46ec54 **)0x8c46ec54));
        *(int *)0x8c46ec54 = 0;
    }
    if (*(int *)0x8c46ec50 != 0) {
        call_8c011ec0((void *)(*(S_g8c46ec50 **)0x8c46ec50));
        *(int *)0x8c46ec50 = 0;
    }
}
