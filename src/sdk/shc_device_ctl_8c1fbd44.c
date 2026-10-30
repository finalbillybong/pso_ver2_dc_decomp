/* Device-control wrappers around one request call (Hitachi SHC). */
extern short device_request_8c3ca534(int code, void *in, void *out);

typedef struct Query {
    short status;
    int a;
    int b;
    int c;
} Query;

typedef struct Select {
    int zero;
    int value;
    short mode;
} Select;

typedef struct Value {
    int zero;
    int value;
} Value;

void device_poll_8c1fbd44(void)
{
    char buffer[0x14];
    device_request_8c3ca534(0x4101, buffer, buffer);
}

short device_query_8c1fbd5a(int a, int b)
{
    short reset;
    Query q;
    short r;
    q.status = 0;
    q.a = a;
    q.b = b;
    q.c = 0;
    r = device_request_8c3ca534(0x4105, &q, &q);
    if (r != 0) {
        reset = 0;
        device_request_8c3ca534(0x4106, &reset, &reset);
        r = device_request_8c3ca534(0x4105, &q, &q);
    }
    return r;
}

void device_reset_8c1fbda8(void)
{
    short reset = 0;
    device_request_8c3ca534(0x4106, &reset, &reset);
}

void device_select_8c1fbdc2(int value)
{
    Select s;
    s.zero = 0;
    s.value = value;
    s.mode = 10;
    device_request_8c3ca534(0x4130, &s, &s);
}

void device_set_8c1fbde2(int value)
{
    Value v;
    v.zero = 0;
    v.value = value;
    device_request_8c3ca534(0x4131, &v, &v);
}
