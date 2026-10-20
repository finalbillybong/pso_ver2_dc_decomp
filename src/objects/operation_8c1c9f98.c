typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    unsigned char tag;
    unsigned char f01;
    unsigned char f02;
    char unknown3[0xd];
    int f10;
};
int operation_8c1c9f98(Object *o)
{
    switch ((unsigned char)o->tag) {
    case 0:
        if ((unsigned int)0x27 > (unsigned int)o->f01) {
            return 0;
        }
        if ((unsigned int)0x89 > (unsigned int)o->f01) {
            return 2;
        }
        break;
    case 3:
        return ((unsigned int)0xe > (unsigned int)o->f01) ? 0 : 2;
    case 4:
        if (0xf423f > o->f10) {
            return 0;
        }
        if (0xf423f > o->f10) {
            return 2;
        }
        break;
    case 1:
        switch ((unsigned char)o->f01) {
        case 1:
            if ((unsigned int)0x29 > (unsigned int)o->f02) {
                return 0;
            }
            if ((unsigned int)0x35 > (unsigned int)o->f02) {
                return 2;
            }
            break;
        case 2:
            if ((unsigned int)0x27 > (unsigned int)o->f02) {
                return 0;
            }
            if ((unsigned int)0x3a > (unsigned int)o->f02) {
                return 2;
            }
            break;
        case 3:
            if ((unsigned int)0x44 > (unsigned int)o->f02) {
                return 0;
            }
            if ((unsigned int)0x44 > (unsigned int)o->f02) {
                return 2;
            }
            break;
        }
        break;
    case 2:
        if ((unsigned int)0x2c > (unsigned int)o->f01) {
            return 0;
        }
        if ((unsigned int)0x39 > (unsigned int)o->f01) {
            return 2;
        }
        break;
    }
    return 3;
}
