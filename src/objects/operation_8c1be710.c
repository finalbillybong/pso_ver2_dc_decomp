typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct S_c8c122700 {
    int f00;
    char unknown4[0x14];
    void *f18;
    char unknown1c[0x2];
    short f1e;
    char unknown20[0xc4];
    float fe4;
    char unknowne8[0x38];
    float f120;
};
extern int g_8c327fb8;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void call_8c0887c0(S_c8c122700 *, void *, int);
extern void operation_8c1be874(void *);
S_c8c122700 *operation_8c1be710(int a0)
{
    S_c8c122700 *t1;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x124);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        call_8c0887c0(t1, g_8c44be98, a0);
        self->f18 = (void *)0x8c27551c;
        self->f00 = (int)(g_8c327fb8);
        self->f1e = 0x124;
        operation_8c1be874((void *)self);
        self->fe4 = 23.0f;
        self->f120 = 0.0f;
    }
    return t1;
}
