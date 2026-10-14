typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
struct Object {
    char unknown0[0x2c];
    Arg0_2c *f2c;
    Arg0_30 *f30;
};
struct Arg0_2c {
    char unknown0[0x20];
    short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0x318];
    int f350;
    char unknown354[0x28];
    int f37c;
};
extern int object_blocked(void *);
extern int create_effect(void *, int, int);
extern void bind_id(void *, unsigned short);
void operation_8c223984(Object *o)
{
    int v1;
    int t1;
    int t2;
    t1 = object_blocked((void *)(o->f2c));
    if (t1 == 0) {
        v1 = (int)(((o->f2c->f350 & 0x200000)) != 0);
        if (v1 == 0 && o->f2c->f37c != 0 && o->f2c->f37c != 0xf && ((o->f2c->f34 & 0x800)) == 0) {
            t2 = create_effect((void *)(((char *)o->f2c + 0x324)), (int)(o->f30), 0x10);
            if (t2 != 0) {
                bind_id((void *)t2, (unsigned short)(o->f2c->f20));
            }
        }
    }
}
