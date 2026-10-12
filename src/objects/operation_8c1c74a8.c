typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    unsigned char tag;
    char unknown1[0x4];
    char f05;
};
extern int call_8c1c9358(void);
void operation_8c1c74a8(Object *o, int a1)
{
    int t1;
    t1 = call_8c1c9358();
    if (t1 != 0) {
        o->f05 = a1;
        return;
    }
    if (o->tag == 3) {
        o->f05 = 0;
    }
}
