
void splash_screen(char splash_file[]){
FILE *fptr;
char str[10000];
fptr=fopen(splash_file,"r");
while(fgets(str,10000,fptr)){
    printf("%s",str);
}
fclose(fptr);
sleep(2);
printf("press 'enter' to step into the next steps:\n");
getchar();
system("cls");
}
