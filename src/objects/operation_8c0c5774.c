typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c41824c;
extern int g_8c418250;
extern int g_8c44be04;
extern int g_8c44be08;
extern char g_8c306344[];
extern void operation_0c638c(void);
extern void operation_03cf50_8c09cd3c(unsigned short);
extern void set_fields_8c09cc28(void);
extern void operation_03cee8(void);
extern void operation_8c081a28(void);
extern void call_8c0c5c1c(int);
extern void operation_8c01c244(int);
void operation_8c0c5774(void)
{
    g_8c41824c = 0;
    operation_0c638c();
    g_8c418250 = 4;
    operation_03cf50_8c09cd3c((unsigned short)(g_8c306344 + 0x4d));
    set_fields_8c09cc28();
    g_8c44be04 = 0x12;
    g_8c44be08 = 0;
    operation_03cee8();
    operation_8c081a28();
    call_8c0c5c1c(3);
    operation_8c01c244(0x17);
}
