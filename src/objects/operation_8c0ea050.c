typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
};
extern void call_8c01c244(int);
extern void call_8c01c1a4(int);
extern void clear_global_render_resources(void);
extern void call_8c1005d0(void);
void operation_8c0ea050(Object *o)
{
    o->f04 |= 1;
    call_8c01c244(2);
    call_8c01c1a4(0x1b);
    clear_global_render_resources();
    call_8c1005d0();
}
