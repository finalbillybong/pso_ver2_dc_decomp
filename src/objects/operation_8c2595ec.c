typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c5133a0 S_g8c5133a0;
struct S_g8c5133a0 {
    char unknown0[0x20];
    int f20;
};
extern int allocate_block(void *, unsigned int);
extern void call_8c259638(int, void *);
void operation_8c2595ec(int a0)
{
    int t1;
    if (*(int *)0x8c5133a0 == 0) {
        t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x24);
        if (t1 != 0) {
            call_8c259638(t1, *(S_g8c44be9c **)0x8c44be9c);
        }
    }
    if (*(int *)0x8c5133a0 != 0) {
        (*(S_g8c5133a0 **)0x8c5133a0)->f20 = a0;
    }
}
