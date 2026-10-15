typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c021ef8_3b8 S_c8c021ef8_3b8;
typedef struct S_c8c0744dc S_c8c0744dc;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_vv1 S_vv1;
struct S_c8c021ef8 {
    char unknown0[0x3b8];
    S_c8c021ef8_3b8 *f3b8;
};
struct S_c8c0744dc {
    char unknown0[0x134];
    unsigned char f134;
};
struct S_vv1 {
    char unknown0[0x46c];
    int f46c;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern S_c8c0744dc *find_record_8c0744dc(int);
extern int call_8c0e7494(S_c8c0744dc *);
extern int call_8c0daf44(void *, S_c8c021ef8 *, int, int);
extern void set_pair_values(void *, short, short);
void operation_8c2356f0(int a0)
{
    S_vv1 *v1;
    S_c8c021ef8 *t1;
    S_c8c0744dc *t2;
    int t3;
    int t4;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0 && t1->f3b8 != 0) {
        v1 = (S_vv1 *)t1->f3b8;
        t2 = find_record_8c0744dc(a0);
        if (t2 != 0 && t2->f134 == 3) {
            t3 = call_8c0e7494(t2);
            if (t3 != -1) {
                t4 = call_8c0daf44((void *)((int)v1 + 0x468), t1, 4, t3);
                if (t4 != 0) {
                    set_pair_values((void *)((int)v1 + 0x468), (short)4, (short)t3);
                    v1->f46c = 1;
                }
            }
        }
    }
}
