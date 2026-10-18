typedef struct Object Object;
struct Object {
    unsigned char tag;
    char unknown1[0x1];
    unsigned char f02;
    char f03;
    char unknown4[0x1];
    char f05;
};
char operation_8c1c9398(Object *o)
{
    char v1;
    switch (o->tag) {
    case 0:
        v1 = o->f05;
        break;
    case 1:
        v1 = o->f03;
        break;
    case 3:
        v1 = o->f03;
        break;
    case 2:
        if ((unsigned int)o->f02 > (unsigned int)0xc8) {
            v1 = o->f02 + -0xc8;
        } else {
            v1 = 0;
        }
        break;
    default:
        v1 = 0;
        break;
    }
    return v1;
}
