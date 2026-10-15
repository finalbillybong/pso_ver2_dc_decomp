typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbaf0 S_g8c4dbaf0;
typedef struct S_g8c4dbb10 S_g8c4dbb10;
extern int g_8c41cb3c;
extern S_g8c4dbaf0 *g_8c4dbaf0;
extern S_g8c4dbb10 *g_8c4dbb10;
extern int operation_8c19b054(void);
extern int call_8c372d38(int, void *);
extern void word_operation_8c18490c(unsigned int);
extern int operation_8c010240(int, int, int);
int operation_8c181074(void)
{
    int v1;
    int v21;
    int v41;
    int t1;
    int t2;
    int t3;
    t1 = operation_8c19b054();
    g_8c4dbaf0 = (S_g8c4dbaf0 *)(char)t1;
    v41 = (int)-1;
    if ((char)t1 >= 0) {
        v21 = (int)-1;
        if (7 >= (char)t1) {
            t2 = call_8c372d38((int)((char)t1), (void *)((void *)0x8c319870));
            v1 = (int)t2;
            if (t2 == 0) {
                word_operation_8c18490c((unsigned int)g_8c4dbaf0);
                g_8c41cb3c = 1;
                t3 = operation_8c010240((int)g_8c4dbaf0, (int)((void *)0x8c319870), (int)g_8c4dbb10);
                v1 = (int)t3;
            }
            v21 = (int)v1;
        }
        v41 = (int)v21;
    }
    return (int)(v41);
}
