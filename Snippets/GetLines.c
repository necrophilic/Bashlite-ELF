/*
Originally From [Azula]
Anyways, this is a snippet for Scanning specific files and displaying the amount (int) of lines in said file.
this can be used in other snippets simply by doing || GetLdap();
Enjoy ~ Cri
*/
 
char GetLdap()
{
    FILE *fp;
    char *out[1024];
    fp = popen("cat ldap.txt | wc -l", "r");
    if (fp == NULL) 
    {
        printf("Failed to run command!\n");
    }
    while(fgets(out, sizeof(out), fp) != NULL) 
    {
        sprintf(botnet, "LDAP %s", out);
        if(send(thefd, botnet, strlen(botnet), MSG_NOSIGNAL) == -1);
    }
    pclose(fp); 
}
