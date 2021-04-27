Example1.1：
 2         ...
 3     char buf[BUFSIZE];
 4     gets(buf);//user control
 5     ...
 6
 7 Example1.2(c++):
 8     ...
 9     char buf[BUFSIZE];
10     cin >> (buf);//user control
11     ...
12
13 Example2:
14     ...
15     char buf[64], in[MAX_SIZE];
16     printf("Enter buffer contents:\n");
17     read(0, in, MAX_SIZE-1);
18     printf("Bytes to copy:\n");
19     scanf("%d", &bytes);//user control
20     memcpy(buf, in, bytes);
21     ...
22     char *lccopy(const char *str) {
23         char buf[BUFSIZE];
24         char *p;
25
26         strcpy(buf, str);
27         for (p = buf; *p; p++) {
28              if (isupper(*p)) {
29                 *p = tolower(*p);
30             }
31         }
32         return strdup(buf);
33     }
34
35 Example4:
36     if (!(png_ptr->mode & PNG_HAVE_PLTE)) {
37         /* Should be an error, but we can cope with it */
38         png_warning(png_ptr, "Missing PLTE before tRNS");
39     }
40     else if (length > (png_uint_32)png_ptr->num_palette) {
41         png_warning(png_ptr, "Incorrect tRNS chunk length");
42         png_crc_finish(png_ptr, length);
43         return;
44     }
45     ...
46     png_crc_read(png_ptr, readbuf, (png_size_t)length);
47
48 Example5:
49     void getUserInfo(char *username, struct _USER_INFO_2 info){
50         WCHAR unicodeUser[UNLEN+1];
51         MultiByteToWideChar(CP_ACP, 0, username, -1,
52                             unicodeUser, sizeof(unicodeUser));
53     NetUserGetInfo(NULL, unicodeUser, 2, (LPBYTE *)&info);
54     }
