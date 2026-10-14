typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_a7c Arg0_a7c;
class Object;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9(void *, void *);
};
typedef struct ObjectData {
    char unknown0[0xa7c];
    Arg0_a7c *fa7c;
} ObjectData;
extern "C" void operation_8c09caac(Object *o)
{
    if ((int)(((ObjectData *)o)->fa7c) > 0) {
        if ((((int)(((ObjectData *)o)->fa7c) & 3)) != 0) {
            ((ObjectData *)o)->fa7c = (Arg0_a7c *)((int)((ObjectData *)o)->fa7c + 3);
            ((ObjectData *)o)->fa7c = (Arg0_a7c *)((unsigned int)(int)(((ObjectData *)o)->fa7c) >> 2 << 2);
        }
        o->v9(((char *)o + 0xa80), ((ObjectData *)o)->fa7c);
    }
}
