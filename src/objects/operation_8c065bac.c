typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c468928 S_g8c468928;
typedef struct S_g8c468978 S_g8c468978;
extern S_g8c468928 *g_8c468928;
extern S_g8c468978 *g_8c468978;
extern void call_8c011ec0(void *);
extern void call_8c03dc40(void *, int);
void operation_8c065bac(void)
{
    if (g_8c468978 != 0) {
        call_8c011ec0(g_8c468978);
    }
    if (g_8c468928 != 0) {
        call_8c03dc40(g_8c468928, 1);
        g_8c468928 = (S_g8c468928 *)0;
    }
}
