/* SDK pool group 0x8c350e68-0x8c3510d4 (Hitachi SHC): stream open/play
   methods; the third group's literal pool sits mid-function after a bra. */
typedef struct Obj {
    char pad0[2];
    char state;
    char pad3[5];
    int result;
    int pad0c;
    int arg;
    char pad14[0x98 - 0x14];
    char busy;
} Obj;

extern char g_8c536418[];
extern char str_8c3f47f8[];
extern char str_8c3f481c[];
extern char str_8c3f4844[];
extern char str_8c3f4870[];
void call_8c35049c(Obj *);
void lock_8c34bbfc(void);
void unlock_8c34bc24(void);
int call_8c34db88(int, int, char *, int *, int *, int *);
int call_8c349766(char *, int, int, int, int);
void call_8c34c4c0(int, int, char *, int);
void call_8c34c3d4(char *, int);
void call_8c350334(Obj *);
int call_8c349852(int, int);
int call_8c358b14(char *, int);
void call_8c34c3ae(char *);
void call_8c3502a8(Obj *);

#define SWAP(x) ((((x) >> 24) & 0xff) | (((x) >> 8) & 0xff00) | (((x) << 8) & 0xff0000) | ((x) << 24))

void stream_open_8c350e68(Obj *obj, int a, int b)
{
    int l0, l4, l8;
    char buf[16];
    int r;

    call_8c35049c(obj);
    lock_8c34bbfc();
    r = call_8c34db88(a, b, g_8c536418, &l0, &l4, &l8);
    if (r == 0) {
        obj->result = call_8c349766(g_8c536418, l0, l4, l8, obj->arg);
        if (obj->result == 0) {
            unlock_8c34bc24();
            call_8c34c4c0(a, b, buf, 16);
            call_8c34c3d4(str_8c3f47f8, (int)buf);
        } else {
            call_8c350334(obj);
            obj->busy = 0;
        }
    }
    unlock_8c34bc24();
}

void stream_open2_8c350ef8(Obj *obj, int a)
{
    call_8c35049c(obj);
    lock_8c34bbfc();
    if ((obj->result = call_8c349852(a, obj->arg)) == 0) {
        unlock_8c34bc24();
        call_8c34c3d4(str_8c3f481c, a);
    } else {
        call_8c350334(obj);
        obj->busy = 0;
    }
    unlock_8c34bc24();
}

void stream_play_mode_8c350f46(Obj *obj, char *p, int mode);

/* tail call to the next function: SHC loads the argument and falls through */
void stream_play_8c350f44(Obj *obj, char *p)
{
    stream_play_mode_8c350f46(obj, p, 0x40000000);
}

void stream_play_mode_8c350f46(Obj *obj, char *p, int mode)
{
    call_8c35049c(obj);
    lock_8c34bbfc();
    p = (char *)call_8c358b14(p, mode);
    if (p == 0) {
        unlock_8c34bc24();
        call_8c34c3ae(str_8c3f4844);
    } else {
        call_8c3502a8(obj);
        obj->state = 2;
        obj->busy = 0;
    }
    unlock_8c34bc24();
}

void stream_play_at_8c350fda(Obj *obj, char *data, int idx)
{
    int *t = (int *)data;
    char *base = data;
    int n;
    int v;
    char *q;

    call_8c35049c(obj);
    n = t[1];
    if (idx < SWAP(n) && idx >= 0) {
        lock_8c34bbfc();
        v = t[(idx + 1) * 2];
        v = SWAP(v);
        q = base + v;
        data = (char *)call_8c358b14(q, 0x40000000);
        if (data == 0) {
            unlock_8c34bc24();
            call_8c34c3ae(str_8c3f4870);
        } else {
            call_8c3502a8(obj);
            obj->state = 2;
            obj->busy = 0;
        }
        unlock_8c34bc24();
    }
}
