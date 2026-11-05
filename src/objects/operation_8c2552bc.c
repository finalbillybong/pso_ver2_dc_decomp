typedef struct Object_p13c {
    char unknown0[0x20];
    short f20;
} Object_p13c;
typedef struct Object {
    char unknown0[0x138];
    unsigned char f138;
    char unknown139[0x3];
    Object_p13c *f13c;
    char unknown140[0x84];
    int f1c4;
} Object;
extern int call_8c1931d4(short, unsigned char, unsigned char, int);
void operation_8c2552bc(Object *o)
{
    int t1;
    t1 = call_8c1931d4(o->f13c->f20, 1, o->f138 - 0x27, -1);
    o->f1c4 = (int)(t1);
}
