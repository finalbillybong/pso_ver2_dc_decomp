typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0xe2];
    int fe8;
    float fec;
};
extern char g_8c338118[];
extern void call_8c22a75c(Object *);
extern void operation_8c1005bc(int);
extern void operation_8c191504(int);
void operation_8c22a4bc(Object *o)
{
    call_8c22a75c(o);
    if (o->fe8 == 0x8c) {
        operation_8c1005bc((int)(g_8c338118 + 0xc));
        operation_8c191504(2);
    }
    if ((o->fec += 0.5f) > 149.0f) {
        o->fec = 149.0f;
    }
    if (++o->fe8 >= 0x12c) {
        o->f04 |= 1;
    }
}
