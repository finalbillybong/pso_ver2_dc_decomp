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
typedef struct S_g8c469c88 S_g8c469c88;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_42c S_vv1_42c;
typedef struct S_vv9 S_vv9;
typedef struct S_vv9_42c S_vv9_42c;
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
    char unknown0[0x3c];
    Block_p0_3c f3c;
    char unknown48[0x2c2];
    short f30a;
};
struct Frame {
    Block_frame_0 f00;
    Block_frame_4c f4c;
};
struct S_vv9 {
    char unknown0[0x42c];
    S_vv9_42c *f42c;
};
struct S_vv9_42c {
    char unknown0[0x8];
    int f08;
};
struct S_vv1 {
    char unknown0[0x42c];
    S_vv1_42c *f42c;
};
struct S_vv1_42c {
    char unknown0[0x18];
    int f18;
};
extern Block76 g_8c2ff76c;
extern Block76 g_8c2ff7b8;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c469c88 *g_8c469c88;
extern int g_8c469c8c;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void create_effect(void *, int, int);
extern int allocate_block(void *, unsigned int);
extern void initialize_panel_8c087d8c(void *, void *, void *);
extern int current_effect_mode(void);
extern void call_8c05fbf8(int, void *, int, int);
void operation_8c0853d4(Object *o)
{
    Frame frame;
    S_vv9 *v9;
    int v10;
    S_vv1 *v1;
    int v2;
    int t1;
    int t2;
    int t3;
    if (o->f30a == 1) {
        return;
    }
    *(Block76 *)&(&frame)->f4c = *(Block76 *)&g_8c2ff76c;
    *(Vector3 *)&(&frame)->f4c.f0c = *(Vector3 *)&o->f3c;
    (&frame)->f4c.f38 = o->f3c.f04;
    v9 = (S_vv9 *)g_8c469c88;
    (&frame)->f4c.f40 = (int)(v9->f42c->f08);
    v10 = (int)g_8c469c8c;
    (&frame)->f4c.f44 = (int)(v10);
    v1 = (S_vv1 *)v9;
    v2 = (int)v10;
    *(Block76 *)&(&frame)->f00 = *(Block76 *)&g_8c2ff7b8;
    *(Vector3 *)&(&frame)->f00.f0c = *(Vector3 *)&o->f3c;
    (&frame)->f00.f38 = o->f3c.f04;
    (&frame)->f00.f40 = (int)(v1->f42c->f18);
    (&frame)->f00.f44 = (int)(v2);
    create_effect((void *)(&o->f3c), 0x45, 0x40);
    create_effect((void *)(&o->f3c), 0x46, 0x40);
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x78);
    if (t1 != 0) {
        initialize_panel_8c087d8c((void *)t1, g_8c44be98, (void *)(&(&frame)->f4c));
    }
    t2 = allocate_block(g_8c4d97e0, (unsigned int)0x78);
    if (t2 != 0) {
        initialize_panel_8c087d8c((void *)t2, g_8c44be98, (void *)(&frame));
    }
    t3 = current_effect_mode();
    switch (t3) {
    case 1:
    case 2:
        call_8c05fbf8(0x40010, (void *)(&o->f3c), 0, 0);
        return;
    case 3:
    case 4:
    case 5:
        call_8c05fbf8(0x4000f, (void *)(&o->f3c), 0, 0);
        return;
    case 6:
    case 7:
        call_8c05fbf8(0x40009, (void *)(&o->f3c), 0, 0);
        return;
    case 8:
    case 9:
    case 10:
        call_8c05fbf8(0x40010, (void *)(&o->f3c), 0, 0);
        return;
    }
}
