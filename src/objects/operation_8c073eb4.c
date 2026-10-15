typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    unsigned char tag;
};
extern void call_8c1c9418(int);
void operation_8c073eb4(Object *o)
{
    int v1;
    int v2;
    if (o != 0) {
        v1 = (int)((char *)o + 0x4);
        v2 = (int)0;
        while ((unsigned char)v2 != o->tag) {
            call_8c1c9418((int)(v1 + 8));
            v1 = (int)(v1 + 0x1c);
            v2 = (int)(v2 + 1);
        }
    }
}
