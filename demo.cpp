Example1.1：
        ...
    char buf[BUFSIZE];
    gets(buf);//user control
    ...

Example1.2(c++):
    ...
    char buf[BUFSIZE];
    cin >> (buf);//user control
    ...

Example2:
    ...
    char buf[64], in[MAX_SIZE];
    printf("Enter buffer contents:\n");
    read(0, in, MAX_SIZE-1);
    printf("Bytes to copy:\n");
    scanf("%d", &bytes);//user control
    memcpy(buf, in, bytes);
    ...
    char *lccopy(const char *str) {
        char buf[BUFSIZE];
        char *p;

        strcpy(buf, str);
        for (p = buf; *p; p++) {
             if (isupper(*p)) {
                *p = tolower(*p);
            }
        }
        return strdup(buf);
    }

Example4:
    if (!(png_ptr->mode & PNG_HAVE_PLTE)) {
        /* Should be an error, but we can cope with it */
        png_warning(png_ptr, "Missing PLTE before tRNS");
    }
    else if (length > (png_uint_32)png_ptr->num_palette) {
        png_warning(png_ptr, "Incorrect tRNS chunk length");
        png_crc_finish(png_ptr, length);
        return;
    }
    ...
    png_crc_read(png_ptr, readbuf, (png_size_t)length);

Example5:
    void getUserInfo(char *username, struct _USER_INFO_2 info){
        WCHAR unicodeUser[UNLEN+1];
        MultiByteToWideChar(CP_ACP, 0, username, -1,
                            unicodeUser, sizeof(unicodeUser));
    NetUserGetInfo(NULL, unicodeUser, 2, (LPBYTE *)&info);
    }
