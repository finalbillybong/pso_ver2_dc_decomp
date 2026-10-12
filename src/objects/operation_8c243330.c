typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c46fe20_54 S_g8c46fe20_54;
typedef struct S_g8c4d59d8 S_g8c4d59d8;
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x32];
    S_g8c46fe20_54 *f54;
};
struct S_g8c46fe20_54 {
    char unknown0[0x22];
    short f22;
};
struct S_g8c4d59d8 {
    char unknown0[0x4];
    short f04;
};
extern int lookup_low_id(int);
extern void call_8c02688c(int);
void operation_8c243330(int a0, int a1)
{
    int t1;
    t1 = lookup_low_id((unsigned short)a0);
    if (t1 != 0) {
        call_8c02688c(t1);
    }
    if (a1 != 0) {
        if (*(int *)0x8c46fe20 != 0) {
            (*(S_g8c46fe20 **)0x8c46fe20)->f20 &= -0x21;
        }
        if (*(int *)0x8c46fe20 != 0 && (*(S_g8c46fe20 **)0x8c46fe20)->f54 != 0) {
            (*(S_g8c46fe20 **)0x8c46fe20)->f54->f22 &= -9;
        }
        if (*(int *)0x8c46fe20 != 0) {
            (*(S_g8c46fe20 **)0x8c46fe20)->f20 = (unsigned int)(*(S_g8c46fe20 **)0x8c46fe20)->f20 >> 1 << 1;
            if (*(int *)0x8c4d59d8 != 0) {
                (*(S_g8c4d59d8 **)0x8c4d59d8)->f04 &= -0x11;
            }
        }
    }
}
