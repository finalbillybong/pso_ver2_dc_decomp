typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be80 S_g8c44be80;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c513460 S_g8c513460;
struct S_g8c513460 {
    char unknown0[0x4];
    short f04;
};
extern int allocate_block(void *, unsigned int);
extern void operation_8c25de30(void *, int);
extern void operation_8c25e194(void *, int, int);
void operation_8c25decc(int a0, int a1)
{
    int t1;
    if (a0 < 0 || !(a1 > 0)) {
        return;
    }
    if (a0 == 0) {
        if (*(int *)0x8c513460 != 0) {
            (*(S_g8c513460 **)0x8c513460)->f04 |= 1;
            return;
        }
        t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x40);
        if (t1 == 0) {
            goto L_8c25df1a;
        }
        operation_8c25de30((void *)t1, (int)(*(S_g8c44be80 **)0x8c44be80));
    } else {
        if (*(int *)0x8c513460 == 0) {
            return;
        }
    }
L_8c25df1a:;
    if (*(int *)0x8c513460 != 0) {
        operation_8c25e194((void *)(*(S_g8c513460 **)0x8c513460), a0, a1);
    }
}
