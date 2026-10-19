typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    float f20;
    char unknown24[0x10];
    int f34;
    char unknown38[0x20];
    int f58;
    char unknown5c[0x4];
    float f60;
    char unknown64[0x1c];
    unsigned char f80;
    unsigned char f81;
    char unknown82[0x2];
    short f84;
};
extern void operation_8c0e118c(void *, void *);
extern int operation_8c0e1114(void *, float);
extern void set_fields_8c0e1170(void *);
extern void call_8c0e0104(Object *);
extern void operation_8c0dc610(void *, float);
extern void operation_8c0e11f0(void *, void *);
extern void call_8c0e0f6c(Object *);
extern void operation_8c0dfb48(void *);
extern void call_8c0dfbbc(Object *);
extern void update_view_nodes(void *, void *);
void operation_8c0dea50(Object *o)
{
    int t1;
    int t2;
    int t3;
    switch ((unsigned char)o->f80) {
    case 0:
    case 1:
        operation_8c0e118c((void *)o, (void *)(((char *)o + 0x40)));
        o->f58 = 6;
        o->f81 &= -5;
        o->f34 |= 0x100;
        o->f80 = 2;
    case 2:
        t1 = operation_8c0e1114((void *)o, 1.0f);
        if (t1 != 0) {
            o->f80 = 3;
        }
        set_fields_8c0e1170((void *)o);
        call_8c0e0104(o);
        break;
    case 3:
        o->f81 |= 4;
        o->f34 |= 0x100;
        o->f80 = 4;
    case 4:
        if (((o->f81 & 8)) != 0) {
            o->f84 -= 1;
            o->f60 += 0.1f;
            operation_8c0dc610((void *)o, o->f20 + 0.1f);
            if (!(o->f84 >= 0)) {
                o->f80 = 7;
            }
        }
        call_8c0e0104(o);
        break;
    case 5:
        operation_8c0e11f0((void *)o, (void *)(((char *)o + 0x40)));
        o->f58 = 6;
        o->f81 &= -5;
        o->f34 |= 0x100;
        o->f80 = 6;
    case 6:
        t2 = operation_8c0e1114((void *)o, 0.5f);
        if (t2 != 0) {
            o->f80 = 1;
        }
        set_fields_8c0e1170((void *)o);
        call_8c0e0104(o);
        break;
    case 7:
        o->f81 &= -5;
        o->f34 &= -0x101;
        o->f34 = (unsigned int)o->f34 >> 1 << 1;
        o->f81 |= 0x10;
        o->f80 = 8;
    case 8:
        t3 = operation_8c0e1114((void *)o, 0.0f);
        if (t3 != 0) {
            o->f80 = 9;
        }
        set_fields_8c0e1170((void *)o);
        call_8c0e0f6c(o);
        break;
    case 9:
        o->f04 |= 1;
    }
    operation_8c0dfb48((void *)o);
    call_8c0dfbbc(o);
    if (((o->f81 & 4)) != 0) {
        update_view_nodes((void *)o, (void *)(((char *)o + 0x2c)));
    }
}
