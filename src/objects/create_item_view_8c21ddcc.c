typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct S_c8c122700 {
    int f00;
    char unknown4[0x14];
    void *f18;
    char unknown1c[0x2];
    short f1e;
    char unknown20[0x14];
    int f34;
};
extern S_c8c122700 *allocate_block(void *, int);
extern void call_8c0db1d0(S_c8c122700 *, void *);
extern void call_8c21e000(S_c8c122700 *);
extern void call_8c0dc854(S_c8c122700 *);
extern void call_8c21e090(S_c8c122700 *);
S_c8c122700 *create_item_view_8c21ddcc(void)
{
    S_c8c122700 *t1;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, 0x6c);
    if (t1 != 0) {
        S_c8c122700 *self = t1;
        S_c8c122700 **home = &self;
        (void)home;
        call_8c0db1d0(t1, (void *)0x8c3366f8);
        self->f18 = (void *)0x8c278640;
        self->f00 = *(int *)0x8c3366d0;
        self->f1e = 0x6c;
        call_8c21e000(self);
        call_8c0dc854(self);
        self->f34 = 0;
    }
    call_8c21e090(t1);
    return t1;
}
