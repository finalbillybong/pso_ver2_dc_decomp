typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c513444 S_g8c513444;
typedef struct Object Object;
struct Object {
    char unknown0[0x60];
    int f60;
    int f64;
    char unknown68[0x4];
    float f6c;
    char unknown70[0x18];
    int f88;
    int f8c;
    char unknown90[0x4];
    int f94;
    unsigned int f98;
    int f9c;
    float fa0;
    char unknowna4[0x28];
    int fcc;
    int fd0;
};
struct S_g8c513444 {
    int f00;
};
void operation_8c25db38(Object *o)
{
    o->f94 = (int)(o->f60);
    if ((unsigned int)o->f94 >= (unsigned int)2) {
        o->f94 = 0;
    }
    o->f9c = (int)(o->f64);
    if ((unsigned int)o->f9c >= (unsigned int)2) {
        o->f94 = 0;
    }
    o->fa0 = o->f6c * o->f6c;
    if (o->f94 == 0) {
        o->f98 = (int)(o->f88);
    } else {
        *(short *)((char *)o + 0x98) = o->f88;
        if ((unsigned int)(*(unsigned short *)((char *)o + 0x98) & 0xffff) > (unsigned int)0x100) {
            *(unsigned short *)((char *)o + 0x98) = 0xffff;
        }
    }
    o->fd0 = (int)(o->f8c);
    if (o->fd0 != 0) {
        if (o->fd0 >= 0 && !(o->fd0 >= (*(S_g8c513444 **)0x8c513444)->f00)) {
            goto L_8c25dbc2;
        }
        o->fd0 = 0;
    }
L_8c25dbc2:;
    o->fcc = 0;
}
