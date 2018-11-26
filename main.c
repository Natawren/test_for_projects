#include "libft.h"
#include <stdio.h>
#include <string.h>


char f(char c)
{
    c = 'o';
    return (c);
}

void *ft(char *c)
{
    *c = 'o';
    return ((void*)c);
}

int     main()
{
    /*char s15[] = "Hello world";
    char s25[] = "";
    char s35[] = "\n";
    char s45[] = "c";
    char s55[] = "qazWSXedc";
    char s65[] = "123456789qazWSXedc";
    char s75[] = "qaeeezWSXedc";
    char s85[] = "          ";
    ft_striter(s15, (ft));
    ft_striter(s25, (ft));
    ft_striter(s35, (ft));
    ft_striter(s45, (ft));
    ft_striter(s55, (ft));
    ft_striter(s65, (ft));
    ft_striter(s75, (ft));
    ft_striter(s85, (ft));
    printf("ft_striter:\n");
    printf("1:'oooooooooooo' your:%s \n",  s15);
    printf("2:'' your:%s\n",  s25);
    printf("3: 'o' your:%s \n", s35);
    printf("4:'o'  your:%s \n", s45);
    printf("5: 'ooooooooo' your:%s \n", s55);
    printf("6: 'oooooooooooooooooo' your:%s \n",s65);
    printf("7:'oooooooooooo'  your:%s\n", s75);
    printf("8:'oooooooooo'  your:%s \n", s85);
    printf("\n\n");*/
    
    
    char s1[] = "Hello world               ";
    char s2[] = "";
    char s3[] = "\n";
    char s4[] = "c";
    char s5[] = "      b    vg        qazWSXedc";
    char s6[] = "       qazWSXedc";
    char s7[] = "qaeee     zWSXed c";
    char s8[] = "          ";
    
    printf("ft_strtrim:\n");
    printf("1:'Hello world' your:%s\n",  ft_strtrim(s1));
    printf("2:'' your:%s\n",  ft_strtrim(s2));
    printf("3:'\n' your:%s\n", ft_strtrim(s3));
    printf("4:'c' your:%s\n", ft_strtrim(s4));
    printf("5:'b    vg        qazWSXedc' your:%s\n", ft_strtrim(s5));
    printf("6:'qazWSXedc' your:%s\n",ft_strtrim(s6));
    printf("7:'qaeee     zWSXed c' your:%s\n", ft_strtrim(s7));
    printf("8:'' your:%s\n", ft_strtrim(s8));
    printf("\n\n");
    
    char s11[] = "Hello world";
    char s21[] = "";
    char s31[] = "";
    char s41[] = "c";
    char s51[] = "qazWSXedc";
    char s61[] = "qazWSXedc";
    char s71[] = "qaeeezWSXedc";
    char s81[] = "          ";
    printf("ft_strsub:\n");
    printf("1:'llo worl' your:%s\n",  ft_strsub(s11, 2, 8));
    printf("2:'' your:%s\n",  ft_strsub(s21, 2, 5));
    printf("3:'' your:%s\n", ft_strsub(s31, 0, 5));
    printf("4: 'c' your:%s\n", ft_strsub(s41, 0, 1));
    printf("5:'q' your:%s\n", ft_strsub(s51, 0, 1));
    printf("6:'c' your:%s\n",ft_strsub(s61, 8, 1));
    printf("7:'qaeeezWSXedc' your:%s\n", ft_strsub(s71, 0, 12));
    printf("8:'' your:%s\n", ft_strsub(s81, 3, 0));
    printf("\n\n");

    char    **array;
    int i;

    i = 0;
    char s12[] = " Hello world        g     g   ty ";
    char s22[] = "*********Wowwow*e8r8s************";
    char s32[] = "";
    char s42[] = "$k$h$h$h$y$u$i$$$$$$$$$$$";
    char s52[] = "o0o0o0o";
    char s62[] = "o0o0o0o";
    char s72[] = "po";
    char s82[] = "          ";

    array = ft_strsplit(s12, ' ');
    printf("1:'Hello','world','g','g','ty' yours: ");
    while (array[i] != '\0')
    {
        printf("%s,", array[i]);
        i++;
    }
    printf ("\n");
    
    i = 0;
    array = ft_strsplit(s22, '*');
    printf("2:'Wowwow','e8r8s' yours: ");
    while (array[i] != '\0')
    {
        printf("%s,", array[i]);
        i++;
    }    
    printf ("\n");
    
    
    i = 0;
    array = ft_strsplit(s32, ' ');
    printf("3:'' yours: ");
    while (array[i] != '\0')
    {
        printf("%s,", array[i]);
        i++;
    }    
    printf ("\n");
    
    i = 0;
    array = ft_strsplit(s42, '$');
    printf("4:'k','h', 'h', 'h', 'y', 'u', 'i' yours: ");
    while (array[i] != '\0')
    {
        printf("%s,", array[i]);
        i++;
    }    
    printf ("\n");
    
    i = 0;
    array = ft_strsplit(s52, '0');
    printf("5:'o','o', 'o', 'o' yours: ");
    while (array[i] != '\0')
    {
        printf("%s,", array[i]);
        i++;
    }    
    printf ("\n");
    i = 0;
    printf("5:'0','0', '0' yours: ");
    array = ft_strsplit(s62, 'o');
    while (array[i] != '\0')
    {
        printf("%s,", array[i]);
        i++;
    }    
    printf ("\n");
    i = 0;
    array = ft_strsplit(s72, ' ');
    printf("5:'po' yours: ");
    while (array[i] != '\0')
    {
        printf("%s,", array[i]);
        i++;
    }    
    printf ("\n");
    i = 0;
    array = ft_strsplit(s82, ' ');
    printf("5:'' yours: ");
    while (array[i] != '\0')
    {
        printf("%s,", array[i]);
        i++;
    }    
   printf ("\n");
    printf("\n\n");
    
    
    char s13[] = "Hello world";
    char s23[] = "";
    char s33[] = "\n";
    char s43[] = "c";
    char s53[] = "qazWSXedc";
    char s63[] = "123456789";
    char s73[] = "qaeeezWSXedc";
    char s83[] = "          ";
    
    printf("ft_strmap:\n");
    printf("1:'ooooooooooo' yours:%s \n",  ft_strmap(s13, &f));
    printf("2:'' yours:%s\n",  ft_strmap(s23, &f));
    printf("3:'o' yours:%s \n", ft_strmap(s33, &f));
    printf("4:'o' yours:%s \n", ft_strmap(s43, &f));
    printf("5:'ooooooooo' yours:%s \n", ft_strmap(s53, &f));
    printf("6: 'ooooooooo' yours:%s \n",ft_strmap(s63, &f));
    printf("7:'oooooooooooo' yours:%s\n", ft_strmap(s73, &f));
    printf("8:'oooooooooo' yours:%s \n", ft_strmap(s83, &f));
    printf("\n\n");
    
    char s14[] = "Hello world";
    char s24[] = "";
    char s34[] = "";
    char s44[] = "c";
    char s54[] = "qazWSXedc";
    char s64[] = "qazWSXedc";
    char s74[] = "qaeeezWSXedc";
    char s84[] = "          ";
    char find1[]= "Hello world";
    char find2[] = "1234567890";
    char find3[]= "";
    char find4[]= "c";
    char find5[] = "qazWS";
    char find6[] = "";
    char find7[] = "v";
    char find8[] = " ";
    printf("ft_strjoin:\n");
    printf("1:'Hello worldHello world' yours:%s \n", ft_strjoin(s14, find1));
    printf("2:'1234567890' yours:%s\n", ft_strjoin(s24, find2));
    printf("3:'' yours:%s \n", ft_strjoin(s34, find3));
    printf("4:'cc' yours:%s \n", ft_strjoin(s44, find4));
    printf("5:'qazWSXedcqazWS' yours:%s\n", ft_strjoin(s54, find5));
    printf("6:'qazWSXedc' yours:%s\n", ft_strjoin(s64, find6));
    printf("7:'qaeeezWSXedcv' yours:%s\n", ft_strjoin(s74, find7));
    printf("8:'           ' yours:%s \n", ft_strjoin(s84, find8));
    printf("\n\n");
 
    
    char s16[] = "Hello world";
    char s26[] = "";
    char s36[] = "";
    char s46[] = "c";
    char s56[] = "qazWSXedc";
    char s66[] = "qazWSXedc";
    char s76[] = "qaeeezWSXedc";
    char s86[] = "          ";
   char find16[]= "Hello world";
    char find26[] = "1234567890";
    char find36[]= "";
    char find46[]= "c";
    char find56[] = "qazWS";
    char find66[] = "qa";
    char find76[] = "v";
    char find86[] = " ";
    printf("ft_strnequ:\n");
    printf("1:1 your:%d \n", ft_strnequ(s16, find16, 10));
    printf("2:0 your:%d\n", ft_strnequ(s26, find26, 1));
    printf("3:1 your:%d \n", ft_strnequ(s36, find36, 5));
    printf("4:1 your:%d \n", ft_strnequ(s46, find46, 100));
    printf("5:1 your: %d \n", ft_strnequ(s56, find56, 3));
    printf("6:1 your:%d \n", ft_strnequ(s66, find66, 0));
    printf("7:0 your:%d\n", ft_strnequ(s76, find76, 500));
    printf("8:0 your:%d \n", ft_strnequ(s86, find86, 10));
    printf("\n\n");


    char s17[] = "Hello world";
    char s27[] = "";
    char s37[] = "";
    char s47[] = "c";
    char s57[] = "qazWSXedc";
    char s67[] = "qazWSXedc";
    char s77[] = "qaeeezWSXedc";
    char s87[] = "          ";
   char find17[]= "Hello world";
    char find27[] = "1234567890";
    char find37[]= "";
    char find47[]= "c";
    char find57[] = "qazWS";
    char find67[] = "x";
    char find77[] = "v";
    char find87[] = " ";
 
    printf("ft_strequ:\n");
    printf("1:1 your:%d \n", ft_strequ(s17, find17));
    printf("2:0 your:%d\n", ft_strequ(s27, find27));
    printf("3:1 your:%d \n", ft_strequ(s37, find37));
    printf("4:1 your:%d \n", ft_strequ(s47, find47));
    printf("5:0 your:%d \n", ft_strequ(s57, find57));
    printf("6:0 your:%d \n", ft_strequ(s67, find67));
    printf("7:0 your:%d\n", ft_strequ(s77, find77));
    printf("8:0 your:%d \n", ft_strequ(s87, find87));
    printf("\n\n");

    printf("ft_itoa:\n");
    printf("1:0 your:%s\n", ft_itoa(0));
    printf("2:1 your:%s\n", ft_itoa(1));
    printf("3:-1 your:%s\n", ft_itoa(-1));
    printf("4:100 your:%s\n", ft_itoa(100));
    printf("5:-100 your:%s\n", ft_itoa(-100));
    printf("6:2147483647 your:%s\n", ft_itoa(2147483647));
    printf("7:-2147483648 your:%s\n", ft_itoa(-2147483648));
    printf("8:25 your:%s\n", ft_itoa(25));
    printf("9:-25 your:%s\n", ft_itoa(-25));
    printf("10:122345678 your:%s\n", ft_itoa(122345678));
    printf("11:-122345678 your:%s\n", ft_itoa(-122345678));
   printf("12:2 your:%s\n", ft_itoa(2));
    printf("13:-2 your:%s\n", ft_itoa(-2));
    printf("14:0 your:%s\n", ft_itoa(-0));
    printf("\n\n");

    

    char s18[] = "Hello world";
    char s28[] = "12345678";
    char s38[] = "1";
    char s48[] = "c";
    char s58[] = "qazWSXedc";
    char s78[] = "asxdcfv";
    char s88[] = "dsd ";
    char find18[] = "Hello world";
    char find28[] = "12345678";
    char find38[] = "1";
    char find48[] = "c";
    char find58[] = "qazWSXedc";
    char find78[] = "asxdcfv";
    char find88[] = "dsd ";
 
    printf("ft_memmove:\n");
    memmove(find18, find28, 3);
    ft_memmove(s18, s28, 3);
    printf("1: your:%s &&  original:%s\n", s18, find18);

    memmove(find38, find48, 1);
    ft_memmove(s38, s48, 1);
    printf("1: your:%s &&  original:%s\n", s38, find38);

    memmove(find58+3, find58, 6);
    ft_memmove(s58+3, s58, 6);
    printf("1: your:%s &&  original:%s\n", s58, find58);

     memmove(find78, find88, 1);
    ft_memmove(s78, s88, 1);
    printf("1: your:%s &&  original:%s\n", s78, find78);
    
    printf("\n\n");
    
    char s19[] = "Hello world";
    char s29[] = "1234567890";
    char s39[] = "";
    char s49[] = "c";
    char s59[] = "qazWSXedc";
    char s69[] = "qazWSXedc";
    char s79[] = "qazWSXedc";
    char s89[] = "          ";
   char find19[] = "Hello world";
    char find29[] = "12345678";
    char find39[] = "1";
    char find49[] = "c";
    char find59[] = "edcd";
    char find69[] = "Xed";
    char find79[] = "xedc";
    char find89[] = " ";
    printf("ft_memcmp:\n");
    printf("1: your:%d and original:%d \n", ft_memcmp(s19, find19, 5), memcmp(s19, find19, 5));
    printf("2: your:%d && original:%d \n", ft_memcmp(s29, find29, 10), memcmp(s29, find29, 10));
    printf("3: your:%d && original:%d \n", ft_memcmp(s39, find39, 10), memcmp(s39, find39, 10));
    printf("4: your:%d && original:%d \n", ft_memcmp(s49, find49, 100), memcmp(s49, find49, 100));
    printf("5: your:%d && original:%d \n", ft_memcmp(s59, find59, 3), memcmp(s59, find59, 3));
    printf("6: your:%d && original:%d \n", ft_memcmp(s69, find69, 10), memcmp(s69, find69, 10));
    printf("7: your:%d && original:%d \n", ft_memcmp(s79, find79, 2), memcmp(s79, find79, 2));
    printf("8: your:%d && original:%d \n", ft_memcmp(s89, find89, 2), memcmp(s89, find89, 2));
    printf("\n\n");

	char s10[] = "Hello world";
    char s20[] = "1234567890";
    char s30[] = "";
    char s40[] = "";
    char s50[] = "qazWSXedc";
    char s60[] = "qazWSXedc";
    char s70[] = "qazWSXedc";
    char s80[] = "    o      ";
    char s1_0[] = "Hello world";
    char s2_0[] = "1234567890";
    char s3_0[] = "";
    char s4_0[] = "";
    char s5_0[] = "qazWSXedc";
    char s6_0[] = "qazWSXedc";
    char s7_0[] = "qazWSXedc";
    char s8_0[] = "    o      ";
    printf("ft_memchr:\n");
    printf("1: your:%s && original:%s && dest: %s\n",  ft_memchr(s10, 'l',5), memchr(s1_0,'l', 5), s1);
    printf("2: your:%s && original:%s && dest: %s\n",  ft_memchr(s20, 52, 7), memchr(s2_0, 52, 7), s2);
    printf("3: your:%s && original:%s && dest: %s\n",  ft_memchr(s30, '4', 0), memchr(s3_0, '4', 0), s3);
    printf("4: your:%s && original:%s && dest: %s\n",  ft_memchr(s40, 100, 0), memchr(s4_0, 100, 0), s4);
    printf("5: your:%s && original:%s && dest: %s\n",  ft_memchr(s50, 'd', 3), memchr(s5_0, 'd', 3), s5);
    printf("6: your:%s && original:%s && dest: %s\n",  ft_memchr(s60, 'z', 10), memchr(s6_0, 'z', 10), s6);
    printf("7: your:%s && original:%s && dest: %s\n",  ft_memchr(s70, 97, 2), memchr(s7_0, 97, 2), s7);
    printf("8: your:%s && original:%s && dest: %s\n", ft_memchr(s80, 111, 8), memchr(s8_0, 111, 8), s8);
    printf("\n\n");

    char s111[] = "Hello world";
    char s211[] = "1234567890";
    char s311[] = "";
    char s411[] = "";
    char s511[] = "qazWSXedc";
    char s611[] = "qazWSXedc";
    char s711[] = "qazWSXedc";
    char s811[] = "    o      ";
    char s1_01[] = "Hello world";
    char s2_01[] = "1234567890";
    char s3_01[] = "";
    char s4_01[] = "b";
    char s5_01[] = "qazWSXedc";
    char s6_01[] = "qazWSXedc";
    char s7_01[] = "qazWSXedc";
    char s8_01[] = "    o      ";
    printf("ft_memset:\n");
    printf("1:your:%s && original:%s \n", ft_memset(s111, 12080,5), memset(s1_01, 12080, 5));
    printf("2: your:%s && original:%s \n", ft_memset(s211, 52, 7), memset(s2_01, 52, 7));
    printf("3: your:%s && original:%s \n", ft_memset(s311, '4', 0), memset(s3_01, '4', 0));
    printf("4: your:%s && original:%s \n", ft_memset(s411, 100, 1), memset(s4_01, 100, 1));
    printf("5: your:%s && original:%s \n", ft_memset(s511, 'd', 4), memset(s5_01, 'd', 4));
    printf("6: your:%s && original:%s \n", ft_memset(s611, 'z', 10), memset(s6_01, 'z', 10));
    printf("7: your:%s && original:%s \n", ft_memset(s711, 97, 2), memset(s7_01, 97, 2));
    printf("8: your:%s && original:%s \n", ft_memset(s811, 111, 1), memset(s8_01, 111, 1));
    printf("\n\n");

    printf("ft_atoi:\n");
    printf("ft_atoi\textra:[%d|%d]\t%s\n", ft_atoi("999999999999999999"),atoi("999999999999999999"), ft_atoi("999999999999999999")==atoi("999999999999999999")?"TRUE":"FALSE");
    printf("ft_atoi\textra:[%d|%d]\t%s\n", ft_atoi("-999999999999999999"),atoi("-999999999999999999"),ft_atoi("-999999999999999999")==atoi("-999999999999999999")?"TRUE":"FALSE");
    printf("ft_atoi\textra:[%d|%d]\t%s\n", ft_atoi("0"),atoi("0"),ft_atoi("0")==atoi("0")?"TRUE":"FALSE");
    printf("ft_atoi\textra:[%d|%d]\t%s\n", ft_atoi("-1"),atoi("-1"),ft_atoi("-1")==atoi("-1")?"TRUE":"FALSE");
    printf("ft_atoi\textra:[%d|%d]\t%s\n", ft_atoi("-2147483648"),atoi("-2147483648"),ft_atoi("-2147483648")==atoi("-2147483648")?"TRUE":"FALSE");
    printf("ft_atoi\textra:[%d|%d]\t%s\n", ft_atoi("       -5tgtg"),atoi("       -5tgtg"),ft_atoi("       -5tgtg")==atoi("       -5tgtg")?"TRUE":"FALSE");
    printf("ft_atoi\textra:[%d|%d]\t%s\n", ft_atoi("   -+1"),atoi("   -+1"),ft_atoi("   -+1")==atoi("   -+1")?"TRUE":"FALSE");
    printf("ft_atoi\textra:[%d|%d]\t%s\n", ft_atoi("2147483647"),atoi("2147483647"),ft_atoi("2147483647")==atoi("2147483647")?"TRUE":"FALSE");
    printf("ft_atoi\textra:[%d|%d]\t%s\n", ft_atoi("d"),atoi("d"),ft_atoi("d")==atoi("d")?"TRUE":"FALSE");
    printf("ft_atoi\textra:[%d|%d]\t%s\n", ft_atoi("1000"),atoi("1000"),ft_atoi("1000")==atoi("1000")?"TRUE":"FALSE");
    printf("\n\n");

    char s122[] = "Hello world";
    char s222[] = "1234567890";
    char s322[] = "";
    char s422[] = "";
    char s522[] = "qazWSXedc";
    char s622[] = "qazWSXedc";
    char s722[] = "qazWSXedc";
    char s822[] = "    o      ";
   char find122[] = "llo";
    char find222[] = "5555546";
    char find322[] = "5556641";
    char find422[] = "";
    char find522[] = "1234";
    char find622[] = "0988";
    char find722[] = "11111111111111111";
    char find822[] = "7 8 9";
    char s1_022[] = "Hello world";
    char s2_022[] = "1234567890";
    char s3_022[] = "";
    char s4_022[] = "";
    char s5_022[] = "qazWSXedc";
    char s6_022[] = "qazWSXedc";
    char s7_022[] = "qazWSXedc";
    char s8_022[] = "    o      ";
   char find1_022[] = "llo";
    char find2_022[] = "5555546";
    char find3_022[] = "1";
    char find4_022[] = "";
    char find5_022[] = "1234";
    char find6_022[] = "0988";
    char find7_022[] = "11111111111111111";
    char find8_022[] = "7 8 9";
    printf("ft_memcpy:\n");
    printf("1: your:%s && original:%s && dest: %s && source: %s\n", ft_memcpy(s122, find122, 5), memcpy(s1_022, find1_022, 5), s122, find122);
    printf("2: your:%s && original:%s && dest: %s && source: %s\n", ft_memcpy(s222, find222,  7), memcpy(s2_022, find2_022,  7), s222, find222);
    printf("3: your:%s && original:%s && dest: %s && source: %s\n", ft_memcpy(s322, find322,  0), memcpy(s3_022, find3_022, 0), s322, find322);
    printf("4: your:%s && original:%s && dest: %s && source: %s\n", ft_memcpy(s422, find422, 0), memcpy(s4_022, find4_022,  0), s422, find422);
    printf("5: your:%s && original:%s && dest: %s && source: %s\n", ft_memcpy(s522, find522, 3), memcpy(s5_022, find5_022, 3), s522, find522);
    printf("6: your:%s && original:%s && dest: %s && source: %s\n", ft_memcpy(s622, find622, 10), memcpy(s6_022, find6_022, 10), s622, find622);
    printf("7: your:%s && original:%s && dest: %s && source: %s\n", ft_memcpy(s722, find722,2), memcpy(s7_022, find7_022, 2), s722, find722);
    printf("8: your:%s && original:%s && dest: %s && source: %s\n", ft_memcpy(s822, find822, 6), memcpy(s8_022, find8_022, 6), s822, find822);
    printf("\n\n");
    
    char s133[] = "Hello world";
    char s233[] = "1234567890";
    char s333[] = "";
    char s433[] = "";
    char s533[] = "qazWSXedc";
    char s633[] = "qazWSXedc";
    char s733[] = "qazWSXedc";
    char s833[] = "    o      ";
    char find133[] = "llo";
    char find233[] = "5555546";
    char find333[] = "5556641";
    char find433[] = "";
    char find533[] = "1234";
    char find633[] = "0988";
    char find733[] = "11111111111111111";
    char find833[] = "7 8 9";
    char s1_033[] = "Hello world";
    char s2_033[] = "1234567890";
    char s3_033[] = "";
    char s4_033[] = "";
    char s5_033[] = "qazWSXedc";
    char s6_033[] = "qazWSXedc";
    char s7_033[] = "qazWSXedc";
    char s8_033[] = "          ";
   char find1_033[] = "llo";
    char find2_033[] = "5555546";
    char find3_033[] = "1";
    char find4_033[] = "";
    char find5_033[] = "1234";
    char find6_033[] = "0988";
    char find7_033[] = "11111111111111111";
    char find8_033[] = "7 8 9";
    printf("ft_memccpy:\n");
    printf("1: your:%s && original:%s && dest: %s && source: %s\n", ft_memccpy(s133, find133, 'l',5), memccpy(s1_033, find1_033,'l', 5), s133, find133);
    printf("2: your:%s && original:%s && dest: %s && source: %s\n", ft_memccpy(s233, find233, 52, 7), memccpy(s2_033, find2_033, 52, 7), s233, find233);
    printf("3: your:%s && original:%s && dest: %s && source: %s\n", ft_memccpy(s333, find333, '4', 0), memccpy(s3_033, find3_033,'4', 0), s333, find333);
    printf("4: your:%s && original:%s && dest: %s && source: %s\n", ft_memccpy(s433, find433,100, 0), memccpy(s4_033, find4_033, 100, 0), s433, find433);
    printf("5: your:%s && original:%s && dest: %s && source: %s\n", ft_memccpy(s533, find533,'d', 3), memccpy(s5_033, find5_033,'d', 3), s533, find533);
    printf("6: your:%s && original:%s && dest: %s && source: %s\n", ft_memccpy(s633, find633,'z', 10), memccpy(s6_033, find6_033,'z', 10), s633, find633);
    printf("7: your:%s && original:%s && dest: %s && source: %s\n", ft_memccpy(s733, find733,97, 2), memccpy(s7_033, find7_033,97, 2), s733, find733);
    printf("8: your:%s && original:%s && dest: %s && source: %s\n", ft_memccpy(s833, find833,111, 1), memccpy(s8_033, find8_033,111, 1), s833, find833);
    printf("\n\n");
    
    char s144[] = "Hello world";
    char s244[] = "1234567890";
    char s344[] = "";
    char s444[] = "c";
    char s544[] = "qazWSXedc";
    char s644[] = "qazWSXedc";
    char s744[] = "qaeeezWSXedc";
    char s844[] = "          ";
    char find144= 'o';
    char find244 = '\0';
    char find344= '\0';
     char find444= 'c';
    char find544 = 'e';
    char find644 = 'X';
    char find744 = 'e';
    char find844 = ' ';
    printf("ft_strchr:\n");
    printf("3: your:%s && original:%s \n", ft_strchr(s344, find344), strchr(s344, find344));
    printf("1: your:%s && original:%s \n", ft_strrchr(s144, find144), strrchr(s144, find144));
    printf("2: your:%s && original:%s \n", ft_strrchr(s244, find244), strrchr(s244, find244));
    printf("4: your:%s && original:%s \n", ft_strrchr(s444, find444), strrchr(s444, find444));
    printf("5: your:%s && original:%s \n", ft_strrchr(s544, find544), strrchr(s544, find544));
    printf("6: your:%s && original:%s \n", ft_strrchr(s644, find644), strrchr(s644, find644));
    printf("7: your:%s && original:%s \n", ft_strrchr(s744, find744), strrchr(s744, find744));
    printf("8: your:%s && original:%s \n", ft_strrchr(s844, find844), strrchr(s844, find844));
    printf("\n\n");

    char s155[] = "ddas";
    char s255[] = "1234567890";
    char s355[] = "";
    char s455[] = "c";
    char s555[] = "qazWSXedc";
    char s655[] = "qazWSXedc";
    char s755[] = "qazWSXedc";
    char s855[] = "          ";

    char find155[4] = "aa";
    char find255[] = "d";
    char find355[] = "";
    char find455[10] = "c";
    char find555[] = "edcd";
    char find655[] = "Xed";
    char find755[] = "xedc";
    char find855[] = " ";
 

    char s1_155[] = "ddas";
     char s2_155[] = "1234567890";
     char s3_155[] = "";
     char s4_155[] = "c";
     char s5_155[] = "qazWSXedc";
     char s6_155[] = "qazWSXedc";
     char s7_155[] = "qazWSXedc";
     char s8_155[] = "          ";
   
    char find1_155[4] = "aa";
     char find2_155[] = "d";
     char find3_155[] = "";
     char find4_155[] = "c";
     char find5_155[] = "edcd";
     char find6_155[] = "Xed";
    char find7_155[] = "xedc";
     char find8_155[] = " ";
    
    printf("ft_strchr:\n");
    char *s9_155 = malloc(900);
    char *s955 = malloc(900);
    strcpy(s9_155, "aaabbbcccddd");
    char *find9_1555 = strdup("aaabbbcccddd");
    strcpy(s955, "aaabbbcccddd");
    char *find9555 = strdup("aaabbbcccddd");
 
   printf("1: your:%zu and  original:%lu && %s && %s\n", ft_strlcat(s155, find155, 3), strlcat(s1_155, find1_155, 3), s155, s1_155);
    printf("2: your:%zu && original:%lu && %s && %s\n", ft_strlcat(s255, find255, 1), strlcat(s2_155, find2_155, 1),s255, s2_155);
     printf("3: your:%zu && original:%lu &&%s &&%s \n", ft_strlcat(s355, find355, 1), strlcat(s3_155, find3_155, 1),s355, s3_155);
     printf("4: your:%zu && original:%lu && %s && %s\n", ft_strlcat(s455, find455, 1), strlcat(s4_155, find4_155, 1),s455, s4_155);
     printf("5: your:%zu && original:%lu && %s && %s\n", ft_strlcat(s555, find555, 3), strlcat(s5_155, find5_155, 3),s555, s5_155);
     printf("6: your:%zu && original:%lu && %s && %s\n", ft_strlcat(s655, find655, 10), strlcat(s6_155, find6_155, 10),s655, s6_155);
     printf("7: your:%zu && original:%lu && %s && %s\n", ft_strlcat(s755, find755, 2), strlcat(s7_155, find7_155, 2),s755, s7_155);
     printf("8: your:%zu && original:%lu && %s && %s\n", ft_strlcat(s855, find855, 2), strlcat(s8_155, find8_155, 2),s855, s8_155);
    printf("9: your:%zu && original:%lu && %s && %s\n", ft_strlcat(s955, find9555, -1), strlcat(s9_155, find9_1555, -1),s955, s9_155);
    printf("\n\n");

    
    char s166[] = "Hello world";
    char s266[] = "1234567890";
    char s366[] = "";
    char s466[] = "";
    char s566[] = "qazWSXedc";
    char s666[] = "qazWSXedc";
    char s766[] = "qazWSXedc";
    char s866[] = "          ";
   char find166[] = "llo";
    char find266[] = "890";
    char find366[] = "1";
    char find466[] = "";
    char find566[] = "edcd";
    char find666[] = "Xed";
    char find766[] = "xedc";
    char find866[] = " ";
    printf("ft_strnchr:\n");
    printf("1: your:%s && original:%s \n", ft_strnstr(s166, find166, 5), strnstr(s166, find166, 5));
    printf("2: your:%s && original:%s \n", ft_strnstr(s266, find266, 11), strnstr(s266, find266, 11));
    printf("3: your:%s && original:%s \n", ft_strnstr(s366, find366, 0), strnstr(s366, find366, 0));
    printf("4: your:%s && original:%s \n", ft_strnstr(s466, find466, 100), strnstr(s466, find466, 100));
    printf("5: your:%s && original:%s \n", ft_strnstr(s566, find566, 3), strnstr(s566, find566, 3));
    printf("6: your:%s && original:%s \n", ft_strnstr(s666, find666, 10), strnstr(s666, find666, 10));
    printf("7: your:%s && original:%s \n", ft_strnstr(s766, find766, 2), strnstr(s766, find766, 2));
    printf("8: your:%s && original:%s \n", ft_strnstr(s866, find866, 25), strnstr(s866, find866, 25));
    printf("\n\n");
           
    char s177[] = "Hello world";
    char s277[] = "1234567890";
    char s377[] = "";
    char s477[] = "";
    char s577[] = "qazWSXedc";
    char s677[] = "qazWSXedc";
    char s777[] = "qazWSXedc";
    char s877[] = "          ";
   char find177[] = "llo";
    char find277[] = "890";
    char find377[] = "1";
    char find477[] = "\0";
    char find577[] = "edcd";
    char find677[] = "Xed";
    char find777[] = "xedc";
    char find877[] = " ";
 
    printf("ft_strstr:\n");
    printf("1: %s && original:%s \n", ft_strstr(s177, find177), strstr(s177, find177));
    printf("2: %s && original:%s \n", ft_strstr(s277, find277), strstr(s277, find277));
    printf("3: %s && original:%s \n", ft_strstr(s377, find377), strstr(s377, find377));
    printf("4: %s && original:%s \n", ft_strstr(s477, find477), strstr(s477, find477));
    printf("5: %s && original:%s \n", ft_strstr(s577, find577), strstr(s577, find577));
    printf("6: %s && original:%s \n", ft_strstr(s677, find677), strstr(s677, find677));
    printf("7: %s && original:%s \n", ft_strstr(s777, find777), strstr(s777, find777));
    printf("8: %s && original:%s \n", ft_strstr(s877, find877), strstr(s877, find877));
    printf("\n\n");
    

    printf("ft_tolower:\n");
    printf("original: qa111zWSXedc546RFVtgbTGByynYHNu222jm\n");
    char s[] = "qa111zWSXedc546RFVtgbTGByynYHNu222jm";
    i = 0;

    while (s[i] != '\0')
    {
        printf("%c", ft_tolower(s[i]));
        i++;
    }    
    i = 0;    
    printf("\n");
    printf("ft_toupper:\n");
    while (s[i] != '\0')
    {
        printf("%c", ft_toupper(s[i]));
        i++;
    }
    printf("\n\n");
           
           
    char s188[] = "Hello world";
    char s288[12] = "Hello world";
    char s388[24] = "Hello world, i like you";
    char s1_188[] = "Hello world";
    char s2_288[12] = "Hello world";
    char s3_388[24] = "Hello world, i like you";
    i = 0;

    printf("bzero:\n");
    ft_bzero(s188, 1);
    bzero(s1_188, 1);
    
    while (i < 12)
    {
        printf("1: %c   original:%c\n", s188[i], s1_188[i]);
        i++;
    }
    i=0;
    ft_bzero(s288, 0);
    bzero(s2_288, 0);
    while (i < 12)
    {
        printf("1: %c   original:%c\n", s288[i], s2_288[i]);
        i++;
    }
    ft_bzero(&s388, 15);
    bzero(&s3_388, 15);
    i = 0;
     while (i < 24)
    {
        printf("1: %c   original:%c\n", s388[i], s3_388[i]);
        i++;
    }

   return(0);
}
