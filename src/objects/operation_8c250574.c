typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int get_game_mode_8c01c25c(void);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void THunterGuildSeqOffline_ctor_8c15921c(void *, int, int);
extern void THunterGuildSeqOnline_Server_ctor_8c208464(void *, int, int);
extern void THunterGuildSeqOnline_Client_ctor_8c208d3c(void *, int, int);
int operation_8c250574(int a0)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    t1 = get_game_mode_8c01c25c();
    if (t1 == 0xf) {
        t2 = heap_alloc_8c122700(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x40);
        if (t2 != 0) {
            THunterGuildSeqOffline_ctor_8c15921c((void *)t2, (int)*(S_g8c44be98 **)0x8c44be98, a0);
        }
        return t2;
    }
    t3 = get_game_mode_8c01c25c();
    if (t3 == 0x10) {
        if (*(int *)0x8c418248 == *(int *)0x8c418258) {
            t4 = heap_alloc_8c122700(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x44);
            if (t4 != 0) {
                THunterGuildSeqOnline_Server_ctor_8c208464((void *)t4, (int)*(S_g8c44be98 **)0x8c44be98, a0);
            }
            return t4;
        }
        t5 = heap_alloc_8c122700(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x40);
        if (t5 != 0) {
            THunterGuildSeqOnline_Client_ctor_8c208d3c((void *)t5, (int)*(S_g8c44be98 **)0x8c44be98, a0);
        }
        return t5;
    }
    return 0;
}
