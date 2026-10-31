/* SDK pool group 0x8c346358 (Hitachi SHC): with interrupts masked, clears the
   32-byte aligned system block and initialises its block, ring, buffer and
   slot pools and both queues. */
typedef struct System {
    char unknown0[0x24];
    int unknown24;
    int unknown28;
    int unknown2c;
    char unknown30[0x6c];
    int unknown9c;
    char unknowna0[0x38c];
    int queue0;
    int queue1;
} System;

extern System *g_system_8c3fac48;
extern int g_state_8c3fac4c;
extern char g_system_area_8c526a18[];
extern char g_blocks_8c526e74[];
extern char g_ring_8c527e74[];
extern char g_buffer_area_8c528074[];
extern char g_slots_8c528294[];
extern void *memset(void *, int, unsigned long);
extern int set_blocks_8c347a5c(void *, int);
extern int set_ring_8c347ba0(void *, int);
extern int set_buffer_8c347158(unsigned char *);
extern int init_slots_8c346e94(void *, unsigned int);
extern int reset_8c348b20(void);
extern int set_value_8c348094(int);
extern int open_queue_8c34756c(int *);
extern int set_value_8c3461d4(int);
extern int set_split_8c346214(int, int, int);
int init_pool_8c346358(int blocks, int ring, int slots)
{
    struct { int n; } count;
    int old;
    unsigned char *buffer;
    old = _builtin_get_imask();
    _builtin_set_imask(15);
    count.n = 0x100;
    g_system_8c3fac48 = (System *)((int)(g_system_area_8c526a18 + 31) & ~31);
    memset(g_system_8c3fac48, 0xff, 0x43c);
    g_system_8c3fac48->unknown9c = 0;
    buffer = (unsigned char *)((int)(g_buffer_area_8c528074 + 31) & ~31);
    set_blocks_8c347a5c(g_blocks_8c526e74, 0x40);
    set_ring_8c347ba0(g_ring_8c527e74, 0x40);
    set_buffer_8c347158(buffer);
    init_slots_8c346e94(g_slots_8c528294, count.n);
    g_system_8c3fac48->unknown28 = 0;
    g_system_8c3fac48->unknown2c = 0;
    g_system_8c3fac48->unknown24 = 0;
    reset_8c348b20();
    g_state_8c3fac4c = 0;
    set_value_8c348094(1);
    open_queue_8c34756c(&g_system_8c3fac48->queue0);
    open_queue_8c34756c(&g_system_8c3fac48->queue1);
    set_value_8c3461d4(0);
    _builtin_set_imask(old);
    set_split_8c346214(0x30, 8, 8);
    return 0;
}
