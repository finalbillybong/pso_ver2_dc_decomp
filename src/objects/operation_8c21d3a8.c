typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418a00 S_g8c418a00;
typedef struct Object Object;
struct Object {
    char unknown0[0x28];
    int f28;
};
extern S_g8c418a00 *g_8c418a00;
extern int g_8c505968;
extern int g_8c50596c;
extern int g_8c505970;
extern int g_8c505974;
extern void operation_8c02f8f8(void *);
void operation_8c21d3a8(Object *o)
{
    operation_8c02f8f8(g_8c418a00);
    g_8c505968 = 0;
    g_8c505970 = 0;
    g_8c50596c = 0;
    g_8c505974 = 0;
    o->f28 = 0xc;
}
