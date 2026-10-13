typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbaf0 S_g8c4dbaf0;
typedef struct S_g8c4dbaf4 S_g8c4dbaf4;
extern int g_8c41cb3c;
extern int g_8c4dbaec;
extern S_g8c4dbaf0 *g_8c4dbaf0;
extern S_g8c4dbaf4 *g_8c4dbaf4;
extern void call_8c17e458(void);
extern void call_8c027d54(void);
extern void call_8c035388(void);
extern void call_8c17f538(void);
extern int operation_8c1818c0(void);
extern void call_8c191504(int);
extern int call_8c372d98(void *);
extern void call_8c184918(void);
extern int call_8c181074(void);
extern void call_8c17f648(void);
extern void call_8c17fc24(void);
void operation_8c17e194(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    switch (g_8c4dbaec) {
    case 2:
        call_8c17e458();
        g_8c4dbaec = 4;
        return;
    case 3:
        call_8c027d54();
        call_8c035388();
        g_8c4dbaec = 4;
        return;
    case 4:
        call_8c17f538();
        g_8c4dbaec = 5;
        return;
    case 5:
        t1 = operation_8c1818c0();
        if (t1 != 0) {
            return;
        }
        g_8c4dbaec = 6;
        return;
    case 6:
        call_8c191504(0);
        t2 = call_8c372d98(g_8c4dbaf0);
        if (t2 != 0) {
            return;
        }
        g_8c4dbaec = 0;
        call_8c184918();
        g_8c41cb3c = 0;
        return;
    case 7:
        t3 = call_8c181074();
        if (t3 != 0) {
            return;
        }
        g_8c4dbaec = 8;
        return;
    case 8:
        call_8c191504(0);
        t4 = call_8c372d98(g_8c4dbaf0);
        if (t4 != 0) {
            return;
        }
        g_8c4dbaec = 9;
        return;
    case 9:
        call_8c17f648();
        g_8c4dbaec = 0;
        call_8c184918();
        g_8c41cb3c = 0;
        return;
    case 10:
        t5 = operation_8c1818c0();
        if (t5 != 0) {
            return;
        }
        g_8c4dbaec = 6;
        return;
    case 11:
        call_8c191504(0);
        t6 = call_8c372d98(g_8c4dbaf0);
        if (t6 != 0) {
            return;
        }
        g_8c4dbaec = 0;
        call_8c184918();
        g_8c41cb3c = 0;
        return;
    case 13:
        call_8c191504(0);
        t7 = call_8c372d98(g_8c4dbaf4);
        if (t7 != 0) {
            return;
        }
        g_8c4dbaec = 0xe;
        return;
    case 14:
        call_8c17fc24();
        g_8c4dbaec = 0;
        call_8c184918();
        g_8c41cb3c = 0;
        return;
    case 12:
        call_8c191504(0);
        t8 = call_8c372d98(g_8c4dbaf4);
        if (t8 == 0) {
            g_8c4dbaec = 0;
            call_8c184918();
            g_8c41cb3c = 0;
        }
        return;
    case 0:
    case 1:
        break;
    }
}
