typedef struct {
    char pad[0x34];
    int port;
} Voice;
typedef struct {
    int v0;
    int v4;
    int pad[3];
    int v14;
    int v18;
} Stat;
extern void port_set_slot_8c364aae(int, int, int);
extern void modem_send_8c361b76(int, int, int);
extern int func_8c3637d8(int);
extern int port_pause_8c3640ee(int);
extern int port_resume_8c364158(int);
extern int mic_set_8c341470(int);
extern void get_status_8c3642dc(int, Stat *);
extern void set_status_8c364312(int, int);
extern int ports_poll_8c364a78(void);

void voice_setup_8c342b4c(Voice *v, int unused, int rate, int mult)
{
    int m = mult;
    int port = v->port;
    float f;
    int i;
    int j;
    port_set_slot_8c364aae(port, 8, 0);
    port_set_slot_8c364aae(port, 1, 1);
    port_set_slot_8c364aae(port, 0, 0);
    port_set_slot_8c364aae(port, 0x17, 4);
    f = (float)(rate * m * 1000) + 0.5f;
    i = (int)f;
    if ((float)i > f) {
        j = i - 1;
    } else {
        j = i;
    }
    port_set_slot_8c364aae(port, 0x2d, j);
    port_set_slot_8c364aae(port, 0x2c, j);
    port_set_slot_8c364aae(port, 0x2a, j);
    port_set_slot_8c364aae(port, 0xe, 1);
    /* goto to the next line: reproduces the reference branch (docs/SHC.md) */
    goto l;
l:
    modem_send_8c361b76(port, 5, 0);
}

int voice_chk_a_8c342be0(Voice *v)
{
    int port = v->port;
    int r = func_8c3637d8(port);
    if (r) {
        return mic_set_8c341470(-311);
    }
    return 0;
}

int voice_chk_b_8c342bfc(Voice *v)
{
    int port = v->port;
    int r = port_pause_8c3640ee(port);
    if (r) {
        return mic_set_8c341470(-307);
    }
    return 0;
}

int voice_chk_c_8c342c18(Voice *v)
{
    int port = v->port;
    int r = port_resume_8c364158(port);
    if (r) {
        return mic_set_8c341470(-308);
    }
    return 0;
}

void voice_stat_8c342c34(v, a, b, c)
Voice *v;
int *a;
int *b;
int *c;
{
    Stat st;
    int port = v->port;
    get_status_8c3642dc(port, &st);
    *a = st.v0;
    *b = st.v4;
    *c = st.v14;
}

void voice_send_8c342c62(v, n)
Voice *v;
int n;
{
    int port = v->port;
    if (n >= 0) {
        set_status_8c364312(port, n);
    }
}

int voice_idle_8c342c78(void)
{
    int r = ports_poll_8c364a78();
    if (r != 1) {
        return 1;
    }
    return 0;
}
