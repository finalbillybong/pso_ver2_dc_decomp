typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbaf4 S_g8c4dbaf4;
typedef struct S_g8c4dbb14 S_g8c4dbb14;
extern int g_8c41cb3c;
extern S_g8c4dbaf4 *g_8c4dbaf4;
extern S_g8c4dbb14 *g_8c4dbb14;
extern int call_8c372d38(int, void *);
extern void word_operation_8c18490c(unsigned int);
extern int operation_8c010240(int, int, int);
int operation_8c181140(int a0)
{
    int v1;
    int v21;
    int v40;
    int t1;
    int t2;
    g_8c4dbaf4 = (S_g8c4dbaf4 *)a0;
    v40 = (int)-1;
    if (a0 >= 0) {
        v21 = (int)-1;
        if (7 >= a0) {
            t1 = call_8c372d38(a0, (void *)((void *)0x8c319912));
            v1 = (int)t1;
            if (t1 == 0) {
                word_operation_8c18490c((unsigned int)g_8c4dbaf4);
                g_8c41cb3c = 1;
                t2 = operation_8c010240((int)g_8c4dbaf4, (int)((void *)0x8c319912), (int)g_8c4dbb14);
                v1 = (int)t2;
            }
            v21 = (int)v1;
        }
        v40 = (int)v21;
    }
    return (int)(v40);
}
