typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c336004 S_L8c336004;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    float tag;
    float f04;
};
struct S_L8c336004 {
    float f00;
    float f04;
    float f08;
    float f0c;
};
extern float g_8c2e153c;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_L8c336004 g_8c336004;
extern int allocate_block(void *, unsigned int);
extern void operation_8c21597c(void *, void *, void *, int, int);
int operation_8c215904(Object *o, int a1, int a2, int a3, float f0)
{
    int t1;
    (&g_8c336004)->f00 = o->tag;
    (&g_8c336004)->f04 = o->f04;
    (&g_8c336004)->f08 = f0;
    (&g_8c336004)->f0c = g_8c2e153c;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x7c);
    if (t1 != 0) {
        operation_8c21597c((void *)t1, (void *)o, (void *)a1, a2, a3);
    }
    return (int)(t1);
}
