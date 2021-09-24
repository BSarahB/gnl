#include "get_next_line.h"

int main(int argc, char **argv)
{
//lecture fd depuis stdin entree standard
 	//(void) argv;
        (void) argc;
        char *ans;
        int fd;
       
fd = open(argv[1], O_RDWR);
printf("fd stdin : %d", fd);
        while ((ans = get_next_line(fd)))
        {
                printf(":%s:", ans);
                free(ans);
        }

fd = open("../gnl/gnlTester/files/big_line_no_nl", O_RDWR);
printf("fd big_line_no_nl : %d", fd);
        while ((ans = get_next_line(fd)))
        {
                printf(":%s:", ans);
                free(ans);
        }
/*
//lecture fd depuis fichier
        (void) argv;
        (void) argc;
        char *ans;
        int fd;
        //fd = open("blyat2000S3.txt", O_RDWR | O_CREAT);
//fd = open("../gnl/gnlTester/files/nl", O_RDWR);
//fd = open("files/nl", O_RDWR);

fd = open("../gnl/gnlTester/files/big_line_no_nl", O_RDWR);
        while ((ans = get_next_line(fd)))
        {
                printf(":%s:", ans);
                free(ans);
        }
*/
}
