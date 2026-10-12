typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x68];
    unsigned short f68;
    unsigned short f6a;
};
extern int call_8c04bfa0(void *);
extern void call_8c1e24ac(void);
void operation_8c1e283c(Object *o)
{
    int t1;
    if (((o->f68 & 2)) == 0) {
        if (((o->f6a & 4)) != 0) {
            t1 = call_8c04bfa0(((char *)o + 0x74));
            if (t1 != 0) {
                return;
            }
        }
        o->f68 |= 1;
        return;
    }
    call_8c1e24ac();
}
