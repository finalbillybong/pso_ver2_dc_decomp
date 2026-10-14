typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    int f04;
    char unknown8[0x14];
    void *f1c;
    char unknown20[0x2];
    short f22;
    char unknown24[0x4];
    int f28;
    char unknown2c[0x4];
    void *f30;
    int f34;
    int f38;
    char unknown3c[0x4];
    int f40;
    int f44;
    int f48;
    int f4c;
    int f50;
    int f54;
    char unknown58[0x1c];
    int f74;
};
extern int g_8c336690;
extern Object *g_8c505960;
extern char g_8c278610[];
extern void initialize_control_manager(void *, void *);
extern void call_8c12b880(void *, int, int);
void operation_8c21d170(Object *o, int a1)
{
    Object **home = &o;
    (void)home;
    initialize_control_manager((void *)(&o->f04), (void *)a1);
    o->f30 = (void *)g_8c278610;
    o->f1c = (g_8c278610 + 0x8);
    o->f04 = (int)(g_8c336690);
    o->f22 = 0x78;
    o->f44 = 0;
    o->f48 = 0;
    o->f4c = 0;
    o->f50 = 0;
    o->f54 = 0;
    o->f34 = 0;
    o->f38 = 0;
    o->f40 = 0;
    o->f74 = 0;
    call_8c12b880((void *)(((char *)o + 0x58)), 0, 0x1c);
    o->f28 = 0;
    g_8c505960 = o;
}
