typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46718c S_g8c46718c;
typedef struct S_g8c46718c_4 S_g8c46718c_4;
typedef struct Object Object;
struct Object {
    char unknown0[0x6e];
    char f6e;
    char f6f;
};
struct S_g8c46718c {
    char unknown0[0x4];
    S_g8c46718c_4 *f04;
};
int operation_8c1dfb6c(Object *o)
{
    int v1;
    v1 = (int)(o->f6e + (o->f6f << 4));
    switch ((unsigned char)*(unsigned char *)((char *)((char *)(*(S_g8c46718c **)0x8c46718c)->f04 + 0x0) + (v1))) {
    case 3:
    case 5:
        v1 -= 1;
        break;
    case 6:
        v1 -= 2;
        break;
    case 7:
        v1 -= 3;
        break;
    case 0:
    case 1:
    case 2:
    case 4:
        break;
    }
    return (int)(v1);
}
