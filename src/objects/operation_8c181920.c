typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbaf4 S_g8c4dbaf4;
typedef struct S_g8c4dbb0c S_g8c4dbb0c;
typedef struct S_g8c4dbb14 S_g8c4dbb14;
extern int g_8c41cb3c;
extern S_g8c4dbaf4 *g_8c4dbaf4;
extern S_g8c4dbb0c *g_8c4dbb0c;
extern S_g8c4dbb14 *g_8c4dbb14;
extern void word_operation_8c18490c(unsigned int);
extern void call_8c01024c(void *, void *, void *, void *);
void operation_8c181920(int a0)
{
    g_8c4dbaf4 = (S_g8c4dbaf4 *)a0;
    word_operation_8c18490c((unsigned int)a0);
    g_8c41cb3c = 1;
    call_8c01024c(g_8c4dbaf4, (void *)((void *)0x8c319912), g_8c4dbb14, g_8c4dbb0c);
}
