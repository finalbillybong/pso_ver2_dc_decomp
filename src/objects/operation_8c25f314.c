typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
struct S_c8c021ef8 {
    char unknown0[0x34];
    int f34;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern int call_8c25f36c(int);
int operation_8c25f314(int a0)
{
    int t1;
    S_c8c021ef8 *t2;
    t2 = lookup_low_id((int)*(S_g8c418248 **)0x8c418248);
    if (*(int *)0x8c4e2ba0 != 0) {
        t1 = call_8c25f36c(a0);
        if (t1 != 0 && t2 != 0 && ((t2->f34 & 0x2000000)) == 0) {
            return 1;
        }
    }
    return 0;
}
