typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4678f0 S_g8c4678f0;
typedef struct S_g8c4678f0_42c S_g8c4678f0_42c;
typedef struct S_g8c4678f0_42c_8 S_g8c4678f0_42c_8;
struct S_g8c4678f0 {
    char unknown0[0x42c];
    S_g8c4678f0_42c *f42c;
};
struct S_g8c4678f0_42c {
    char unknown0[0x8];
    S_g8c4678f0_42c_8 *f08;
};
extern int g_8c4678e0;
extern int g_8c4678e4;
extern int g_8c4678e8;
extern int g_8c4678ec;
extern S_g8c4678f0 *g_8c4678f0;
extern int g_8c4678f4;
extern int call_8c057c74(void);
extern int call_8c011ecc(int);
extern void initialize_vector_array(void *, void *);
extern int record24_8c17948c(int);
extern int record30_8c1794a0(int);
extern int block32_8c1794b4(int);
extern int record30_8c1794c8(int);
void operation_8c054874(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    t1 = call_8c057c74();
    g_8c4678f0 = (S_g8c4678f0 *)(int)(t1);
    t2 = call_8c011ecc(0xc);
    if (t2 != 0) {
        initialize_vector_array((void *)t2, (void *)(g_8c4678f0->f42c->f08));
    }
    g_8c4678f4 = (int)(t2);
    t3 = record24_8c17948c(0);
    g_8c4678e0 = (int)(t3);
    t4 = record30_8c1794a0(0);
    g_8c4678e4 = (int)(t4);
    t5 = block32_8c1794b4(0);
    g_8c4678e8 = (int)(t5);
    t6 = record30_8c1794c8(0);
    g_8c4678ec = (int)(t6);
}
