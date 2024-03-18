temp = num;
    count = 0;
    while(temp != 0){
        octnum[count] = temp%8;
        temp/=8;
        count++;
    }
    printf("\n");
    printf("octal number: ");
    for(i = count-1; i >= 0; i--){
        printf("%d", octnum[i]);
    }