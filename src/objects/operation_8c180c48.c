typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4db9e0;
extern int g_8c4db9e4;
extern int g_8c4db9ec;
extern int g_8c4dbaec;
extern int g_8c4dbaf0;
extern int operation_8c19b054(void);
extern int call_8c372d98(int);
extern int operation_8c181074(void);
extern void call_8c36d3ca(void *);
int operation_8c180c48(void)
{
    int v4;
    int t1;
    t1 = operation_8c19b054();
    g_8c4dbaf0 = (char)t1;
    v4 = (int)-0x10000;
    if (g_8c4db9e0 != 0) {
        v4 = (int)-0x10000;
        if (g_8c4db9e4 != 0) {
            v4 = (int)-0x10000;
            if (g_8c4db9ec != 0) {
                v4 = (int)-0x10000;
                if (g_8c4dbaec == 0) {
                    v4 = (int)-0x10000;
                    if ((char)t1 >= 0) {
                        v4 = (int)-0x10000;
                        if (7 >= (char)t1) {
                            v4 = call_8c372d98((int)((char)t1));
                            if (v4 == 0) {
                                v4 = operation_8c181074();
                                if (v4 == 0) {
                                    g_8c4dbaec = 8;
                                    call_8c36d3ca((void *)((void *)0x8c4dbae0));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return (int)(v4);
}
