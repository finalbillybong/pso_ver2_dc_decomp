typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x528];
    int f528;
};
struct Frame {
    Vector3 f00;
    Vector3 f0c;
    Vector3 f18;
    Vector3 f24;
};
extern Vector3 g_8c327c64;
extern Vector3 g_8c327c70;
extern Vector3 g_8c327c7c;
extern Vector3 g_8c327c88;
extern void forward_effect_view(void *, void *);
void operation_8c1b8d98(Object *o)
{
    Frame frame;
    if (o->f528 == 1) {
        *(Vector3 *)&(&frame)->f24 = *(Vector3 *)&g_8c327c64;
        {
            Vector3 *p_ = (Vector3 *)&g_8c327c70;
            *(Vector3 *)&(&frame)->f18 = *p_;
        }
        forward_effect_view((void *)(&(&frame)->f18), (void *)(&(&frame)->f24));
        return;
    }
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&g_8c327c7c;
    {
        Vector3 *p_ = (Vector3 *)&g_8c327c88;
        *(Vector3 *)&(&frame)->f00 = *p_;
    }
    forward_effect_view((void *)(&frame), (void *)(&(&frame)->f0c));
}
