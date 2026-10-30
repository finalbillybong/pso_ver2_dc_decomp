/* SDK pool group 0x8c343388 (Hitachi SHC): clears the state of one channel of
   the current object (selected by a byte); error 0x0d000001 when there is no
   object, 0x07000103 for a null argument. */
typedef struct Channel {
    char unknown0[9];
    char count;
    char unknown_a[0x264 - 10];
    int state;
    char unknown268[0x280 - 0x268];
    int values[8];
} Channel;

typedef struct Object {
    int unknown0;
    Channel *channels;
} Object;

extern Object *g_current_8c3fac48;
extern void report_error_8c346118(int (*)(char *), int);

int clear_channel_8c343388(char *index)
{
    Object *object = g_current_8c3fac48;
    Channel *channel;
    int error = 0;
    int i;
    if (object == 0) error = 0xd000001;
    else if (index == 0) error = 0x7000103;
    else {
        i = *index;
        channel = &object->channels[(short)i];
        channel->state = 0;
        for (i = 0; i < channel->count; i++) channel->values[i] = 0;
    }
    if (error) report_error_8c346118(clear_channel_8c343388, error);
    return error;
}
