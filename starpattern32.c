main()
{

    int i,j,n;
    printf("enter no of lines");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=n;j++)
        {
            if(j==i||j==n+1-i)
                printf("*");
            else
                printf(" ");

        }
        printf("\n");
    }
}

