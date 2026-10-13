typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_548 Arg0_548;
struct Object {
    char unknown0[0x548];
    Arg0_548 *f548;
};
extern void release_render_mode_four_8c03ce90(void);
extern void call_8c122494(void *, void *);
void operation_8c116328(Object *o)
{
    release_render_mode_four_8c03ce90();
    *(char *)0x8c4d82a0 = 0;
    call_8c122494((void *)(o->f548), (void *)(((char *)o + 0x3c)));
}
