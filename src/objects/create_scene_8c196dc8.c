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
    char unknown20[0x630];
    int f650;
    int f654;
    int f658;
    int f65c;
};
extern S_c8c122700 *allocate_block(void *, int);
extern void initialize_hierarchy_node(S_c8c122700 *, int);
extern void call_8c196ec4(S_c8c122700 *);
extern void call_8c196e78(S_c8c122700 *, int);
S_c8c122700 *create_scene_8c196dc8(int a0)
{
    S_c8c122700 *t1;
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, 0x664);
    if (t1 != 0) {
        S_c8c122700 *self = t1;
        S_c8c122700 **home = &self;
        (void)home;
        initialize_hierarchy_node(t1, a0);
        self->f18 = (void *)0x8c272868;
        self->f00 = *(int *)0x8c31c258;
        self->f1e = 0x664;
        self->f650 = 0;
        self->f658 = 0x96;
        self->f654 = self->f658;
        call_8c196ec4(self);
        call_8c196e78(self, self->f650 ^ 1);
        self->f65c = 0;
    }
    return t1;
}
