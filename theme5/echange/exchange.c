void newswap(void *to, void *from, unsigned int size) {
    char *to_ptr = (char *)to;
    char *from_ptr = (char *)from;
    char temp;

    while (size != 0) {
        temp = *to_ptr;
        *to_ptr = *from_ptr;
        *from_ptr = temp;

        to_ptr++;
        from_ptr++;
        size--;
    }
    return;
}
