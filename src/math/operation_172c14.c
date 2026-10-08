/* Provisional address-based name; preserve observed field accesses and call order. */
void operation_172c14(int *angle,int amount){
    int bound=65536;
    *angle+=amount;
    if(*angle>=bound)*angle-=bound;
}
