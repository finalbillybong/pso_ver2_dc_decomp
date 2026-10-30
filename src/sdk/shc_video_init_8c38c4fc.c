typedef struct {
    int mode;
    int f04;
    int f08;
    int f0c;
    int f10;
    int pad14[3];
    int f20;
    int pad24[7];
    int f40;
    int f44;
    int pad48[9];
    void *target;
    int pad70[8];
    int out90;
    int out94;
    int out98;
    int out9c;
} Cfg;
extern int obj_8c576400;
extern int color_8c5763f8;
extern float scale_8c5763fc;
extern Cfg cfg_8c575abc;
extern int w_8c576430;
extern int h_8c576434;
extern int x_8c57642c;
extern int y_8c576428;
extern char name_8c3fe4d8[];
extern void channel_setup_8c3b99ec(int *, int, int, int);
extern void start_transfer_8c3b9c3a(int *, char *, int, int);
extern int update_8c3bb160(Cfg *);
extern void channel_release_8c3ba068(int *);

void video_init_8c38c4fc(char *name, int size, int depth)
{
    Cfg *c;
    color_8c5763f8 = 0xffbfbfbf;
    scale_8c5763fc = 8.0f;
    if (name == 0) {
        channel_setup_8c3b99ec(&obj_8c576400, 0x80, 0x80, 0x300);
        start_transfer_8c3b9c3a(&obj_8c576400, name_8c3fe4d8, 0, 0);
    } else {
        channel_setup_8c3b99ec(&obj_8c576400, size, size, depth);
        start_transfer_8c3b9c3a(&obj_8c576400, name, 0, 0);
    }
    c = &cfg_8c575abc;
    c->mode = 0xf00608;
    c->f04 = 2;
    c->f08 = 2;
    c->f0c = 0;
    c->f20 = 2;
    c->target = &obj_8c576400;
    c->f40 = 0;
    c->f44 = 1;
    c->f10 = 1;
    update_8c3bb160(c);
    w_8c576430 = c->out90;
    h_8c576434 = c->out94;
    x_8c57642c = c->out98;
    y_8c576428 = c->out9c;
}

void video_flush_8c38c5a2(void)
{
    channel_release_8c3ba068(&obj_8c576400);
}

void video_set_scale_8c38c5aa(unsigned short s)
{
    scale_8c5763fc = (float)s;
}

void video_set_color_8c38c5b6(int c)
{
    color_8c5763f8 = c;
}
