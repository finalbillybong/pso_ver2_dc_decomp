/* Sets two fields after a successful check (Hitachi SHC). */
typedef struct Object {
    int unknown0[9];
    int first;
    int second;
} Object;

extern int check_object_8c347458(Object *);

int set_pair_8c347f84(Object *o, int first, int second)
{
    int r = check_object_8c347458(o);
    if (r != 0) goto done;
    o->first = first;
    o->second = second;
done:
    return r;
}
