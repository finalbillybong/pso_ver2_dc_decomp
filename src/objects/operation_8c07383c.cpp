typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
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
    virtual void v9();
    virtual void v10();
    virtual int v11(float, float);
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    int f64;
    char unknown68[0x6c];
    unsigned short fd4;
    char unknownd6[0x4a];
    int f120;
} ObjectData;
extern "C" int player_flag9_8c026508(void);
extern "C" void operation_8c027090(int);
extern "C" void operation_8c07383c(Object *o)
{
    int v2;
    int v3;
    int v1;
    int t1;
    int t2;
    {
        Object *base = o;
        v1 = (int)0x8000000;
        if (((((ObjectData *)base)->f34 & v1)) == 0) {
            ((ObjectData *)base)->f64 += 0x200;
            v2 = (int)0xffff;
            v3 = (int)((((ObjectData *)base)->fd4 & 0xffff) != (unsigned short)v2);
            if (v3 != 0) {
                if ((float)((ObjectData *)base)->f120 == 900.0f) {
                    ((ObjectData *)base)->fd4 = v2;
                    ((ObjectData *)base)->f120 = 0;
                } else {
                    ((ObjectData *)base)->f120 += 1;
                }
            }
        }
        t1 = base->v11(200.0f, 5.0f);
        if (t1 != 0) {
            ((ObjectData *)base)->f34 &= -0x8000001;
            t2 = player_flag9_8c026508();
            if (t2 != 0) {
                return;
            }
            operation_8c027090((int)base);
            return;
        }
        ((ObjectData *)base)->f34 |= 0x8000000;
    }
}
