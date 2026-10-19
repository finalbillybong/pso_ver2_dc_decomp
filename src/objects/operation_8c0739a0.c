typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c0744dc S_c8c0744dc;
typedef struct Object Object;
typedef struct Arg0_8 Arg0_8;
typedef struct S_vv2 S_vv2;
struct Object {
    char unknown0[0x4];
    unsigned short f04;
    short f06;
    Arg0_8 *f08;
};
struct S_c8c0744dc {
    char unknown0[0xd4];
    unsigned short fd4;
    char unknownd6[0x5e];
    unsigned char f134;
};
struct S_vv2 {
    unsigned char f00;
};
extern int g_8c5134c0;
extern int lookup_low_id(int);
extern S_c8c0744dc *find_record_8c0744dc(int);
extern void call_8c073a98(S_c8c0744dc *, short, int);
extern int forward_state_8c02300c(void *, void *);
extern int call_8c1924c0(int, void *);
extern int call_8c1631c8(S_vv2 *);
extern int operation_8c02303c(void *, void *);
void operation_8c0739a0(Object *o)
{
    int t1;
    short v1;
    S_vv2 *v2;
    S_c8c0744dc *t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    v1 = (short)o->f06;
    t1 = lookup_low_id((int)(o->f04));
    if (t1 != 0) {
        t2 = find_record_8c0744dc((int)(o->f08));
        if (t2 != 0) {
            t2->fd4 = 0xffff;
            if (t2->f134 == 4) {
                call_8c073a98(t2, v1, t1);
                return;
            }
            t3 = forward_state_8c02300c((void *)t1, (void *)t2);
            if (t3 != 1) {
                return;
            }
            call_8c073a98(t2, v1, t1);
            return;
        }
        t4 = call_8c1924c0(v1, (void *)(o->f08));
        if (t4 != 0) {
            v2 = (S_vv2 *)(t4 + 0x10);
            if (v2->f00 == 4) {
                t5 = call_8c1631c8(v2);
                if (t5 == 0) {
                    return;
                }
                call_8c073a98((S_c8c0744dc *)t5, v1, t1);
                return;
            }
            t6 = operation_8c02303c((void *)t1, (void *)v2);
            if (t6 != 1) {
                return;
            }
            t7 = call_8c1631c8(v2);
            if (t7 == 0) {
                return;
            }
            call_8c073a98((S_c8c0744dc *)t7, v1, t1);
            return;
        }
        g_8c5134c0 = 1;
    }
}
