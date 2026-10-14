typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c319f5c[];
extern int call_8c104e9c(void *);
void operation_8c18af14(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    if (*(int *)0x8c4dc5a8 != 0) {
        if (*(int *)0x8c4dc5a8 == 1) {
            goto L_8c18af3c;
        }
        if (*(int *)0x8c4dc5a8 == 2) {
            goto L_8c18af4a;
        }
        if (*(int *)0x8c4dc5a8 == 3) {
            goto L_8c18af58;
        }
    } else {
        t1 = call_8c104e9c((void *)((g_8c319f5c + 0xe)));
        *(int *)0x8c4dbc80 = (int)(t1);
        return;
L_8c18af3c:;
        t2 = call_8c104e9c((void *)((g_8c319f5c + 0x25)));
        *(int *)0x8c4dbc80 = (int)(t2);
        return;
L_8c18af4a:;
        t3 = call_8c104e9c((void *)((g_8c319f5c + 0x3a)));
        *(int *)0x8c4dbc80 = (int)(t3);
        return;
L_8c18af58:;
        t4 = call_8c104e9c((void *)((g_8c319f5c + 0x53)));
        *(int *)0x8c4dbc80 = (int)(t4);
        return;
    }
    t5 = call_8c104e9c((void *)((g_8c319f5c + 0xe)));
    *(int *)0x8c4dbc80 = (int)(t5);
}
