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
typedef struct S_g8c4d9b60 S_g8c4d9b60;
typedef struct S_g8c4d9b60_42c S_g8c4d9b60_42c;
typedef struct Object Object;
typedef struct Block_frame_0 {
    char unknown0[0xc];
    Vector3 f0c;
    char unknown18[0x28];
    int f40;
    int f44;
    char unknown48[0x4];
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
};
struct S_g8c4d9b60 {
    char unknown0[0x42c];
    S_g8c4d9b60_42c *f42c;
};
struct S_g8c4d9b60_42c {
    char unknown0[0xe8];
    int fe8;
    int fec;
};
extern Block76 g_8c3165ec;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4d9b60 *g_8c4d9b60;
extern int allocate_block(void *, unsigned int);
extern void initialize_panel_8c087d8c(void *, void *, void *);
void operation_8c15aec4(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    *(Block76 *)&(&frame)->f00 = *(Block76 *)&g_8c3165ec;
    *(Vector3 *)&(&frame)->f00.f0c = *(Vector3 *)&o->f3c;
    (&frame)->f00.f40 = (int)(g_8c4d9b60->f42c->fe8);
    (&frame)->f00.f44 = (int)(g_8c4d9b60->f42c->fec);
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x78);
    if (t1 != 0) {
        initialize_panel_8c087d8c((void *)t1, g_8c44be98, (void *)(&frame));
    }
    t2 = allocate_block(g_8c4d97e0, (unsigned int)0x78);
    if (t2 != 0) {
        initialize_panel_8c087d8c((void *)t2, g_8c44be98, (void *)(&frame));
    }
    t3 = allocate_block(g_8c4d97e0, (unsigned int)0x78);
    if (t3 != 0) {
        initialize_panel_8c087d8c((void *)t3, g_8c44be98, (void *)(&frame));
    }
}
