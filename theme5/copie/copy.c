void mmemcpy(void *to, const void *from, unsigned int size) {
    char *to_ptr = (char *)to;
    const char *from_ptr = (const char *)from;

    while (size != 0) {
        *to_ptr++ = *from_ptr++;
        size --;
    }
    return;
}