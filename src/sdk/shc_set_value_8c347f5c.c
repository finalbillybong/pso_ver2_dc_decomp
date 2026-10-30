/* Sets a field after a successful check (Hitachi SHC). */
typedef struct Object {
    int unknown0[7];
    int value;
} Object;

extern int check_object_8c347458(Object *);

int set_value_8c347f5c(Object *o, int value)
{
    int r = check_object_8c347458(o);
    if (r != 0) goto done;
    o->value = value;
done:
    return r;
}
