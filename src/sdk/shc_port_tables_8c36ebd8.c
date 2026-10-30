/* SDK pool group 0x8c36ebd8-0x8c36ed24 (Hitachi SHC): snapshots the 24 port
   descriptors and initialises the port tables and handler objects. */
typedef struct PortDesc {
    char id[4];
    int unknown4;
    char name[4];
    int unknownc;
    int base;
    int size;
    char unknown18[0x2c - 0x18];
} PortDesc;

typedef struct PortCopy {
    char id[4];
    char name[4];
    int base;
    int size;
    int unknown10[2];
} PortCopy;

typedef struct Context {
    char unknown0[0x28];
    PortDesc ports[24];
} Context;

extern Context *g_context_8c562834;
extern PortCopy g_ports_8c5610f8[24];
extern void *g_handlers_8c561068[4];
extern int g_handler_params_8c3f7558[4];
extern int g_state_8c561370;
extern int g_count_8c5615bc, g_count_8c5615c0, g_count_8c5615c4, g_count_8c5615c8;
extern int g_current_8c5615cc, g_pending_8c5615d0;
extern int g_flag_8c5615e4, g_flag_8c5615e8, g_flag_8c5615ec;
extern char g_table_8c561338[], g_table_8c561378[], g_table_8c561078[];
extern void *create_handler_8c36bbc4(int, void (*)(void), int, int);
extern void handler_a_8c36ea7c(void), handler_b_8c36ea88(void), handler_c_8c36eb62(void), handler_d_8c36eb6a(void);
extern void *memset(void *, int, unsigned int);

void snapshot_ports_8c36ebd8(void)
{
    PortCopy *dst = g_ports_8c5610f8;
    PortDesc *src = g_context_8c562834->ports;
    int i;
    for (i = 0; i < 24; i++, dst++, src++) {
        dst->id[0] = src->id[0];
        dst->id[1] = src->id[1];
        dst->id[2] = src->id[2];
        dst->id[3] = src->id[3];
        dst->base = src->base;
        dst->name[0] = src->name[0];
        dst->name[1] = src->name[1];
        dst->name[2] = src->name[2];
        dst->name[3] = src->name[3];
        dst->size = src->size;
    }
}

void init_ports_8c36ec1a(void)
{
    g_handlers_8c561068[0] = create_handler_8c36bbc4(0x900, handler_a_8c36ea7c, g_handler_params_8c3f7558[0], 0);
    g_handlers_8c561068[1] = create_handler_8c36bbc4(0xa00, handler_b_8c36ea88, g_handler_params_8c3f7558[1], 0);
    g_handlers_8c561068[2] = create_handler_8c36bbc4(0xa00, handler_c_8c36eb62, g_handler_params_8c3f7558[2], 0);
    g_handlers_8c561068[3] = create_handler_8c36bbc4(0xa20, handler_d_8c36eb6a, g_handler_params_8c3f7558[3], 0);
    g_state_8c561370 = 0;
    g_count_8c5615bc = 0;
    g_count_8c5615c0 = 0;
    g_count_8c5615c4 = 0;
    g_count_8c5615c8 = 0;
    g_pending_8c5615d0 = 0;
    g_current_8c5615cc = -1;
    g_flag_8c5615e4 = 0;
    g_flag_8c5615e8 = 0;
    g_flag_8c5615ec = 0;
    memset(g_table_8c561338, 0, 0x38);
    memset(g_ports_8c5610f8, 0, 0x240);
    memset(g_table_8c561378, 0, 0x240);
    memset(g_table_8c561078, 0, 0x80);
}
