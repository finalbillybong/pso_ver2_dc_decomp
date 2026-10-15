typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
class S_g8c41c7c4;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1e];
    int f24;
};
class S_g8c41c7c4 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_g8c41c7c4Data {

} S_g8c41c7c4Data;
extern S_g8c41c7c4 *g_8c41c7c4;
extern int g_8c4d8288;
extern int g_8c4dc800;
extern int g_8c4dc844;
extern "C" void set_global_8c01c21c(void);
extern "C" void operation_8c24323c(Object *o)
{
    if (o->f24 == -1 || o->f24 != 0) {
        return;
    }
    if (g_8c41c7c4 != 0) {
        if (g_8c41c7c4 != 0) {
            g_8c41c7c4->v0(1);
        }
        g_8c41c7c4 = (S_g8c41c7c4 *)0;
    }
    g_8c4dc800 = 0;
    g_8c4dc844 = 0;
    set_global_8c01c21c();
    g_8c4d8288 = 1;
    o->f04 |= 1;
}
