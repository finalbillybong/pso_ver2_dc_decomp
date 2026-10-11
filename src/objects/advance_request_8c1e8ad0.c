typedef struct Request { char unknown0[0x100]; int timer; char unknown104[8]; short done; char unknown10e[2]; short state; char unknown112[0x8a]; int resource; } Request;
extern unsigned char operation_03d080(int);
void advance_request_8c1e8ad0(Request *o)
{
    switch (o->state) {
    case -1:
        break;
    case 0:
        o->timer = 0;
        o->state = 1;
        break;
    case 1:
        if (o->resource >= 0 && operation_03d080(o->resource) == 1) o->done = 0;
        break;
    }
}
