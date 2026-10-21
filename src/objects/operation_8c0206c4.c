typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c01e888 S_c8c01e888;
typedef struct S_c8c0b4a60 S_c8c0b4a60;
typedef struct S_g8c44be8c S_g8c44be8c;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct S_vv18 S_vv18;
typedef struct S_x99952 S_x99952;
typedef struct Block_p0_3c {
    float f00;
    float f04;
    float f08;
} Block_p0_3c;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x1a];
    Block_p0_3c f3c;
    Vector3 f48;
    char unknown54[0x10];
    int f64;
    char unknown68[0x2a0];
    short f308;
    char unknown30a[0x46];
    int f350;
    char unknown354[0x2dc];
    float f630;
    float f634;
};
struct S_c8c0b4a60 {
    Vector3 f00;
};
struct S_x99952 {
    int f00;
    int f04;
};
struct S_vv18 {
    Vector3 f00;
};
struct S_c8c01e888 {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
};
extern int g_8c418248;
extern S_g8c44be8c *g_8c44be8c;
extern S_g8c4d97e0 *g_8c4d97e0;
extern char g_8c41cd3c[];
extern int operation_8c01c25c(void);
extern int operation_8c177a00(int, int);
extern int forward_current_effect_mode_8c02c1bc(void);
extern void operation_8c026700(int, int);
extern void operation_8c1a9f58(int);
extern int allocate_block(void *, unsigned int);
extern void initialize_manager_8c03bfdc(void *, void *);
extern S_c8c0b4a60 *operation_8c0b4a60(short, void *);
extern S_c8c01e888 *operation_8c01e888(void *, int);
extern void update_object_center(void *);
extern void actor_elevated_position(void *, void *);
extern void operation_8c0a1b78(void *);
extern void process_entries_8c03bb2c(void *);
void operation_8c0206c4(Object *o)
{
    S_vv18 *v18;
    S_x99952 *row;
    int v2;
    int v7;
    int v9;
    int v17;
    unsigned short v1;
    unsigned short v16;
    float v35;
    int v31;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    S_c8c0b4a60 *t8;
    S_c8c01e888 *t9;
    t1 = operation_8c01c25c();
    if (t1 == 0xf) {
        v1 = (unsigned short)o->f20;
        v2 = (int)(v1 == g_8c418248);
        if (v2 != 0) {
            t2 = operation_8c177a00(0, 0xb);
            if (t2 == 0) {
                t3 = operation_8c177a00(1, 0xb);
                if (t3 == 0) {
                    t4 = operation_8c177a00(2, 0xb);
                    if (t4 == 0) {
                        t5 = operation_8c177a00(3, 0xb);
                        if (t5 == 0) {
                            v7 = (int)0;
                            goto L_8c020720;
                        }
                    }
                }
            }
            v7 = (int)1;
L_8c020720:;
            if (v7 == 0) {
                v9 = (int)(((o->f350 & 0x1000000)) != 0);
                if (v9 == 0) {
                    t6 = forward_current_effect_mode_8c02c1bc();
                    if (t6 != 0) {
                        o->f350 |= 0x1000000;
                        o->f3c.f00 = 0.0f;
                        o->f3c.f04 = 0.0f;
                        o->f3c.f08 = -2015.0f;
                        o->f64 = 0x8000;
                        operation_8c026700((int)o, 0x1e);
                        operation_8c1a9f58(3);
                        t7 = allocate_block(g_8c4d97e0, (unsigned int)0x20);
                        if (t7 == 0) {
                            goto L_8c02083a;
                        }
                        initialize_manager_8c03bfdc((void *)t7, g_8c44be8c);
                        goto L_8c02083a;
                    }
                }
            }
        }
    }
    t8 = operation_8c0b4a60(o->f20, (void *)(&o->f64));
    if (t8 != 0) {
        *(Vector3 *)&o->f3c = *(Vector3 *)&t8->f00;
    } else {
        v16 = (unsigned short)o->f20;
        row = (S_x99952 *)((unsigned short)v16 * 0x14 + g_8c41cd3c);
        v17 = (int)(o->f308 == 2);
        if (v17 == 0 && row->f00 == 1) {
            row->f00 = 0;
            o->f64 = (int)(row->f04);
            v18 = (S_vv18 *)((char *)row + 8);
            *(Vector3 *)&o->f3c = *(Vector3 *)&v18->f00;
            goto L_8c02083a;
        }
        t9 = operation_8c01e888((void *)o, (int)((unsigned short)v16));
        if (t9 != 0) {
            *(Vector3 *)&o->f3c = *(Vector3 *)&t9->f3c;
            o->f64 = (int)(t9->f64);
        } else {
            o->f3c.f00 = 0.0f;
            o->f3c.f04 = 0.0f;
            o->f3c.f08 = 0.0f;
        }
    }
L_8c02083a:;
    *(Vector3 *)&o->f48 = *(Vector3 *)&o->f3c;
    update_object_center((void *)o);
    actor_elevated_position((void *)(((char *)o + 0x7d4)), (void *)o);
    v35 = (float)o->f3c.f08;
    o->f630 = o->f3c.f00;
    o->f634 = v35;
    v31 = (int)(o->f20 == g_8c418248);
    if (v31 != 0) {
        operation_8c0a1b78((void *)o);
    }
    process_entries_8c03bb2c((void *)(((char *)o + 0x62c)));
}
