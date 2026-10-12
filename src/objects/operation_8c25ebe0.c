typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
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
struct S_c8c021ef8 {
    char unknown0[0x350];
    int f350;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern void call_8c026700(S_c8c021ef8 *, int);
void operation_8c25ebe0(void)
{
    int v6;
    S_c8c021ef8 *t1;
    if (*(int *)0x8c46fe20 != 0) {
        (*(S_g8c46fe20 **)0x8c46fe20)->f20 |= 1;
        if (*(int *)0x8c4d59d8 != 0) {
            (*(S_g8c4d59d8 **)0x8c4d59d8)->f04 |= 0x10;
        }
    }
    t1 = lookup_low_id((int)*(S_g8c418248 **)0x8c418248);
    if (t1 != 0) {
        v6 = (int)(((t1->f350 & 1)) != 0);
        if (v6 == 0) {
            call_8c026700(t1, -1);
        }
    }
}
