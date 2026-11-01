typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_8c S_g8c467180_8c;
typedef struct Object Object;
struct S_g8c467180 {
    char unknown0[0x8c];
    S_g8c467180_8c *f8c;
};
struct S_g8c467180_8c {
    int f00;
    char unknown4[0x4];
    int f08;
    int f0c;
    int f10;
    int f14;
    int f18;
    char unknown1c[0x4];
    int f20;
    int f24;
    char unknown28[0x4];
    int f2c;
    int f30;
    char unknown34[0x4];
    int f38;
    int f3c;
    int f40;
    int f44;
    int f48;
    int f4c;
    char unknown50[0x10];
    int f60;
    int f64;
};
struct Object {
    char unknown0[0x2c];
    short f2c;
    char unknown2e[0xee];
    int f11c;
};
extern S_g8c467180 *g_8c467180;
extern char g_8c470365;
extern char g_8c3088fc[];
extern int operation_8c04b8dc(void *);
extern void operation_8c04b230(float, float, int, int);
extern void operation_8c0eb5c0(Object *);
void operation_8c0eac00(Object *o)
{
    char *v1;
    int t1;
    v1 = (char *)g_8c467180->f8c->f20;
    t1 = operation_8c04b8dc((void *)v1);
    operation_8c04b230(620.0f - (float)(unsigned int)t1, 86.0f, (int)(v1), (int)(o->f11c << 0x18 | 0xffffff));
    switch (o->f2c) {
    case 0:
        switch (g_8c470365) {
        case 1:
            operation_8c04b230(23.0f, 336.0f, (int)(g_8c467180->f8c->f24), -0x1000000);
            operation_8c04b230(23.0f, 356.0f, (int)(g_8c467180->f8c->f64), -0x1000000);
            break;
        case 2:
            operation_8c04b230(23.0f, 336.0f, (int)(g_8c467180->f8c->f24), -0x1000000);
            operation_8c04b230(23.0f, 356.0f, (int)(g_8c467180->f8c->f2c), -0x1000000);
            break;
        case 3:
            operation_8c04b230(23.0f, 336.0f, (int)(g_8c467180->f8c->f24), -0x1000000);
            operation_8c04b230(23.0f, 356.0f, (int)(g_8c467180->f8c->f30), -0x1000000);
            break;
        case 4:
            operation_8c04b230(23.0f, 336.0f, (int)(g_8c467180->f8c->f44), -0x1000000);
            operation_8c04b230(23.0f, 356.0f, (int)(g_8c467180->f8c->f48), -0x1000000);
            break;
        case 5:
            operation_8c04b230(23.0f, 336.0f, (int)(g_8c467180->f8c->f4c), -0x1000000);
            operation_8c04b230(23.0f, 356.0f, (int)(g_8c467180->f8c->f38), -0x1000000);
            break;
        case 6:
            operation_8c04b230(23.0f, 336.0f, (int)(g_8c467180->f8c->f24), -0x1000000);
            operation_8c04b230(23.0f, 356.0f, (int)(g_8c467180->f8c->f3c), -0x1000000);
            break;
        case 7:
            operation_8c04b230(23.0f, 336.0f, (int)(g_8c467180->f8c->f60), -0x1000000);
            operation_8c04b230(23.0f, 356.0f, (int)(g_8c3088fc + 0x1b), -0x1000000);
            break;
        case 12:
            operation_8c04b230(23.0f, 336.0f, (int)(g_8c467180->f8c->f40), -0x1000000);
            operation_8c04b230(23.0f, 356.0f, (int)(g_8c3088fc + 0x1b), -0x1000000);
            break;
        case 0:
        case 8:
        case 9:
        case 10:
        case 11:
        case 13:
            break;
        }
        break;
    case 2:
        operation_8c04b230(23.0f, 336.0f, (int)(g_8c467180->f8c->f00), -0x1000000);
        operation_8c0eb5c0(o);
        return;
    case 3:
        operation_8c04b230(23.0f, 336.0f, (int)(g_8c467180->f8c->f08), -0x1000000);
        return;
    case 4:
        operation_8c04b230(23.0f, 336.0f, (int)(g_8c467180->f8c->f0c), -0x1000000);
        operation_8c04b230(23.0f, 356.0f, (int)(g_8c467180->f8c->f10), -0x1000000);
        return;
    case 5:
        operation_8c04b230(23.0f, 336.0f, (int)(g_8c467180->f8c->f14), -0x1000000);
        return;
    case 8:
        operation_8c04b230(23.0f, 336.0f, (int)(g_8c467180->f8c->f14), -0x1000000);
        operation_8c04b230(23.0f, 356.0f, (int)(g_8c467180->f8c->f18), -0x1000000);
        return;
    case 1:
    case 6:
    case 7:
        break;
    }
}
