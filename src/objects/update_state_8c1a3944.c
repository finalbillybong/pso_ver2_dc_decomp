typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c0744dc S_c8c0744dc;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_310 S_g8c467180_2c_310;
typedef struct S_g8c467180_2c_314 S_g8c467180_2c_314;
typedef struct S_g8c467180_2c_318 S_g8c467180_2c_318;
typedef struct S_g8c467180_2c_31c S_g8c467180_2c_31c;
typedef struct S_g8c467180_2c_320 S_g8c467180_2c_320;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x310];
    S_g8c467180_2c_310 *f310;
    S_g8c467180_2c_314 *f314;
    S_g8c467180_2c_318 *f318;
    S_g8c467180_2c_31c *f31c;
    S_g8c467180_2c_320 *f320;
};
struct S_c8c0744dc {
    char unknown0[0xec];
    int fec;
    char unknownf0[0x44];
    unsigned char f134;
};
struct Frame {
    char unknown0[0x4];
};
extern S_c8c0744dc *find_record_8c0744dc(int);
extern int forward_state_8c074944(void *, int);
extern int current_effect_mode(void);
extern void call_8c156d48(int, void *, int, int, int);
extern void call_8c156d30(int, void *, int, int);
extern int lookup_low_id(int);
extern int call_8c074560(S_c8c0744dc *, int, Frame *);
extern int slot_ready_8c1a3d50(void *, void *);
void update_state_8c1a3944(int a0, int a1, int a2)
{
    Frame frame;
    S_c8c0744dc *t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    t1 = find_record_8c0744dc(a2);
    if (t1 == 0) {
        return;
    }
    t2 = forward_state_8c074944((void *)t1, 2);
    if (t2 != 0) {
        t3 = forward_state_8c074944((void *)t1, 1);
        if (t3 == 0) {
            t4 = current_effect_mode();
            if (t4 != 0xf) {
                goto L_8c1a39a0;
            }
        }
        call_8c156d48(a1, (*(S_g8c467180 **)0x8c467180)->f2c->f314, 0x16, 0, -0x979798);
        goto L_8c1a39b4;
L_8c1a39a0:;
        call_8c156d30(a1, (*(S_g8c467180 **)0x8c467180)->f2c->f314, 6, 0);
    }
L_8c1a39b4:;
    if ((unsigned int)2 >= (unsigned int)t1->f134) {
        if (((t1->fec & 8)) != 0) {
            t5 = current_effect_mode();
            if (t5 == 0xf) {
                call_8c156d48(a1, (*(S_g8c467180 **)0x8c467180)->f2c->f318, 0x16, 2, -0x979798);
                goto L_8c1a3a6e;
            }
            call_8c156d30(a1, (*(S_g8c467180 **)0x8c467180)->f2c->f318, 6, 2);
        } else {
            t6 = lookup_low_id((int)*(S_g8c418248 **)0x8c418248);
            if (t6 != 0) {
                t7 = call_8c074560(t1, t6, (&frame));
                if (t7 != 0) {
                    t8 = slot_ready_8c1a3d50((void *)a0, (void *)t1);
                    if (t8 != 0) {
                        t9 = current_effect_mode();
                        if (t9 != 0xf) {
                            call_8c156d30(a1, (*(S_g8c467180 **)0x8c467180)->f2c->f31c, 6, 1);
                            goto L_8c1a3a6e;
                        }
                    }
                }
                call_8c156d48(a1, (*(S_g8c467180 **)0x8c467180)->f2c->f31c, 0x16, 1, -0x979798);
            }
        }
    }
L_8c1a3a6e:;
    t10 = current_effect_mode();
    if (t10 == 0xf) {
        call_8c156d48(a1, (*(S_g8c467180 **)0x8c467180)->f2c->f310, 0x16, 3, -0x979798);
    } else {
        call_8c156d30(a1, (*(S_g8c467180 **)0x8c467180)->f2c->f310, 6, 3);
    }
    call_8c156d30(a1, (*(S_g8c467180 **)0x8c467180)->f2c->f320, 6, 7);
}
