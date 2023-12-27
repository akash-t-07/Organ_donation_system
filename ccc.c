void main()
{
    int a[10] , i = 0;
    for(i = 0 ; i<10 ; i++)
         a[i] = 9 - i;
    for(i = 0 ; i < 10 ; i++)
         a[i] = a[a[i]];
    for(i = 0 ; i < 10 ; i++)
         printf("%d " , a[i]);
}
