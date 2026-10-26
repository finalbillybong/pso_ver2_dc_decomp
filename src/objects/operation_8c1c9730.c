typedef struct Object Object;
struct Object {
    unsigned char tag;
    unsigned char f01;
    unsigned char f02;
    unsigned char f03;
    char unknown4[0x1];
    unsigned char f05;
    unsigned char f06;
};
extern int operation_8c1c9398(void *);
static inline unsigned char get_count(Object *o, int mode)
{
    switch (mode) {
    case 0:
        return o->f05;
    case 1:
        return o->f03;
    case 3:
        return o->f03;
    case 2:
        if (o->f02 > 200) {
            return o->f02 - 200;
        }
        return 0;
    }
    return 0;
}
static inline void clear_count(Object *o, int mode)
{
    switch (mode) {
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
        o->f02 = 200;
        break;
    }
}
static inline void set_count(Object *o, int mode, unsigned char v)
{
    switch (mode) {
    case 0:
        o->f05 = v;
        break;
    case 1:
        o->f03 = v;
        break;
    case 3:
        o->f03 = v;
        break;
    case 2:
        o->f02 = v + 200;
        break;
    }
}
void operation_8c1c9730(Object *o)
{
    unsigned char v1;
    int v2;
    int v3;
    int v6;
    unsigned char v;
    int t1;
    int mode;
    unsigned char c;
    t1 = operation_8c1c9398((void *)o);
    v1 = (unsigned char)o->tag;
    if (v1 == 0) {
        v2 = (int)((unsigned int)o->f01 < (unsigned int)(unsigned char)t1);
        v6 = (int)v2;
    } else {
        v3 = (int)((unsigned char)t1 != 0);
        v6 = (int)v3;
    }
    if (v6 != 1) {
        return;
    }
    mode = v1;
    v = get_count(o, mode);
    if (v == 0) {
        return;
    }
    switch (mode) {
    case 0:
        if (0x89 > v) {
            clear_count(o, mode);
        } else {
            c = o->f01;
            if (c == 0xf) {
                clear_count(o, mode);
            } else {
                set_count(o, mode, c);
            }
        }
        o->f01 = v;
        break;
    case 1:
        o->f02 = v;
        clear_count(o, o->tag);
        break;
    case 3:
        clear_count(o, mode);
        switch (o->f01) {
        case 2:
            o->f02 = v + 0xe;
            break;
        case 0xd:
            if (o->f02 == 6) {
                o->f01 = 0xe;
                o->f02 = v - 1;
            } else if (o->f02 == 7) {
                o->f01 = o->f06;
                o->f02 = v - 1;
                o->f06 = 0;
            }
            break;
        }
        break;
    case 2:
        clear_count(o, mode);
        o->f01 = v + 0x2b;
        break;
    }
}
