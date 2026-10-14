typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418254 S_g8c418254;
extern int g_8c41824c;
extern int g_8c418250;
extern S_g8c418254 *g_8c418254;
extern int g_8c44be04;
extern int g_8c44be08;
extern char g_8c306344[];
extern void operation_0c638c(void);
extern void operation_03cf50_8c09cd3c(unsigned short);
extern void set_fields_8c09cc28(void);
extern void operation_0c6270(int);
extern void call_8c0c60b0(void);
extern void operation_8c01c244(int);
void operation_8c0c598c(void)
{
    g_8c41824c = 0;
    operation_0c638c();
    g_8c418250 = 4;
    operation_03cf50_8c09cd3c((unsigned short)(g_8c306344 + 0x80));
    set_fields_8c09cc28();
    g_8c44be04 = 0xd;
    g_8c44be08 = 0;
    operation_0c6270((int)g_8c418254);
    call_8c0c60b0();
    operation_8c01c244(0x14);
}
