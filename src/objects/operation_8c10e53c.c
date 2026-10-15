typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_7c Arg0_7c;
struct Object {
    char unknown0[0x44];
    float f44;
    char unknown48[0x34];
    Arg0_7c *f7c;
    char unknown80[0x4];
    int f84;
    char unknown88[0x4];
    float f8c;
};
struct Arg0_7c {
    char unknown0[0x94];
    int f94;
};
extern float squared_distance_xz(void *, void *);
int operation_8c10e53c(Object *o)
{
    char *v2;
    float v1;
    float t1;
    if (((o->f84 & 0x10)) != 0) {
        return 1;
    }
    v1 = (float)(o->f44 + 12.0f);
    if (!(40.0f > (o->f44 + 12.0f))) {
        v1 = (float)40.0f;
    }
    v2 = (char *)o->f7c->f94;
    t1 = squared_distance_xz((void *)(((char *)o + 0xe0)), (void *)(v2 + 0x3c));
    o->f8c = t1;
    if (!((v1 * v1) > t1)) {
        return 1;
    }
    o->f84 &= -0x101;
    return 0;
}
