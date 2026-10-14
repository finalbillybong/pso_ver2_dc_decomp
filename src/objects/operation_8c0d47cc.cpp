typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fdac S_g8c46fdac;
typedef struct S_g8c46fdb0 S_g8c46fdb0;
typedef struct S_g8c46fdd8 S_g8c46fdd8;
typedef struct S_g8c46fddc S_g8c46fddc;
typedef struct S_g8c46fde0 S_g8c46fde0;
class S_g8c46fdd4 {
public:
    char unknown0[0x8];
    virtual void v0(int);
};
typedef struct S_g8c46fdd4Data {

} S_g8c46fdd4Data;
extern S_g8c46fdac *g_8c46fdac;
extern S_g8c46fdb0 *g_8c46fdb0;
extern S_g8c46fdd4 *g_8c46fdd4;
extern S_g8c46fdd8 *g_8c46fdd8;
extern S_g8c46fddc *g_8c46fddc;
extern S_g8c46fde0 *g_8c46fde0;
extern "C" void destroy_vector_grid(void *, int);
extern "C" void call_8c18de08(void *);
extern "C" void call_8c03dc40(void *, int);
extern "C" void operation_8c0d47cc(void)
{
    destroy_vector_grid(g_8c46fddc, 1);
    g_8c46fddc = (S_g8c46fddc *)0;
    destroy_vector_grid(g_8c46fdd8, 1);
    g_8c46fdd8 = (S_g8c46fdd8 *)0;
    destroy_vector_grid(g_8c46fde0, 1);
    g_8c46fde0 = (S_g8c46fde0 *)0;
    if (g_8c46fdd4 != 0) {
        g_8c46fdd4->v0(1);
    }
    g_8c46fdd4 = (S_g8c46fdd4 *)0;
    call_8c18de08(g_8c46fdb0);
    if (g_8c46fdac != 0) {
        call_8c03dc40(g_8c46fdac, 1);
        g_8c46fdac = (S_g8c46fdac *)0;
    }
}
