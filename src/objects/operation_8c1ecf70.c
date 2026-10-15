typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c021ef8_3b8 S_c8c021ef8_3b8;
typedef struct S_c8c021ef8_3b8_s468 S_c8c021ef8_3b8_s468;
typedef struct S_g8c418248 S_g8c418248;
struct S_c8c021ef8 {
    char unknown0[0x3b8];
    S_c8c021ef8_3b8 *f3b8;
};
struct S_c8c021ef8_3b8_s468 {
    char unknown0[0x4];
    int f04;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern int call_8c0daf44(int, S_c8c021ef8 *, int, int);
extern void set_pair_values(void *, short, short);
void operation_8c1ecf70(int a0)
{
    S_c8c021ef8 *t1;
    int t2;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0 && t1->f3b8 != 0) {
        t2 = call_8c0daf44((int)((int)t1->f3b8 + 0x468), t1, 3, a0);
        if (t2 != 0) {
            set_pair_values((void *)((int)t1->f3b8 + 0x468), (short)3, (short)a0);
            ((S_c8c021ef8_3b8_s468 *)((char *)t1->f3b8 + 0x468))->f04 = 1;
        }
    }
}
