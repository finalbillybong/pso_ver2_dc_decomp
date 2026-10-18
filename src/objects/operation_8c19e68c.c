typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
struct Object {
    int tag;
    char unknown4[0xc];
    float f10;
    char unknown14[0x8];
    unsigned char f1c;
    unsigned char f1d;
    char unknown1e[0x2];
    int f20;
    Arg0_24 *f24;
};
extern int call_8c04b8dc(int);
void operation_8c19e68c(Object *o)
{
    char *v56;
    int t1;
    int t2;
    o->f10 = 0.0f;
    if (((o->tag & 4)) != 0) {
        if (o->f1c != 0x2d) {
            o->f10 += 36.0f;
        } else {
            if (o->f1d != 0x2d) {
                o->f10 += 18.0f;
            }
        }
        v56 = (char *)o->f20;
        if (v56 != 0) {
            t1 = call_8c04b8dc((int)(v56));
            o->f10 += (float)(unsigned int)t1;
        }
        if (o->f24 != 0) {
            o->f10 += 9.0f;
            t2 = call_8c04b8dc((int)(o->f24));
            o->f10 += (float)(unsigned int)t2;
        }
    }
}
