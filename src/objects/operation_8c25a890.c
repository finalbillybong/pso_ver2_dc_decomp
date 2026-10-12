typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
struct S_c8c021ef8 {
    char unknown0[0x34];
    int f34;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern void call_8c02688c(int);
void operation_8c25a890(int a0, int a1)
{
    S_c8c021ef8 *t1;
    t1 = lookup_low_id(a1);
    if (t1 != 0) {
        call_8c02688c((int)t1);
        t1->f34 &= -0x20001;
    }
}
