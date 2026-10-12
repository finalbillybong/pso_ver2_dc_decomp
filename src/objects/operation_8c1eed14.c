typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c41cd2c S_g8c41cd2c;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct Object Object;
typedef struct Arg0_338 Arg0_338;
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
};
struct S_g8c41cd2c {
    int f00;
};
struct Object {
    char unknown0[0x338];
    Arg0_338 *f338;
};
struct Arg0_338 {
    char unknown0[0x8];
    int f08;
};
extern int hierarchy_is_active(void *);
extern int call_8c02b2a4(void);
extern int call_8c01c25c(void);
extern int player_flag9_8c026508(void);
extern void call_8c02947c(Object *);
void operation_8c1eed14(Object *o)
{
    int v4;
    int v47;
    int v48;
    int v49;
    int v50;
    int t1;
    int t2;
    int t3;
    int t4;
    if (*(int *)0x8c46fe20 != 0) {
        (*(S_g8c46fe20 **)0x8c46fe20)->f20 |= 2;
    }
    if (*(int *)0x8c41cd2c != 0) {
        t1 = hierarchy_is_active((void *)*(S_g8c41cd2c **)0x8c41cd2c);
        if (t1 != 0) {
            v4 = (int)((*(S_g8c41cd2c **)0x8c41cd2c)->f00 == *(int *)0x8c324020);
            if (v4 != 0) {
                goto L_8c1eed60;
            }
        }
        *(int *)0x8c41cd2c = 0;
    }
L_8c1eed60:;
    v47 = (int)(((o->f338->f08 & 4)) != 0);
    if (v47 != 0) {
        v48 = (int)(*(int *)0x8c510ba0 != 0);
        if (v48 == 0) {
            t2 = call_8c02b2a4();
            if (t2 == 0) {
                v49 = (int)(*(int *)0x8c4dc800 == 1);
                if (v49 != 0) {
                    v50 = (int)(*(int *)0x8c4dc800 == 1);
                    if (v50 == 0) {
                        return;
                    }
                    t3 = call_8c01c25c();
                    if (t3 != 0x10) {
                        return;
                    }
                }
                t4 = player_flag9_8c026508();
                if (t4 == 0) {
                    call_8c02947c(o);
                }
            }
        }
    }
}
