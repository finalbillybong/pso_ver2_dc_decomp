typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv23 S_vv23;
typedef struct S_vv24 S_vv24;
struct Object {
    int tag;
    int f04;
    char unknown8[0x8];
    int f10;
};
struct S_vv24 {
    unsigned char f00;
    char f01;
};
struct S_vv23 {
    short f00;
};
extern int g_8c467188;
void operation_8c04c108(Object *o, char *s)
{
    int mode;
    unsigned short *d;
    int c;
    int ch;
    d = (unsigned short *)o->tag;
    mode = 0;
    o->f10 = mode;
    o->f04 = o->f10;
    if (s == 0) {
        return;
    }
    if (g_8c467188 == 0) {
        mode = 1;
    }
    if (*s == 9) {
        s++;
        c = *s++;
        switch (c) {
        case 'J':
            if (mode != 0) {
                break;
            }
            return;
        case 'E':
            if (mode != 1) {
                break;
            }
            return;
        }
    }
    while (*s != 0) {
        c = *s++;
        ch = (unsigned char)c;
        if (mode != 0) {
            if (((unsigned short)ch & 0xe0) == 0x80 || ((unsigned short)ch & 0xe0) == 0xe0) {
                ch = (unsigned short)ch << 8 | (unsigned char)*s++;
            }
        }
        *d = ch;
        d++;
        o->f10 += 1;
    }
    *d = 0;
    o->f04 = o->f10;
}
