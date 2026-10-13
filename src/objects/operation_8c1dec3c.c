typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_70 Arg0_70;
struct Object {
    char unknown0[0x68];
    int f68;
    char unknown6c[0x1];
    char f6d;
    char unknown6e[0x2];
    Arg0_70 *f70;
};
extern void set_fields_8c1e22d4(void *);
extern void set_field_8c1e22c8(void *);
extern void call_8c1dee8c(Object *);
void operation_8c1dec3c(Object *o)
{
    o->f68 |= 0x80;
    if (o->f70 != 0) {
        set_fields_8c1e22d4((void *)(o->f70));
        o->f68 &= -0x11;
        if (o->f70 != 0) {
            o->f68 |= 1;
            set_field_8c1e22c8((void *)(o->f70));
            switch (*(int *)0x8c467188) {
            case 0:
                o->f6d = 3;
                break;
            case 2:
            case 3:
            case 4:
                o->f68 &= -0x21;
            case 1:
                break;
            }
            call_8c1dee8c(o);
        }
    }
}
