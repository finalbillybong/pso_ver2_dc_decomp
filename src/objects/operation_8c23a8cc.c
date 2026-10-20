typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x234];
    int f234;
    int f238;
};
void operation_8c23a8cc(Object *o)
{
    char *v11;
    int v12;
    int v1;
    v11 = (char *)o->f238;
    if ((int)(v11) == 2) {
        v12 = (int)0x2aaa;
        if (!(v12 > o->f234)) {
            return;
        }
        o->f234 += 0x888;
        v1 = (int)o->f234;
        if (!(v1 >= v12)) {
            return;
        }
        o->f234 = (int)(v12);
        o->f238 = 3;
        return;
    }
    if ((int)(v11) == 1 && o->f234 > 0) {
        o->f234 -= 0x444;
        if (!(o->f234 > 0)) {
            o->f234 = 0;
            o->f238 = 0;
        }
    }
}
