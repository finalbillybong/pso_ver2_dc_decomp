typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
class Object {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1(int);
};
typedef struct ObjectData {
    float tag;
    float f04;
    float f08;
    float f0c;
    float f10;
    char unknown14[0x4];
    float dispatch;
} ObjectData;
extern "C" void operation_8c1147cc(Object *o)
{
    o->v1(0xa);
    ((ObjectData *)o)->dispatch = -(((ObjectData *)o)->f10 * 30.0f);
    ((ObjectData *)o)->tag = -1.0f;
    ((ObjectData *)o)->f04 = 0.0f;
    ((ObjectData *)o)->f08 = 0.0f;
    ((ObjectData *)o)->f0c = 0.0f;
}
