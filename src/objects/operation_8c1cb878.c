typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
struct S_g8c4db9e4 {
    int f00;
};
extern S_g8c4db9e4 *g_8c4db9e4;
extern int g_8c4dbaec;
extern int g_8c4dbb08;
extern char g_8c4e2e20;
extern void clear_global_render_resources(void);
extern int operation_8c1cb94c(int);
extern void select_mode19_8c1cc648(void);
extern void word_operation_8c0e92d4(unsigned int);
extern void enable_pair_8c1cc4b4(void);
void operation_8c1cb878(int a0)
{
    int t1;
    switch (g_8c4e2e20) {
    case 0:
        if (g_8c4dbaec != 0) {
            return;
        }
        clear_global_render_resources();
        t1 = operation_8c1cb94c(a0);
        if (t1 >= g_8c4dbb08) {
            select_mode19_8c1cc648();
            return;
        }
        word_operation_8c0e92d4((unsigned int)1);
        enable_pair_8c1cc4b4();
        return;
    case 1:
        if (g_8c4dbaec == 0) {
            if (g_8c4db9e4 != 0) {
                g_8c4db9e4->f00 = (unsigned int)g_8c4db9e4->f00 >> 1 << 1;
            }
            select_mode19_8c1cc648();
        }
    }
}
