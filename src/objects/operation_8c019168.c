typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418a00 S_g8c418a00;
extern S_g8c418a00 *g_8c418a00;
extern int query_field_8c17e6d8(void);
extern int query_field_8c17e6c0(void);
extern void call_8c02f930(void *, int, int);
void operation_8c019168(void)
{
    int t1;
    int t2;
    t2 = query_field_8c17e6d8();
    t1 = query_field_8c17e6c0();
    call_8c02f930(g_8c418a00, t1, t2);
}
