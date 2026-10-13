typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_7c Arg0_7c;
struct Object {
    char unknown0[0x68];
    int f68;
    char unknown6c[0x8];
    int f74;
    int f78;
    Arg0_7c *f7c;
};
extern void set_fields_8c1e22d4(void *);
extern void set_field_8c1e22c8(void *);
void operation_8c1e00e0(Object *o)
{
    if (o->f7c != 0) {
        o->f68 |= 0x400;
        set_fields_8c1e22d4((void *)(o->f7c));
        if (o->f7c != 0) {
            o->f68 |= 0x40;
            set_field_8c1e22c8((void *)(o->f7c));
            switch (*(int *)0x8c467188) {
            case 2:
            case 3:
            case 4:
                o->f74 = 7;
                o->f78 = 3;
                return;
            case 0:
            case 1:
                break;
            }
        }
    }
}
