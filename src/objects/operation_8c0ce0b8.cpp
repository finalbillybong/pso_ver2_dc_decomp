typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46fc2c S_L8c46fc2c;
typedef struct S_L8c46fc2c_4 S_L8c46fc2c_4;
typedef struct S_L8c46fc34 S_L8c46fc34;
typedef struct S_L8c46fc34_4 S_L8c46fc34_4;
typedef struct S_g8c46fac0 S_g8c46fac0;
typedef struct S_g8c46fac8 S_g8c46fac8;
typedef struct S_g8c46fc2c S_g8c46fc2c;
typedef struct S_g8c46fc34 S_g8c46fc34;
class S_g8c46fc28;
struct S_L8c46fc2c {
    S_g8c46fc2c *f00;
    S_L8c46fc2c_4 *f04;
};
struct S_L8c46fc34 {
    S_g8c46fc34 *f00;
    S_L8c46fc34_4 *f04;
};
class S_g8c46fc28 {
public:
    char unknown0[0x8];
    virtual void v0(int);
};
typedef struct S_g8c46fc28Data {

} S_g8c46fc28Data;
extern S_g8c46fac0 *g_8c46fac0;
extern int g_8c46fac4;
extern S_g8c46fac8 *g_8c46fac8;
extern S_g8c46fc28 *g_8c46fc28;
extern S_L8c46fc2c g_8c46fc2c;
extern S_L8c46fc34 g_8c46fc34;
extern "C" void call_8c03dc40(void *, int);
extern "C" void release_scene_control_resource(void *);
extern "C" void clear_global_8c08a584(void);
extern "C" void destroy_vector_grid(void *, int);
extern "C" void operation_8c0ce0b8(void)
{
    S_L8c46fc34 *pm3;
    void *pm1;
    int pm5;
    void *pm7;
    S_L8c46fc34 *pm2;
    if (g_8c46fc28 != 0) {
        g_8c46fc28->v0(1);
    }
    g_8c46fc28 = (S_g8c46fc28 *)0;
    call_8c03dc40(g_8c46fac0, 1);
    g_8c46fac4 = 0;
    release_scene_control_resource(g_8c46fac8);
    g_8c46fac8 = (S_g8c46fac8 *)0;
    clear_global_8c08a584();
    destroy_vector_grid((void *)((&g_8c46fc2c)->f00), 1);
    (&g_8c46fc2c)->f00 = 0;
    pm1 = (void *)((&g_8c46fc34)->f00);
    destroy_vector_grid(pm1, 1);
    pm2 = &g_8c46fc34;
    ((pm2))->f00 = 0;
    pm7 = (void *)((&g_8c46fc2c)->f04);
    pm1 = pm7;
    pm5 = 1;
    destroy_vector_grid(pm1, pm5);
    (&g_8c46fc2c)->f04 = (S_L8c46fc2c_4 *)0;
    pm1 = (void *)((&g_8c46fc34)->f04);
    destroy_vector_grid(pm1, 1);
    pm3 = &g_8c46fc34;
    (pm3)->f04 = (S_L8c46fc34_4 *)0;
}
