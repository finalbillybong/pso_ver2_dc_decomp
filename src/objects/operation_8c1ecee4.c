typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
struct S_c8c021ef8 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x2ee];
    int f310;
    char unknown314[0xac];
    short f3c0;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern int call_8c1eca04(S_c8c021ef8 *, int);
extern void call_8c1ec2d0(S_c8c021ef8 *);
int operation_8c1ecee4(int a0)
{
    int v1;
    int v2;
    int v3;
    S_c8c021ef8 *t1;
    int t2;
    t1 = lookup_low_id((int)*(S_g8c418248 **)0x8c418248);
    if (t1 != 0) {
        v1 = (int)(((t1->f310 & 0x100)) != 0);
        if (v1 == 0) {
            v2 = (int)(t1->f20 == *(int *)0x8c418248);
            if (v2 != 0) {
                t2 = call_8c1eca04(t1, (short)a0);
                v3 = (int)t2;
            } else {
                v3 = (int)0;
            }
            if (v3 == 0) {
                return 0;
            }
            t1->f3c0 = a0;
            call_8c1ec2d0(t1);
            return 1;
        }
    }
    return 0;
}
