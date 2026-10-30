/* SDK pool group 0x8c347980-0x8c3479cc (Hitachi SHC): runs an object's
   callback after a successful check (-1 marks it done instead). */
typedef struct Object {
    int unknown0[2];
    int done;
    int unknown_c[6];
    void (*callback)(int argument);
    int argument;
} Object;

extern int check_8c347458(Object *object);
extern void register_8c346118(int (*owner)(Object *), int status);

int dispatch_8c347980(Object *object)
{
    int status = check_8c347458(object);
    if (status) goto done;
    if (!object->callback) goto done;
    if (object->callback != (void (*)(int))-1) goto call;
    object->done = 1;
    goto done;
call:
    object->callback(object->argument);
done:
    if (status) register_8c346118(dispatch_8c347980, status);
    return status;
}
