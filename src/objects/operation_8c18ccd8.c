typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_c8c122700 S_c8c122700;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct S_c8c122700 {
    int f00;
    char unknown4[0x14];
    void *f18;
    char unknown1c[0x2];
    short f1e;
    char unknown20[0x48];
    short f68;
    short f6a;
    int f6c;
};
struct Frame {
    Block8 f04;
};
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void initialize_base_8c0db1d0(void *, int);
extern int call_8c011ecc(int);
extern void call_8c199e48(int, void *, int, int);
S_c8c122700 *operation_8c18ccd8(int a0, int a1, int a2)
{
    Frame frame;
    S_c8c122700 *t1;
    int t2;
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x70);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        initialize_base_8c0db1d0((void *)t1, (int)((void *)0x8c31a024));
        self->f18 = (void *)0x8c27264c;
        *(Block8 *)&(&frame)->f04 = *(Block8 *)&*(Block8 *)0x8c31a044;
        self->f00 = (int)(*(int *)0x8c31a020);
        self->f1e = 0x70;
        t2 = call_8c011ecc(0x24);
        if (t2 != 0) {
            call_8c199e48(t2, (void *)(&(&frame)->f04), a0, 0);
        }
        self->f6c = (int)(t2);
        self->f68 = a1;
        self->f6a = a2;
    }
    return t1;
}
