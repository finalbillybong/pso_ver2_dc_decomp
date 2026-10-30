typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d8328 S_g8c4d8328;
typedef struct S_g8c4d8328_42c S_g8c4d8328_42c;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct S_c8c122700 {
    int f00;
    char unknown4[0x14];
    void *f18;
    char unknown1c[0x2];
    short f1e;
    char unknown20[0x8];
    int f28;
    char unknown2c[0x8];
    int f34;
    int f38;
    char unknown3c[0x4];
    float f40;
    char unknown44[0x28];
    float f6c;
    float f70;
    char unknown74[0x88];
    float ffc;
    char unknown100[0x8];
    float f108;
};
struct S_g8c4d8328 {
    char unknown0[0x42c];
    S_g8c4d8328_42c *f42c;
};
struct S_g8c4d8328_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
};
extern int g_8c3107f4;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d8328 *g_8c4d8328;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void call_8c119d60(S_c8c122700 *, void *, int);
extern void copy_actor_records(void *, void *, int);
extern void attach_and_insert_object(void *);
S_c8c122700 *operation_8c11a72c(int a0)
{
    S_c8c122700 *t1;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x10c);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        call_8c119d60(t1, g_8c44be98, a0);
        self->f18 = (void *)0x8c269f3c;
        self->f00 = (int)(g_8c3107f4);
        self->f1e = 0x10c;
        self->f40 -= self->f6c;
        self->f108 = self->f70;
        self->ffc = 80.0f;
        a0 = g_8c4d8328->f42c->f08;
        self->f38 = (int)(a0);
        self->f28 = (int)(g_8c4d8328->f42c->f0c);
        copy_actor_records((void *)self, (void *)((void *)0x8c310790), 2);
        self->f34 |= 0x40000000;
        attach_and_insert_object((void *)self);
    }
    return t1;
}
