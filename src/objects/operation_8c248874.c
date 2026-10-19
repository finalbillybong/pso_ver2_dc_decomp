typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_4 Arg0_4;
struct Object {
    char unknown0[0x4];
    Arg0_4 *f04;
};
extern int g_8c510ba0;
extern void call_8c237e98(int, void *);
void operation_8c248874(Object *o)
{
    int v1;
    int v2;
    v1 = (int)g_8c510ba0;
    v2 = (int)(v1 != 0);
    if (v2 == 0 || (int)(o->f04) < 0 || (int)(o->f04) >= 0x25) {
        return;
    }
    call_8c237e98(v1, (void *)(o->f04));
}
