#include "get_next_line.h"

int main(int argc, char **argv)
{
//lecture fd depuis stdin entree standard
 	(void) argv;
        (void) argc;
        char *ans;
//        int fd;
       
//fd = open(argv[1], O_RDWR);
        while ((ans = get_next_line(3)))
        {
                printf(":%s:", ans);
                free(ans);
        }

//fd = open("../gnl/gnlTester/files/big_line_no_nl", O_RDWR);
        while ((ans = get_next_line(5)))
        {
                printf(":%s:", ans);
                free(ans);
        }

while ((ans = get_next_line(0)))
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
