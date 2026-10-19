typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block76 {
    int words[19];
} Block76;
typedef struct Frame Frame;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4e30c0 S_g8c4e30c0;
typedef struct S_g8c4e30c4 S_g8c4e30c4;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct S_vv14 S_vv14;
typedef struct S_vv15 S_vv15;
typedef struct S_vv15_42c S_vv15_42c;
typedef struct S_vv1_42c S_vv1_42c;
typedef struct Block_frame_4c {
    char unknown0[0xc];
    Vector3 f0c;
    char unknown18[0x20];
    float f38;
    char unknown3c[0x4];
    int f40;
    int f44;
    char unknown48[0x4];
} Block_frame_4c;
typedef struct Block_p0_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3c;
typedef struct Block_frame_0 {
    char unknown0[0xc];
    Vector3 f0c;
    char unknown18[0x20];
    float f38;
    char unknown3c[0x4];
    int f40;
    int f44;
    char unknown48[0x4];
} Block_frame_0;
struct Object {
    int tag;
    char unknown4[0x38];
    Block_p0_3c f3c;
    char unknown48[0x2c2];
    short f30a;
};
struct Frame {
    Block_frame_0 f00;
    Block_frame_4c f4c;
};
struct S_vv15 {
    char unknown0[0x42c];
    S_vv15_42c *f42c;
};
struct S_vv15_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
};
struct S_vv1 {
    char unknown0[0x42c];
    S_vv1_42c *f42c;
};
struct S_vv1_42c {
    char unknown0[0x18];
    int f18;
    int f1c;
};
struct S_vv14 {
    char unknown0[0x4];
    int f04;
    int f08;
};
extern int g_8c2e2ad8;
extern int g_8c32b6c0;
extern Block76 g_8c32b6d4;
extern Block76 g_8c32b720;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4e30c0 *g_8c4e30c0;
extern S_g8c4e30c4 *g_8c4e30c4;
extern int allocate_block(void *, unsigned int);
extern void initialize_panel_8c087d8c(void *, void *, void *);
extern void create_effect_777c(void *, int);
extern int current_effect_mode(void);
extern void call_8c05fbf8(int, void *, int, int);
void operation_8c1e4264(Object *o)
{
    Frame frame;
    S_vv15 *v15;
    S_vv1 *v1;
    int v2;
    S_vv14 *v14;
    int t1;
    int t2;
    int t3;
    int t4;
    if (o->f30a == 1) {
        return;
    }
    *(Block76 *)&(&frame)->f4c = *(Block76 *)&g_8c32b6d4;
    *(Vector3 *)&(&frame)->f4c.f0c = *(Vector3 *)&o->f3c;
    (&frame)->f4c.f38 = o->f3c.f04;
    v15 = (S_vv15 *)g_8c4e30c0;
    (&frame)->f4c.f40 = (int)(v15->f42c->f08);
    (&frame)->f4c.f44 = (int)(v15->f42c->f0c);
    v1 = (S_vv1 *)v15;
    *(Block76 *)&(&frame)->f00 = *(Block76 *)&g_8c32b720;
    *(Vector3 *)&(&frame)->f00.f0c = *(Vector3 *)&o->f3c;
    (&frame)->f00.f38 = o->f3c.f04;
    (&frame)->f00.f40 = (int)(v1->f42c->f18);
    (&frame)->f00.f44 = (int)(v1->f42c->f1c);
    v2 = (int)(o->tag == g_8c32b6c0);
    if (v2 != 0) {
        v14 = (S_vv14 *)g_8c4e30c4;
        (&frame)->f4c.f44 = (int)(v14->f04);
        (&frame)->f00.f44 = (int)(v14->f08);
    }
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x78);
    if (t1 != 0) {
        initialize_panel_8c087d8c((void *)t1, g_8c44be98, (void *)(&(&frame)->f4c));
    }
    t2 = allocate_block(g_8c4d97e0, (unsigned int)0x78);
    if (t2 != 0) {
        initialize_panel_8c087d8c((void *)t2, g_8c44be98, (void *)(&frame));
    }
    create_effect_777c((void *)(&o->f3c), 0x45);
    create_effect_777c((void *)(&o->f3c), 0x46);
    if (g_8c2e2ad8 == 1) {
        t3 = current_effect_mode();
        if (t3 != 0x10) {
            t4 = current_effect_mode();
            if (t4 != 0x11) {
                goto L_8c1e43ba;
            }
        }
        call_8c05fbf8(0x40005, (void *)(&o->f3c), 0, 0);
        return;
    }
L_8c1e43ba:;
    call_8c05fbf8(0x40010, (void *)(&o->f3c), 0, 0);
}
