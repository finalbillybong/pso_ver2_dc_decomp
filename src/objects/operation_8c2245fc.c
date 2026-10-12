typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x71];
    char f71;
    char unknown72[0x6];
    int f78;
    int f7c;
};
extern void call_8c2242c8(void);
void operation_8c2245fc(Object *o, int a1)
{
    o->f7c = 0;
    o->f78 = a1;
    o->f71 = 1;
    call_8c2242c8();
}
