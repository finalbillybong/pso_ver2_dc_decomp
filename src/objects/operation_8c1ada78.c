typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467240 S_g8c467240;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c4d59d8 S_g8c4d59d8;
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
};
struct S_g8c4d59d8 {
    char unknown0[0x4];
    short f04;
};
extern void operation_8c0220a4(void *);
void operation_8c1ada78(void)
{
    int v6;
    if (*(int *)0x8c46fe20 != 0) {
        (*(S_g8c46fe20 **)0x8c46fe20)->f20 = (unsigned int)(*(S_g8c46fe20 **)0x8c46fe20)->f20 >> 1 << 1;
        if (*(int *)0x8c4d59d8 != 0) {
            (*(S_g8c4d59d8 **)0x8c4d59d8)->f04 &= -0x11;
        }
    }
    v6 = (int)0;
    while (*(int *)0x8c467874 > v6) {
        if (*(int *)((char *)0x8c467240 + (v6 << 2)) != 0) {
            operation_8c0220a4(*(S_g8c467240 **)((char *)0x8c467240 + (v6 << 2)));
        }
        v6 = (int)(v6 + 1);
    }
}
