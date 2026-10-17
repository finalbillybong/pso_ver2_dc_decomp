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
typedef struct S_g8c4d7bbc S_g8c4d7bbc;
typedef struct S_g8c4d7bbc_42c S_g8c4d7bbc_42c;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_42c S_vv1_42c;
typedef struct Block_frame_e4 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_e4;
typedef struct Block_frame_98 {
    char unknown0[0xc];
    Vector3 f0c;
    char unknown18[0x20];
    float f38;
    char unknown3c[0x4];
    int f40;
    int f44;
    char unknown48[0x4];
} Block_frame_98;
typedef struct Block_p0_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3c;
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
struct Frame {
    Block_frame_0 f00;
    Block_frame_4c f4c;
    Block_frame_98 f98;
    Block_frame_e4 fe4;
};
struct Object {
    char unknown0[0x3c];
    Block_p0_3c f3c;
};
struct S_g8c4d7bbc {
    char unknown0[0x42c];
    S_g8c4d7bbc_42c *f42c;
};
struct S_g8c4d7bbc_42c {
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
    char unknown20[0x8];
    int f28;
    int f2c;
};
extern Block76 g_8c30b970;
extern Block76 g_8c30b9bc;
extern Block76 g_8c30ba08;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d7bbc *g_8c4d7bbc;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void initialize_panel_8c087d8c(void *, void *, void *);
void operation_8c109bd0(Object *o)
{
    Frame frame;
    S_vv1 *v1;
    int t1;
    int t2;
    int t3;
    *(Vector3 *)&(&frame)->fe4 = *(Vector3 *)&o->f3c;
    (&frame)->fe4.f04 += 25.0f;
    *(Block76 *)&(&frame)->f98 = *(Block76 *)&g_8c30b970;
    *(Vector3 *)&(&frame)->f98.f0c = *(Vector3 *)&(&frame)->fe4;
    (&frame)->f98.f38 = o->f3c.f04;
    (&frame)->f98.f40 = (int)(g_8c4d7bbc->f42c->f08);
    (&frame)->f98.f44 = (int)(g_8c4d7bbc->f42c->f0c);
    v1 = (S_vv1 *)g_8c4d7bbc;
    *(Block76 *)&(&frame)->f4c = *(Block76 *)&g_8c30b9bc;
    *(Vector3 *)&(&frame)->f4c.f0c = *(Vector3 *)&(&frame)->fe4;
    (&frame)->f4c.f38 = o->f3c.f04;
    (&frame)->f4c.f40 = (int)(v1->f42c->f18);
    (&frame)->f4c.f44 = (int)(v1->f42c->f1c);
    *(Block76 *)&(&frame)->f00 = *(Block76 *)&g_8c30ba08;
    *(Vector3 *)&(&frame)->f00.f0c = *(Vector3 *)&(&frame)->fe4;
    (&frame)->f00.f38 = o->f3c.f04;
    (&frame)->f00.f40 = (int)(v1->f42c->f28);
    (&frame)->f00.f44 = (int)(v1->f42c->f2c);
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x78);
    if (t1 != 0) {
        initialize_panel_8c087d8c((void *)t1, g_8c44be98, (void *)(&(&frame)->f98));
    }
    t2 = allocate_block(g_8c4d97e0, (unsigned int)0x78);
    if (t2 != 0) {
        initialize_panel_8c087d8c((void *)t2, g_8c44be98, (void *)(&(&frame)->f4c));
    }
    t3 = allocate_block(g_8c4d97e0, (unsigned int)0x78);
    if (t3 != 0) {
        initialize_panel_8c087d8c((void *)t3, g_8c44be98, (void *)(&frame));
    }
}
