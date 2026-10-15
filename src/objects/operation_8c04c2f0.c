typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db9e8 S_g8c4db9e8;
typedef struct S_vv4 S_vv4;
struct S_vv4 {
    char unknown0[0x3207];
    char f3207;
};
extern int call_8c04c338(S_vv4 *);
void operation_8c04c2f0(void)
{
    S_vv4 *v4;
    int t1;
    v4 = (S_vv4 *)*(S_g8c4db9e8 **)0x8c4db9e8;
    if (v4 == 0) {
        t1 = call_8c04c338(v4);
        *(int *)0x8c467188 = (char)t1;
        return;
    }
    if (v4->f3207 >= 5) {
        v4->f3207 = 1;
    }
    *(int *)0x8c467188 = v4->f3207;
}
