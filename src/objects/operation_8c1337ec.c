typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Block68 {
    int words[17];
} Block68;
typedef struct S_L8c418280 S_L8c418280;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
typedef struct Block_p0_3c {
    char unknown0[0xc];
    Vector3 f0c;
    Vector3 f18;
    Block16 f24;
    Block16 f34;
} Block_p0_3c;
typedef struct Block_L8c418280_0 {
    char unknown0[0xc];
    Vector3 f0c;
    Vector3 f18;
    Block16 f24;
    Block16 f34;
} Block_L8c418280_0;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Block_p0_3c f3c;
    int f80;
};
struct S_L8c41cba0 {
    char unknown0[0x20];
    int f20;
    char unknown24[0x4];
    int f28;
};
struct S_L8c418280 {
    Block_L8c418280_0 f00;
};
extern S_L8c418280 g_8c418280;
extern S_L8c41cba0 g_8c41cba0;
extern char gc_8c41cba0[];
extern void operation_8c134648(void *);
extern void operation_8c134888(void *);
extern void edit_three_scalar_fields(void *);
extern void operation_8c133cf0(void *);
extern void edit_three_scalar_fields_8c133fb0(void *);
extern void edit_three_scalar_fields_8c1342fc(void *);
extern void operation_8c014028(void);
extern int operation_8c01d844(int, int, int, int);
extern void call_8c3be38c(int, void *, void *);
void operation_8c1337ec(Object *o)
{
    int v;
    operation_8c134648((void *)o);
    operation_8c134888((void *)o);
    switch (o->f80) {
    case 0:
        edit_three_scalar_fields((void *)o);
        break;
    case 1:
        operation_8c133cf0((void *)o);
        break;
    case 2:
        edit_three_scalar_fields_8c133fb0((void *)o);
        break;
    case 3:
        edit_three_scalar_fields_8c1342fc((void *)o);
        break;
    }
    v = *(int *)((char *)(gc_8c41cba0 + 0x20) + (o->f34 * 0x3c));
    if ((v & 0x20000) != 0 && (v & 0x10000) != 0 && ((*(int *)((char *)(gc_8c41cba0 + 0x28) + (o->f34 * 0x3c)) & 8)) != 0) {
        *(Block68 *)&(&g_8c418280)->f00 = *(Block68 *)&o->f3c;
        operation_8c014028();
    }
    if (operation_8c01d844((int)((int)(o->f34 * 0x3c + gc_8c41cba0) + 0x20), 0x20000, 6, 1) != 0) {
        o->f80 += 1;
    }
    if (!(o->f80 >= 0)) {
        o->f80 = 3;
    }
    if (o->f80 > 3) {
        o->f80 = 0;
    }
    call_8c3be38c(0, (void *)(&o->f3c), (void *)(((char *)o + 0x48)));
    g_8c418280.f00.f0c = o->f3c.f0c;
    g_8c418280.f00.f24 = o->f3c.f24;
    g_8c418280.f00.f34 = o->f3c.f34;
    g_8c418280.f00.f18 = o->f3c.f18;
    g_8c418280.f00.f0c = o->f3c.f0c;
    g_8c418280.f00.f24 = o->f3c.f24;
    g_8c418280.f00.f34 = o->f3c.f34;
    g_8c418280.f00.f18 = o->f3c.f18;
}
