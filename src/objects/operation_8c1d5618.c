typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x80];
    unsigned short f80;
    short f82;
};
extern void operation_8c1cdcdc(void *);
extern void call_8c1cdc94(int);
extern int call_8c1a2d98(int);
extern void call_8c1cd974(int, int, int, int);
extern void call_8c1cdb50(Object *, int);
extern void call_8c1cdc30(Object *);
extern void call_8c1cdd08(Object *);
void operation_8c1d5618(Object *o)
{
    unsigned int v1;
    int t1;
    operation_8c1cdcdc((void *)o);
    call_8c1cdc94((int)o);
    v1 = (unsigned int)0;
    while ((unsigned int)5 > v1) {
        t1 = call_8c1a2d98(v1);
        call_8c1cd974((int)o, v1, t1, 1);
        v1 = (unsigned int)(v1 + 1);
    }
    if (!(o->f82 > 0)) {
        call_8c1cdb50(o, -1);
    }
    o->f80 = (o->f80 & 0xffff) | 0x100;
    call_8c1cdc30(o);
    call_8c1cdd08(o);
}
