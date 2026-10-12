typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Arg1 Arg1;
typedef struct Arg1_c Arg1_c;
struct S_c8c021ef8 {
    char unknown0[0x308];
    short f308;
};
struct Arg1 {
    char unknown0[0xc];
    Arg1_c *f0c;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern void call_8c023bb4(S_c8c021ef8 *, int);
extern void call_8c02231c(S_c8c021ef8 *, void *, int);
void operation_8c163e70(int a0, Arg1 *a1)
{
    int v1;
    int v2;
    S_c8c021ef8 *t1;
    if (a1 != 0) {
        t1 = lookup_low_id((unsigned short)a0);
        if (t1 != 0) {
            v1 = (int)(t1->f308 == 1);
            if (v1 != 1) {
                v2 = (int)(t1->f308 == 3);
                if (v2 != 1) {
                    return;
                }
                if (*(int *)0x8c418248 != *(int *)0x8c418258) {
                    return;
                }
            }
            call_8c023bb4(t1, (int)a1);
            call_8c02231c(t1, a1->f0c, 0);
        }
    }
}
