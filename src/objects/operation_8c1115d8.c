typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
struct S_c8c021ef8 {
    char unknown0[0x308];
    short f308;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern void call_8c02688c(S_c8c021ef8 *);
void operation_8c1115d8(int a0)
{
    int v1;
    S_c8c021ef8 *t1;
    t1 = lookup_low_id((unsigned short)a0);
    if (t1 != 0) {
        v1 = (int)(t1->f308 == 2);
        if (v1 == 0) {
            call_8c02688c(t1);
        }
    }
}
