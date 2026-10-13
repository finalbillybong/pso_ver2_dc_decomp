typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c513360 S_g8c513360;
struct S_g8c513360 {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    int f20;
};
extern int allocate_block(void *, unsigned int);
extern void call_8c257ec4(int, void *);
void operation_8c257e60(unsigned int a0)
{
    int t1;
    if (*(int *)0x8c513360 == 0) {
        t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x24);
        if (t1 != 0) {
            call_8c257ec4(t1, (void *)(*(S_g8c44be9c **)0x8c44be9c));
        }
    }
    if ((unsigned int)7 > a0) {
        if (a0 == 0) {
            (*(S_g8c513360 **)0x8c513360)->f04 |= 1;
            return;
        }
        (*(S_g8c513360 **)0x8c513360)->f20 |= 1 << a0;
    }
}
