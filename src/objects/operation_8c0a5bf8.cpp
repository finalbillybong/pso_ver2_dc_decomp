typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct Arg0_20 Arg0_20;
typedef struct S_vv2 S_vv2;
class Object;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
};
typedef struct ObjectData {
    char unknown0[0x20];
    Arg0_20 *f20;
    unsigned short f24;
    char unknown26[0x2];
    int f28;
    char unknown2c[0x8];
    int f34;
    char unknown38[0x4];
    int f3c;
    char unknown40[0xc];
    float f4c;
    float f50;
    float f54;
    int f58;
    char unknown5c[0x18];
    float f74;
    char unknown78[0x10];
    int f88;
    char unknown8c[0x8];
    int f94;
    int f98;
} ObjectData;
struct S_c8c021ef8 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x35a];
    int f37c;
};
struct S_vv2 {
    char unknown0[0x350];
    int f350;
    char unknown354[0x28];
    int f37c;
};
struct Arg0_20 {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x1c];
    int f64;
};
struct S_g8c46fe20 {
    char unknown0[0x20];
    unsigned short f20;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern S_g8c418248 *g_8c418248;
extern S_g8c46fe20 *g_8c46fe20;
extern S_L8c41cba0 g_8c41cba0;
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" void operation_8c0a1b78(void *);
extern "C" void operation_8c02b1e0(int);
extern "C" int angle_step(int, int, int);
extern "C" int current_effect_mode(void);
extern "C" int effect_control_button(Object *);
extern "C" int player_flag9_8c026508(void);
extern "C" int operation_8c2097a8(int);
extern "C" void update_effect_rotation_record(void *);
extern "C" void update_effect_control_input(void *);
extern "C" void call_8c0a681c(Object *);
extern "C" void call_8c0a679c(Object *);
extern "C" void call_8c0a5f74(Object *);
extern "C" void reset_follow_slot_state(void *);
extern "C" void operation_8c0a5bf8(Object *o)
{
    S_vv2 *v2;
    int v3;
    char *v4;
    int v9;
    int v10;
    int v11;
    char *v12;
    int v31;
    int v32;
    int v34;
    int v41;
    S_c8c021ef8 *t1;
    S_c8c021ef8 *t2;
    S_c8c021ef8 *t3;
    S_c8c021ef8 *t4;
    S_c8c021ef8 *t5;
    S_c8c021ef8 *t6;
    S_c8c021ef8 *t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    t1 = lookup_low_id((int)(((ObjectData *)o)->f24));
    ((ObjectData *)o)->f20 = (Arg0_20 *)t1;
    if (((ObjectData *)o)->f20 == 0) {
        t2 = lookup_low_id((int)g_8c418248);
        ((ObjectData *)o)->f20 = (Arg0_20 *)t2;
        if (t2 != 0) {
            ((ObjectData *)o)->f24 = t2->f20;
        }
        ((ObjectData *)o)->f3c = 0;
        return;
    }
    t3 = lookup_low_id((int)g_8c418248);
    if (t3 != 0) {
        v2 = (S_vv2 *)((ObjectData *)o)->f20;
        if (v2->f37c != t3->f37c) {
            t4 = lookup_low_id((int)g_8c418248);
            operation_8c0a1b78((void *)t4);
            v3 = (int)0;
            goto L_8c0a5c94;
            v4 = (char *)v3;
            do {
                t5 = lookup_low_id((int)(v4));
                if (t5 != 0) {
                    operation_8c02b1e0((int)t5);
                }
                v3 = (int)(v4 + 1);
L_8c0a5c94:;
                v4 = (char *)v3;
            } while (4 > v3);
            return;
        }
        v9 = (int)g_8c418248;
        if (((ObjectData *)o)->f24 != v9 && v2 != 0) {
            v10 = (int)(((v2->f350 & 0x20000)) != 0);
            if (v10 != 0) {
                t6 = lookup_low_id(v9);
                operation_8c0a1b78((void *)t6);
                v11 = (int)0;
                goto L_8c0a5d08;
                v12 = (char *)v11;
                do {
                    t7 = lookup_low_id((int)(v12));
                    if (t7 != 0) {
                        operation_8c02b1e0((int)t7);
                    }
                    v11 = (int)(v12 + 1);
L_8c0a5d08:;
                    v12 = (char *)v11;
                } while (4 > v11);
            }
        }
    }
    if (((ObjectData *)o)->f94 != 0) {
        ((ObjectData *)o)->f88 = 0;
        t8 = angle_step((int)(((ObjectData *)o)->f58), 0x2000, 0xb6);
        ((ObjectData *)o)->f58 = (int)t8;
    } else {
        t9 = current_effect_mode();
        if (t9 == 0) {
            t10 = effect_control_button(o);
            if (t10 != 0) {
                goto L_8c0a5db0;
            }
            t11 = angle_step((int)(((ObjectData *)o)->f58), 0x3555, 0xb6);
            ((ObjectData *)o)->f58 = (int)t11;
        } else {
            t12 = effect_control_button(o);
            if (t12 == 0) {
                t13 = angle_step((int)(((ObjectData *)o)->f58), 0x2e38, 0xb6);
                ((ObjectData *)o)->f58 = (int)t13;
            }
        }
    }
L_8c0a5db0:;
    t14 = current_effect_mode();
    if (t14 == 0) {
        ((ObjectData *)o)->f74 = 20.43f;
    }
    o->v11();
    if (((ObjectData *)o)->f28 != 0) {
        if (((ObjectData *)o)->f28 == 1) {
            goto L_8c0a5e38;
        }
    } else {
        ((ObjectData *)o)->f4c = ((ObjectData *)o)->f20->f3c;
        ((ObjectData *)o)->f50 = ((ObjectData *)o)->f20->f40 + 19.8f;
        ((ObjectData *)o)->f54 = ((ObjectData *)o)->f20->f44;
        ((ObjectData *)o)->f34 = ((ObjectData *)o)->f20->f64 + 0x8000;
        ((ObjectData *)o)->f28 = 1;
        goto L_8c0a5f56;
L_8c0a5e38:;
        t15 = player_flag9_8c026508();
        if (t15 != 0) {
            if (g_8c46fe20 == 0) {
                v32 = (int)0;
            } else {
                if (((g_8c46fe20->f20 & 0x100)) != 0) {
                    v31 = (int)1;
                } else {
                    v31 = (int)0;
                }
                v32 = (int)v31;
            }
            if (v32 != 1) {
                goto L_8c0a5ebe;
            }
        }
        t16 = operation_8c2097a8(2);
        if (t16 != 0) {
            v34 = (int)0x10000;
        } else {
            v34 = (int)0x20000;
        }
        if ((((&g_8c41cba0)->f28 & v34)) != 0 && ((ObjectData *)o)->f94 == 0) {
            goto L_8c0a5eac;
        }
        if (((ObjectData *)o)->f98 != 0) {
L_8c0a5eac:;
            ((ObjectData *)o)->f98 = 0;
            ((ObjectData *)o)->f34 = ((ObjectData *)o)->f20->f64 + 0x8000;
        }
L_8c0a5ebe:;
        v41 = (int)((ObjectData *)o)->f20->f34;
        if (((v41 & 0x100000)) != 0 || ((v41 & 0x20)) != 0) {
            ((ObjectData *)o)->f88 = 0;
            goto L_8c0a5f4a;
        }
        if (((v41 & 0x800)) != 0) {
            ((ObjectData *)o)->f88 = 0;
            update_effect_rotation_record((void *)o);
        } else {
            t17 = effect_control_button(o);
            if (t17 != 0) {
                ((ObjectData *)o)->f88 = 0;
                update_effect_control_input((void *)o);
            } else {
                call_8c0a681c(o);
            }
        }
L_8c0a5f4a:;
        call_8c0a679c(o);
        call_8c0a5f74(o);
    }
L_8c0a5f56:;
    reset_follow_slot_state((void *)o);
}
