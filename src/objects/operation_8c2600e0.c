typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
struct S_c8c021ef8 {
    char unknown0[0x34];
    int f34;
};
struct Object {
    char unknown0[0x20];
    int f20;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern int operation_8c238fa4(int);
extern void call_8c12b154(int, int, int);
extern int current_effect_mode(void);
extern void call_8c260228(Object *);
void operation_8c2600e0(Object *o)
{
    char *v3;
    int v4;
    int v5;
    S_c8c021ef8 *t1;
    int v2;
    int v1;
    int t2;
    int t3;
    S_c8c021ef8 *t4;
    v1 = (int)0x7e4;
    v2 = (int)0;
    while (4 > v2) {
        t1 = lookup_low_id(v2);
        v3 = (char *)v2;
        v4 = (int)((int)(v3) << 2);
        v5 = (int)(v4 << 2);
        if (*(char *)((char *)((char *)o + 0x2c) + (v5)) == 0 && t1 != 0) {
            t2 = operation_8c238fa4(v2);
            if (t2 != 0) {
                call_8c12b154((int)((int)o + v5 + 0x2c), (int)((int)t1 + v1), 0xf);
                *(char *)((char *)((char *)o + 0x3b) + (v5)) = 0;
            }
        }
        v2 = (int)(v2 + 1);
    }
    t4 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    t3 = current_effect_mode();
    if (t3 == 0 && *(int *)0x8c4e2ba0 != 0 && t4 != 0 && ((t4->f34 & 0x2000000)) == 0) {
        call_8c260228(o);
        o->f20 = 1;
    }
}
