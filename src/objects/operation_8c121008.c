typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xd4];
    unsigned short fd4;
};
extern char g_8c311c38[];
extern int lookup_low_id(int);
extern void call_8c38cf80(int, void *, ...);
void operation_8c121008(Object *o)
{
    int v1;
    int t1;
    v1 = (int)((o->fd4 & 0xffff) != 0xffff);
    if (v1 != 0) {
        t1 = lookup_low_id((int)(o->fd4 & 0xffff));
        if (t1 != 0) {
            call_8c38cf80(0x1a0020, (void *)((g_8c311c38 + 0xc)));
        }
    }
}
