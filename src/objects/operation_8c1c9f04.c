typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    unsigned char tag;
    char unknown1[0x1];
    unsigned char f02;
    char f03;
    char unknown4[0x1];
    char f05;
};
extern void call_8c1c9418(Object *);
void operation_8c1c9f04(Object *o, int a1)
{
    int v1;
    unsigned char v3;
    if (a1 == 0) {
        call_8c1c9418(o);
        v1 = (unsigned char)o->tag;
        switch (v1) {
        case 0:
            v3 = o->f05;
            break;
        case 1:
            v3 = o->f03;
            break;
        case 3:
            v3 = o->f03;
            break;
        case 2:
            if ((unsigned int)o->f02 > (unsigned int)0xc8) {
                v3 = o->f02 + -0xc8;
            } else {
                v3 = 0;
            }
            break;
        default:
            v3 = 0;
            break;
        }
        if (v3 != 0) {
            switch (v1) {
            case 0:
                o->f05 = 0;
                break;
            case 1:
                o->f03 = 0;
                break;
            case 3:
                o->f03 = 0;
                break;
            case 2:
                o->f02 = 0xc8;
                break;
            }
        }
    }
}
