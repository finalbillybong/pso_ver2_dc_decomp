typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_6c Arg0_6c;
struct Object {
    char unknown0[0x6a];
    char f6a;
    char unknown6b[0x1];
    Arg0_6c *f6c;
};
extern void call_8c1978fc(Object *, void *, int);
void operation_8c197884(Object *o)
{
    int v1;
    if (o->f6a > 0) {
        v1 = (int)0x11b80;
    } else {
        v1 = (int)0x9b80;
    }
    if ((int)(v1) != (int)(o->f6c)) {
        if (0xc00 > (int)((unsigned short)((int)(v1) - (int)(o->f6c)))) {
            o->f6c = (Arg0_6c *)v1;
        } else {
            o->f6c = (Arg0_6c *)((int)o->f6c + 0xc00);
        }
    }
    call_8c1978fc(o, (void *)(o->f6c), 0);
    call_8c1978fc(o, (void *)((int)(o->f6c) + 0x8000), 7);
}
