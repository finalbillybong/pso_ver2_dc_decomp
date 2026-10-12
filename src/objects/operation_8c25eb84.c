typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c46fe20 S_g8c46fe20;
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
};
struct S_c8c021ef8 {
    char unknown0[0x350];
    int f350;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern void call_8c026700(S_c8c021ef8 *, int);
void operation_8c25eb84(void)
{
    int v4;
    S_c8c021ef8 *t1;
    if (*(int *)0x8c46fe20 != 0) {
        (*(S_g8c46fe20 **)0x8c46fe20)->f20 |= 2;
    }
    t1 = lookup_low_id((int)*(S_g8c418248 **)0x8c418248);
    if (t1 != 0) {
        v4 = (int)(((t1->f350 & 1)) != 0);
        if (v4 == 0) {
            call_8c026700(t1, -1);
        }
    }
}
