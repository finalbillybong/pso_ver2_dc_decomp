/* SDK pool group 0x8c349248 (Hitachi SHC): stops a channel, releases its slots
   in the object's slot map and finishes it; error 0x0d000001 when there is no
   current object, 0x07000103 for a null argument. */
typedef struct Channel {
    char unknown0[8];
    char count;
    char unknown9[0x218 - 9];
    char flags[4];
    char slots[0x2a0 - 0x21c];
} Channel;

typedef struct Object {
    int unknown0;
    Channel *channels;
    char unknown8[0x39 - 8];
    char free_slots;
    char slot_map[1];
} Object;

extern Object *g_current_8c3fac48;
extern int stop_channel_8c344890(char *);
extern int reset_channel_8c343bd0(char *, int);
extern int finish_channel_8c3489bc(char *);
extern void report_error_8c346118(int (*)(char *), int);

int free_channel_8c349248(char *index)
{
    Channel *channel;
    int error = 0;
    int i;
    if (g_current_8c3fac48 == 0) error = 0xd000001;
    else if (index == 0) error = 0x7000103;
    else {
        i = *index;
        channel = &g_current_8c3fac48->channels[i];
        error = stop_channel_8c344890(index);
        if (error == 0) {
            goto reset;
reset:
            reset_channel_8c343bd0(index, -1);
            if (error == 0) {
                i = 0;
                while (i < channel->count) {
                    g_current_8c3fac48->slot_map[channel->slots[i]] = -1;
                    channel->slots[i] = -1;
                    channel->flags[i] = -1;
                    i++;
                }
                g_current_8c3fac48->free_slots -= channel->count;
                error = finish_channel_8c3489bc(index);
            }
        }
    }
    if (error) report_error_8c346118(free_channel_8c349248, error);
    return error;
}
