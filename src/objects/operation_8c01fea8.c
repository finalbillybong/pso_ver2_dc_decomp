typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x326];
    int f348;
    char unknown34c[0x38];
    short f384;
};
extern void call_8c023d38(void);
void operation_8c01fea8(Object *o)
{
    call_8c023d38();
    o->f384 = 0;
    o->f348 = o->f20 * 0x280 + 0x8c428f80;
}
