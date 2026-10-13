typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbaf0 S_g8c4dbaf0;
typedef struct S_g8c4dbb08 S_g8c4dbb08;
typedef struct S_g8c4dbb10 S_g8c4dbb10;
extern int g_8c41cb3c;
extern S_g8c4dbaf0 *g_8c4dbaf0;
extern S_g8c4dbb08 *g_8c4dbb08;
extern S_g8c4dbb10 *g_8c4dbb10;
extern int call_8c19b054(void);
extern void word_operation_8c18490c(unsigned int);
extern int call_8c010298(void *, void *, void *, void *);
int operation_8c1818c0(void)
{
    int v1;
    int v21;
    int t1;
    int t2;
    t1 = call_8c19b054();
    g_8c4dbaf0 = (S_g8c4dbaf0 *)(char)t1;
    v21 = (int)-1;
    if ((char)t1 >= 0) {
        v1 = (int)-1;
        if (7 >= (char)t1) {
            word_operation_8c18490c((unsigned int)((char)t1));
            g_8c41cb3c = 1;
            t2 = call_8c010298(g_8c4dbaf0, (void *)((void *)0x8c319870), g_8c4dbb10, g_8c4dbb08);
            v1 = (int)t2;
        }
        v21 = (int)v1;
    }
    return (int)(v21);
}
