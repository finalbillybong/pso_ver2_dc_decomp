typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x13c];
    int f13c;
};
extern void call_8c1c9418(int);
void operation_8c073ef0(Object *o)
{
    int v2;
    char *v1;
    int v3;
    if (o != 0) {
        v1 = (char *)o->f13c;
        v2 = (int)o;
        v2 = (int)(v2 + 0x140);
        v3 = (int)0;
        while ((unsigned char)v3 != (unsigned char)v1) {
            call_8c1c9418((int)(v2 + 8));
            v2 = (int)(v2 + 0x1c);
            v3 = (int)(v3 + 1);
        }
    }
}
