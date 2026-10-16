typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_0 S_g8c467180_2c_0;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct S_vv4 S_vv4;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x4e];
    short f82;
    char unknown84[0x2];
    short f86;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_vv4 {
    int f00;
};
extern int lookup_low_id(int);
extern int call_8c03c1a4(int);
extern int operation_8c03c0ac(void *, int);
extern void call_8c19f09c(S_vv4 *, void *, int, int);
extern int current_mode_active(void);
extern int current_mode_in_range(void);
void operation_8c1cd974(Object *o, int a1, int a2, int a3)
{
    int v2;
    S_vv4 *v4;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    if (!(o->f82 >= o->f86)) {
        t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
        if (t1 != 0) {
            if (a1 == 4) {
                t4 = call_8c03c1a4((int)(t1 + 0x750));
                v2 = (int)t4;
            } else {
                t5 = operation_8c03c0ac((void *)(t1 + 0x74c), a1);
                v2 = (int)(char)t5;
            }
            if (v2 > 0) {
                v4 = (S_vv4 *)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (o->f82 << 2));
                call_8c19f09c(v4, (void *)(*(S_g8c467180_2c_0 **)((char *)((char *)(*(S_g8c467180 **)0x8c467180)->f2c + 0x0) + (a1 + 0x135 << 2))), v2, a2);
                if (a3 != 0) {
                    t2 = current_mode_active();
                    if (t2 != 0) {
                        t3 = current_mode_in_range();
                        if (t3 == 0) {
                            goto L_8c1cda10;
                        }
                    }
                    v4->f00 |= 0x80;
                }
L_8c1cda10:;
                o->f82 += 1;
            }
        }
    }
}
