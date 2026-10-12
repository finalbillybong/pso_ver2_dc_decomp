typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c3377b0 S_g8c3377b0;
typedef struct Object Object;
struct Object {
    char unknown0[0x21];
    unsigned char f21;
};
extern void clear_global_render_resources(void);
extern void call_8c060660(void);
extern void call_8c1003d0(void *);
void operation_8c2273a4(Object *o, int a1)
{
    clear_global_render_resources();
    clear_global_render_resources();
    call_8c060660();
    call_8c1003d0((void *)(*(S_g8c3377b0 **)((char *)0x8c3377b0 + (a1 << 2))));
    o->f21 |= 2;
}
