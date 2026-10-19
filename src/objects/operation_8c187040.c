typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be88 S_g8c44be88;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x8];
    short f08;
};
extern S_g8c44be88 *g_8c44be88;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4dbbe8;
extern void operation_8c110d68(short);
extern int allocate_block(void *, unsigned int);
extern void operation_8c18746c(void *, int, void *);
void operation_8c187040(Object *o)
{
    int t1;
    if (g_8c4dbbe8 != -1) {
        operation_8c110d68(o->f08);
    }
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x38);
    if (t1 != 0) {
        operation_8c18746c((void *)t1, (int)g_8c44be88, (void *)o);
    }
    g_8c4dbbe8 = -1;
}
