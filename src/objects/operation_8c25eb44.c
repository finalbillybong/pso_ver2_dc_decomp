typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
struct S_c8c021ef8 {
    char unknown0[0x350];
    int f350;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern void call_8c026700(S_c8c021ef8 *, int);
void operation_8c25eb44(void)
{
    int v1;
    S_c8c021ef8 *t1;
    t1 = lookup_low_id((int)*(S_g8c418248 **)0x8c418248);
    if (t1 != 0) {
        v1 = (int)(((t1->f350 & 1)) != 0);
        if (v1 == 0) {
            call_8c026700(t1, -1);
        }
    }
}
