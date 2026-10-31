/* SDK pool group 0x8c369428 (Hitachi SHC): queues a driver command: allocates a
   request, asks the driver to start the command with interrupts masked, records
   the parameters for newer drivers and kicks the queue. */
typedef struct Ops {
    char unknown0[0x2c];
    int (*start)(int, int, int);
    char unknown30[0x10];
    void (*kick)(void);
} Ops;

typedef struct Head {
    char unknown0[0x1c];
    struct Request * volatile current;
} Head;

typedef struct Request {
    Head *head;
    int *params;
    char unknown8[0x34];
    int id;
    char unknown40[8];
    short state;
    char unknown4a[6];
    short kind;
} Request;

typedef struct Driver {
    char unknown0[0xc];
    Ops *ops;
    char unknown10[4];
    int pool;
    char unknown18[0x14];
    int version;
    char unknown30[0xa];
    short flag;
} Driver;

extern Driver *g_driver_8c3fbdc8;
extern Request *alloc_request_8c369e5e(int, int, int, int);
extern int g_cmd_kind_8c55f418;
extern int g_cmd_8c55f41c;
extern int g_cmd_a_8c55f420;
extern int g_cmd_b_8c55f424;
extern int g_cmd_result_8c55f428[];
int queue_command_8c369428(int cmd, int a, int b)
{
    Request *req;
    int r;
    int old;
    if (cmd < 0xb05e) goto fail;
    req = alloc_request_8c369e5e(g_driver_8c3fbdc8->pool, 0, 0, 0);
    if (req == 0) goto fail;
    old = _builtin_get_imask();
    _builtin_set_imask(15);
    r = g_driver_8c3fbdc8->ops->start(cmd, a, b);
    if (r) {
        req->id = r;
        req->kind = 4;
        if (g_driver_8c3fbdc8->version >= 0x10001) {
            g_driver_8c3fbdc8->flag = 1;
            g_cmd_kind_8c55f418 = 2;
            g_cmd_8c55f41c = cmd;
            g_cmd_a_8c55f420 = a;
            g_cmd_b_8c55f424 = b;
            req->params = g_cmd_result_8c55f428;
            req->state = 8;
        } else {
            req->state = 6;
        }
        req->head->current = req;
        g_driver_8c3fbdc8->ops->kick();
    }
    _builtin_set_imask(old);
    if (r == 0) {
fail:
        return -13;
    }
    return 0;
}
