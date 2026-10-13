typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Arg1 Arg1;
struct S_c8c021ef8 {
    char unknown0[0x7cc];
    int f7cc;
    int f7d0;
};
struct Arg1 {
    int f00;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern int current_effect_mode(S_c8c021ef8 *);
int operation_8c0b4a60(int a0, Arg1 *a1)
{
    char *v1;
    S_c8c021ef8 *t1;
    int t2;
    S_c8c021ef8 *t3;
    if ((unsigned int)(unsigned short)a0 >= (unsigned int)4) {
        return 0;
    }
    t1 = lookup_low_id((int)((unsigned short)a0));
    if (t1 != 0) {
        v1 = (char *)t1->f7d0;
        if ((unsigned short)v1 == 0xffff) {
            return 0;
        }
        t1->f7d0 = 0xffff;
        t2 = current_effect_mode(t1);
        if (t2 == 0) {
            a1->f00 = (int)(*(int *)((char *)0x8c2855e8 + ((unsigned short)a0 << 2)));
            return 0x8c2855b8 + (unsigned short)a0 * 0xc;
        }
        t3 = lookup_low_id((int)((unsigned short)v1));
        if (t3 == 0) {
            return 0;
        }
        a1->f00 = (int)(t3->f7cc);
        return (int)(((char *)t3 + 0x7c0));
    }
    return 0;
}
