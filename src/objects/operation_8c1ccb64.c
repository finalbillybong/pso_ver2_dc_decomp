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
};
int operation_8c1ccb64(Object *o)
{
    int v1;
    int v2;
    v1 = (int)o->tag;
    v2 = (int)v1;
    if (v2 == 3) {
        switch (o->f01) {
        case 2:
        case 9:
        case 10:
        case 11:
            return 1;
        }
        return 0;
    }
    if (v2 == 1) {
        switch (o->f01) {
        case 3:
            return 1;
        }
        return 0;
    }
    switch (v2) {
    case 0:
        switch ((unsigned int)(o->f01)) {
        case 9:
            if (o->f02 == 5) {
                return 1;
            }
            break;
        case 7:
            if (o->f02 == 7) {
                return 1;
            }
            break;
        case 2:
            if (o->f02 == 6) {
                return 1;
            }
            break;
        case 4:
            if (o->f02 == 7) {
                return 1;
            }
            break;
        case 8:
            if (o->f02 == 6) {
                return 1;
            }
            break;
        case 12:
            if (o->f02 == 6) {
                return 1;
            }
            break;
        case 3:
            if (o->f02 == 6) {
                return 1;
            }
            break;
        case 5:
            if (o->f02 == 7) {
                return 1;
            }
            break;
        case 20:
            if (o->f02 == 0) {
                return 1;
            }
            break;
        case 18:
            if (o->f02 == 0) {
                return 1;
            }
            break;
        case 33:
            if (o->f02 == 0) {
                return 1;
            }
            break;
        case 17:
            if (o->f02 == 0) {
                return 1;
            }
            break;
        case 21:
            if (o->f02 == 0) {
                return 1;
            }
            break;
        case 36:
            if (o->f02 == 0) {
                return 1;
            }
            break;
        case 13:
            if (o->f02 == 1) {
                return 1;
            }
            break;
        case 14:
            if (o->f02 == 1) {
                return 1;
            }
            break;
        case 6:
        case 10:
        case 11:
        case 15:
        case 16:
        case 19:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
        case 31:
        case 32:
        case 34:
        case 35:
            break;
        }
    }
    return 0;
}
